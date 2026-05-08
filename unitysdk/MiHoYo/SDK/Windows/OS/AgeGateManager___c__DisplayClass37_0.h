#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Windows::OS { class AgeGateManager; }

#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19494760)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__TRYLOADTICKET_B__3_OFFSET UNITYSDK_OFFSET(0x19494770)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass37_0_TypeDefinitionIndex = 19214;

	class AgeGateManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Windows::OS::AgeGateManager* __4__this; // 0x10
		::System::Int64 ts; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryLoadTicket_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__TRYLOADTICKET_B__3_OFFSET))(this);
		}
	};
}
