#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE6CC70)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE6CCE0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE6A240)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6CC00)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_CuePointCallback_TypeDefinitionIndex = 38064;

	class Player_CuePointCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CriWare::CriMana::EventPoint& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriMana::EventPoint& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriMana::EventPoint&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::CriWare::CriMana::EventPoint& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACK_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
