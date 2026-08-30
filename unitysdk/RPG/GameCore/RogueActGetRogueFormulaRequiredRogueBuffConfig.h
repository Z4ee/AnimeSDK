#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_281884B65D3A5688_OFFSET UNITYSDK_OFFSET(0x1D3B7AB0)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_660ED408B68F2A44_OFFSET UNITYSDK_OFFSET(0x1D3B7B00)
#define RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueFormulaRequiredRogueBuffConfig_TypeDefinitionIndex = 19438;

	class RogueActGetRogueFormulaRequiredRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_281884B65D3A5688(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_281884B65D3A5688_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_660ED408B68F2A44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueFormulaRequiredRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEFORMULAREQUIREDROGUEBUFFCONFIG_METHOD_6_660ED408B68F2A44_OFFSET))(a1, a2);
		}
	};
}
