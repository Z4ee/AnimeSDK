#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7B3610)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B3650)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1B7B3660)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c_TypeDefinitionIndex = 8996;

	class AgeGateManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager___c_TypeDefinitionIndex)->GetStaticField(0xC520);
		}
		static ::MiHoYo::SDK::Console::OS::AgeGateManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::AgeGateManager___c**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager___c_TypeDefinitionIndex)->GetStaticField(0xC528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateFromErrorCode_b__8_0(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__8_0_OFFSET))(this, a1);
		}
	};
}
