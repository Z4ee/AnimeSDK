#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x165047D0)
#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16504820)
#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x165019D0)
#define CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16504760)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_StatusChangeCallback_TypeDefinitionIndex = 38924;

	class Player_StatusChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CriWare::CriMana::Player_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriMana::Player_Status a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriMana::Player_Status, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STATUSCHANGECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
