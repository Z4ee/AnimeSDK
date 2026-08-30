#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_05796DC41A8A6E82_OFFSET UNITYSDK_OFFSET(0x1D918E40)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_8EC7435823D5C29E_OFFSET UNITYSDK_OFFSET(0x1D918E90)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D918E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondWithDifficultyCompConfig_TypeDefinitionIndex = 19575;

	class RogueCondWithDifficultyCompConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_05796DC41A8A6E82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_05796DC41A8A6E82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8EC7435823D5C29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_8EC7435823D5C29E_OFFSET))(a1, a2);
		}
	};
}
