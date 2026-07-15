#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETALLKEYWORDCONFIG_METHOD_6_A4DCE7A6145E70CA_OFFSET UNITYSDK_OFFSET(0x1D02DC20)
#define RPG_GAMECORE_ROGUEACTGETALLKEYWORDCONFIG_METHOD_6_AABE70D66A3B3126_OFFSET UNITYSDK_OFFSET(0x1D02DC70)
#define RPG_GAMECORE_ROGUEACTGETALLKEYWORDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetAllKeyWordConfig_TypeDefinitionIndex = 18908;

	class RogueActGetAllKeyWordConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLKEYWORDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A4DCE7A6145E70CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllKeyWordConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllKeyWordConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLKEYWORDCONFIG_METHOD_6_A4DCE7A6145E70CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AABE70D66A3B3126(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetAllKeyWordConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetAllKeyWordConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETALLKEYWORDCONFIG_METHOD_6_AABE70D66A3B3126_OFFSET))(a1, a2);
		}
	};
}
