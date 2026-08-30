#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/FriendChatTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABHEADERVM__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CDFB0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatRoomTabHeaderVM_TypeDefinitionIndex = 73343;

	class FriendChatRoomTabHeaderVM : public ::RPG::Client::Ui::Samples::FriendChatTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABHEADERVM__CTOR_OFFSET))(this);
		}
	};
}
