#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG_METHOD_2_0B8FB17B5259CBF0_OFFSET UNITYSDK_OFFSET(0x1C15FD80)
#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15FE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyDialogueEventOptionConfig_TypeDefinitionIndex = 17362;

	class TrainPartyDialogueEventOptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 OptionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0B8FB17B5259CBF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyDialogueEventOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyDialogueEventOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG_METHOD_2_0B8FB17B5259CBF0_OFFSET))(a1, a2);
		}
	};
}
