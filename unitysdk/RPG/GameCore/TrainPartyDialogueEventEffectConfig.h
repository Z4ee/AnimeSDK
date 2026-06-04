#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG_METHOD_2_49B4A0675CB2D02F_OFFSET UNITYSDK_OFFSET(0x19DF4BD0)
#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF4C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyDialogueEventEffectConfig_TypeDefinitionIndex = 17201;

	class TrainPartyDialogueEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_49B4A0675CB2D02F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyDialogueEventEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyDialogueEventEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG_METHOD_2_49B4A0675CB2D02F_OFFSET))(a1, a2);
		}
	};
}
