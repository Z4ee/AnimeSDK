#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E56230)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS36_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_B__0_OFFSET UNITYSDK_OFFSET(0x15E57770)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass36_0_TypeDefinitionIndex = 7671;

	class AgeGateManager___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog; // 0x10
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnParentalConsentInputEmailButtonPressed_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS36_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_B__0_OFFSET))(this, response);
		}
	};
}
