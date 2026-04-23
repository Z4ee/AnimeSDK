#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_2B75FDE152604AFB_OFFSET UNITYSDK_OFFSET(0x18A03DD0)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_7E126CC6880B74F9_OFFSET UNITYSDK_OFFSET(0x18A03E30)
#define RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A03E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentRandomStepConfig_TypeDefinitionIndex = 15912;

	class HipplenIncidentRandomStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Weights; // 0x10
		::Il2CppArray<::RPG::GameCore::HipplenIncidentStepConfig*>* Steps; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B75FDE152604AFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_2B75FDE152604AFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E126CC6880B74F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentRandomStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentRandomStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTRANDOMSTEPCONFIG_METHOD_3_7E126CC6880B74F9_OFFSET))(a1, a2);
		}
	};
}
