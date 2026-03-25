#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_0159AC2F3F5F9515_OFFSET UNITYSDK_OFFSET(0x175C6130)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_968C955E720C3568_OFFSET UNITYSDK_OFFSET(0x175C6350)
#define RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C6270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveRogueFormulaRequiredRogueBuffConfig_TypeDefinitionIndex = 18025;

	class RogueActRemoveRogueFormulaRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0159AC2F3F5F9515(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_0159AC2F3F5F9515_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_968C955E720C3568(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveRogueFormulaRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_968C955E720C3568_OFFSET))(a1, a2);
		}
	};
}
