#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingPartRetentionItemViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC895840)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewPartHintDialogViewModel_TypeDefinitionIndex = 80680;

	class B51RacingNewPartHintDialogViewModel : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingPartRetentionItemViewModel* NewPartItem; // 0x10
		::System::Action* OnClose; // 0x18
		::RPG::Client::B51Racing::B51RacingPartRetentionItemViewModel* OldPartItem; // 0x20
		::RPG::GameCore::B51RacingPartType PartSlotType; // 0x28
		::System::Int32 SelectedIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
