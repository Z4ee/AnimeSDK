#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::KCP { class KCPManager; }
namespace System { class String; }
namespace System::Threading { class WaitCallback; }

#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__0_OFFSET UNITYSDK_OFFSET(0x1C6FD490)
#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__1_OFFSET UNITYSDK_OFFSET(0x1C6FD520)
#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FBD50)

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPManager___c__DisplayClass14_0_TypeDefinitionIndex = 47155;

	class KCPManager___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Threading::WaitCallback* __9__1; // 0x10
		::MiHoYo::SDK::KCP::KCPManager* __4__this; // 0x18
		::System::String* strHost; // 0x20
		::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo; // 0x28
		::System::UInt16 nPort; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__0_OFFSET))(this);
		}

		::System::Void _Connect_b__1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__1_OFFSET))(this, a1);
		}
	};
}
