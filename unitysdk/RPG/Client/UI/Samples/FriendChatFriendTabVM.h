#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/FriendChatTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABVM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE530)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatFriendTabVM_TypeDefinitionIndex = 73341;

	class FriendChatFriendTabVM : public ::RPG::Client::Ui::Samples::FriendChatTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABVM__CTOR_OFFSET))(this);
		}
	};
}
