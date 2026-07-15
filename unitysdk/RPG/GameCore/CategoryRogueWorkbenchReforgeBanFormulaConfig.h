#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG_METHOD_2_6AA4E669DBBA9C82_OFFSET UNITYSDK_OFFSET(0x1B70B620)
#define RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70B660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CategoryRogueWorkbenchReforgeBanFormulaConfig_TypeDefinitionIndex = 17041;

	class CategoryRogueWorkbenchReforgeBanFormulaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6AA4E669DBBA9C82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CategoryRogueWorkbenchReforgeBanFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CategoryRogueWorkbenchReforgeBanFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG_METHOD_2_6AA4E669DBBA9C82_OFFSET))(a1, a2);
		}
	};
}
