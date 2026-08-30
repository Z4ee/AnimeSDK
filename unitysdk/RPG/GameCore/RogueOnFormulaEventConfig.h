#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG_METHOD_2_939FBC75BD5E608B_OFFSET UNITYSDK_OFFSET(0x1E544F70)
#define RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E544FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueOnFormulaEventConfig_TypeDefinitionIndex = 17577;

	class RogueOnFormulaEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_939FBC75BD5E608B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueOnFormulaEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueOnFormulaEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONFORMULAEVENTCONFIG_METHOD_2_939FBC75BD5E608B_OFFSET))(a1, a2);
		}
	};
}
