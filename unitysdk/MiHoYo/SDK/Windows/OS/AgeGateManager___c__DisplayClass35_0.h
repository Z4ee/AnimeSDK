#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }

#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187C1480)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS35_0__OPENAGEGATEWEBPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x187C3DE0)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass35_0_TypeDefinitionIndex = 8313;

	class AgeGateManager___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action* failCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenAgeGateWebPage_b__0(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS35_0__OPENAGEGATEWEBPAGE_B__0_OFFSET))(this, a1);
		}
	};
}
