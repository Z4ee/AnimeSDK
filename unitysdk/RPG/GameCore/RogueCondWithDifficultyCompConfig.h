#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_217C86008C138F18_OFFSET UNITYSDK_OFFSET(0x18CF9350)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_8EC7435823D5C29E_OFFSET UNITYSDK_OFFSET(0x18CF9600)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF94D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondWithDifficultyCompConfig_TypeDefinitionIndex = 18795;

	class RogueCondWithDifficultyCompConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_217C86008C138F18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_217C86008C138F18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8EC7435823D5C29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_6_8EC7435823D5C29E_OFFSET))(a1, a2);
		}
	};
}
