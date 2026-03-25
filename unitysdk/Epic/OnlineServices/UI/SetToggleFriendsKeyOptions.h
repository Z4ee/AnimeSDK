#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/UI/KeyCombination.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONS_GET_KEYCOMBINATION_OFFSET UNITYSDK_OFFSET(0x83CD9F0)
#define EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONS_SET_KEYCOMBINATION_OFFSET UNITYSDK_OFFSET(0x83CDA00)
#define EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83CDA10)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int SetToggleFriendsKeyOptions_TypeDefinitionIndex = 35327;

	class SetToggleFriendsKeyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::UI::KeyCombination _KeyCombination_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::UI::KeyCombination get_KeyCombination()
		{
			return ((::Epic::OnlineServices::UI::KeyCombination(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONS_GET_KEYCOMBINATION_OFFSET))(this);
		}

		::System::Void set_KeyCombination(::Epic::OnlineServices::UI::KeyCombination value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::KeyCombination))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETTOGGLEFRIENDSKEYOPTIONS_SET_KEYCOMBINATION_OFFSET))(this, value);
		}
	};
}
