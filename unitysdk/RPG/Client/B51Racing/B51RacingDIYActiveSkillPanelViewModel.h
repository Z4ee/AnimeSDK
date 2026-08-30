#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillItemViewModel; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYACTIVESKILLPANELVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC8645E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYActiveSkillPanelViewModel_TypeDefinitionIndex = 80662;

	class B51RacingDIYActiveSkillPanelViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CarIDs; // 0x10
		::Il2CppArray<::RPG::Client::B51Racing::B51RacingCarActiveSkillItemViewModel*>* ActiveSkillOptions; // 0x18
		::System::Action_1<::System::UInt32>* OnItemSelected; // 0x20
		::System::UInt32 SelectedCarID; // 0x28
		::System::Int32 SelectedIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYACTIVESKILLPANELVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
