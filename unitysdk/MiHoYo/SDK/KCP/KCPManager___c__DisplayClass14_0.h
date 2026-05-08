#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::KCP { class KCPManager; }
namespace System { class String; }
namespace System::Threading { class WaitCallback; }

#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__0_OFFSET UNITYSDK_OFFSET(0x1A1EA8D0)
#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__1_OFFSET UNITYSDK_OFFSET(0x1A1EA950)
#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E9520)

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPManager___c__DisplayClass14_0_TypeDefinitionIndex = 35464;

	class KCPManager___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* strHost; // 0x10
		::MiHoYo::SDK::KCP::KCPManager* __4__this; // 0x18
		::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo; // 0x20
		::System::Threading::WaitCallback* __9__1; // 0x60
		::System::UInt16 nPort; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__0_OFFSET))(this);
		}

		::System::Void _Connect_b__1(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS14_0__CONNECT_B__1_OFFSET))(this, _);
		}
	};
}
