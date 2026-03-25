#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A4C2C0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A4C330)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A4BAE0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A4C2A0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_CuePointCallback_TypeDefinitionIndex = 31235;

	class Player_CuePointCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriMana::EventPoint& eventPoint)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_INVOKE_OFFSET))(this, eventPoint);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriMana::EventPoint& eventPoint, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriMana::EventPoint&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_BEGININVOKE_OFFSET))(this, eventPoint, callback, object);
		}

		::System::Void EndInvoke(::CriWare::CriMana::EventPoint& eventPoint, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_ENDINVOKE_OFFSET))(this, eventPoint, result);
		}
	};
}
