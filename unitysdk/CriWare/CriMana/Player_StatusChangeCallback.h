#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12C1B350)
#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12C1B3A0)
#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x12C1A0C0)
#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1B330)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_StatusChangeCallback_TypeDefinitionIndex = 36956;

	class Player_StatusChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriMana::Player_Status status)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_INVOKE_OFFSET))(this, status);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriMana::Player_Status status, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriMana::Player_Status, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_BEGININVOKE_OFFSET))(this, status, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
