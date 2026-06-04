#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_2EB973A03E9E300B_OFFSET UNITYSDK_OFFSET(0x19836290)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_392FA295D624CBB5_OFFSET UNITYSDK_OFFSET(0x19836230)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19836280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentRandomStepConfig_TypeDefinitionIndex = 15965;

	class HipplenIncidentRandomStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Weights; // 0x10
		::Il2CppArray<::RPG::GameCore::HipplenIncidentStepConfig*>* Steps; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_392FA295D624CBB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_392FA295D624CBB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EB973A03E9E300B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_2EB973A03E9E300B_OFFSET))(a1, a2);
		}
	};
}
