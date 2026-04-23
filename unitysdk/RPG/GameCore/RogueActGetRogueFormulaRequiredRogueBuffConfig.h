#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_5413E01EBA419CA9_OFFSET UNITYSDK_OFFSET(0x18CC3370)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_660ED408B68F2A44_OFFSET UNITYSDK_OFFSET(0x18CC3590)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC34B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueFormulaRequiredRogueBuffConfig_TypeDefinitionIndex = 18668;

	class RogueActGetRogueFormulaRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5413E01EBA419CA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_5413E01EBA419CA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_660ED408B68F2A44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_660ED408B68F2A44_OFFSET))(a1, a2);
		}
	};
}
