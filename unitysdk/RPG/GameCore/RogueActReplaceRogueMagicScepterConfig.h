#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_0E0883B69CB24AF1_OFFSET UNITYSDK_OFFSET(0x175C7E30)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_1D69BDF13AABAF3C_OFFSET UNITYSDK_OFFSET(0x175C7C10)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C7D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueMagicScepterConfig_TypeDefinitionIndex = 18053;

	class RogueActReplaceRogueMagicScepterConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1D69BDF13AABAF3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_1D69BDF13AABAF3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0E0883B69CB24AF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_0E0883B69CB24AF1_OFFSET))(a1, a2);
		}
	};
}
