#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_METHOD_3_670FC07B24EC1514_OFFSET UNITYSDK_OFFSET(0x1D3F70B0)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_METHOD_3_C6D18A52A64DD610_OFFSET UNITYSDK_OFFSET(0x1D3F7100)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F70F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePersonaStyleSelectMaxRerollCountConfig_TypeDefinitionIndex = 17589;

	class RogueModifierChangePersonaStyleSelectMaxRerollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_670FC07B24EC1514(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_METHOD_3_670FC07B24EC1514_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6D18A52A64DD610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleSelectMaxRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLESELECTMAXREROLLCOUNTCONFIG_METHOD_3_C6D18A52A64DD610_OFFSET))(a1, a2);
		}
	};
}
