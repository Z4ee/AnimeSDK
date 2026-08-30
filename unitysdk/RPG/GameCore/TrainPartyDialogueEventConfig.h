#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyDialogueEventOptionConfig; }

#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTCONFIG_METHOD_2_563C963C97290B8A_OFFSET UNITYSDK_OFFSET(0x1D5DD010)
#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DD100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyDialogueEventConfig_TypeDefinitionIndex = 17881;

	class TrainPartyDialogueEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyDialogueEventOptionConfig*>* OptionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_563C963C97290B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyDialogueEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyDialogueEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTCONFIG_METHOD_2_563C963C97290B8A_OFFSET))(a1, a2);
		}
	};
}
