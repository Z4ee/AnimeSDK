#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KCP/KCPLogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFFF30)
#define MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS22_0__KCPKIBANAREPORT_B__0_OFFSET UNITYSDK_OFFSET(0x1AD00DE0)

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPManager___c__DisplayClass22_0_TypeDefinitionIndex = 44920;

	class KCPManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* msg; // 0x10
		::System::String* eventStr; // 0x18
		::MiHoYo::SDK::KCP::KCPLogLevel logLevel; // 0x20
		::System::Int32 code; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _KCPKibanaReport_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCP_KCPMANAGER___C__DISPLAYCLASS22_0__KCPKIBANAREPORT_B__0_OFFSET))(this);
		}
	};
}
