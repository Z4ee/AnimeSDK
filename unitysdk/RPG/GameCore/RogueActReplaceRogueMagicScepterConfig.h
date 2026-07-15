#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_0E0883B69CB24AF1_OFFSET UNITYSDK_OFFSET(0x1C49DE90)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_AFA5CC5950D73E0D_OFFSET UNITYSDK_OFFSET(0x1C49DE40)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49DE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueMagicScepterConfig_TypeDefinitionIndex = 18941;

	class RogueActReplaceRogueMagicScepterConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AFA5CC5950D73E0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_AFA5CC5950D73E0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0E0883B69CB24AF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_6_0E0883B69CB24AF1_OFFSET))(a1, a2);
		}
	};
}
