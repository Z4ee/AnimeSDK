#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPRAYQUESTCONFIG_METHOD_6_D81EC5DBFC13886A_OFFSET UNITYSDK_OFFSET(0x1C5C5140)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPRAYQUESTCONFIG_METHOD_6_E4D7030791B2E2C6_OFFSET UNITYSDK_OFFSET(0x1C5C5190)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPRAYQUESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C5180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasPrayQuestConfig_TypeDefinitionIndex = 18580;

	class GridFightCondCheckHasPrayQuestConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPRAYQUESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D81EC5DBFC13886A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasPrayQuestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasPrayQuestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPRAYQUESTCONFIG_METHOD_6_D81EC5DBFC13886A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E4D7030791B2E2C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPRAYQUESTCONFIG_METHOD_6_E4D7030791B2E2C6_OFFSET))(a1, a2);
		}
	};
}
