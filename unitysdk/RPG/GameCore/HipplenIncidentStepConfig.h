#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_METHOD_2_233A01F779A7A39C_OFFSET UNITYSDK_OFFSET(0x18A030B0)
#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_METHOD_2_A716088A2B7F810F_OFFSET UNITYSDK_OFFSET(0x18A041F0)
#define RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentStepConfig_TypeDefinitionIndex = 15908;

	class HipplenIncidentStepConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_233A01F779A7A39C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_METHOD_2_233A01F779A7A39C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A716088A2B7F810F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTEPCONFIG_METHOD_2_A716088A2B7F810F_OFFSET))(a1, a2);
		}
	};
}
