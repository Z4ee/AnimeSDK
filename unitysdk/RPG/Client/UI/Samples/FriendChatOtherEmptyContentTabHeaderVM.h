#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/FriendChatTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATOTHEREMPTYCONTENTTABHEADERVM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE540)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatOtherEmptyContentTabHeaderVM_TypeDefinitionIndex = 73344;

	class FriendChatOtherEmptyContentTabHeaderVM : public ::RPG::Client::Ui::Samples::FriendChatTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATOTHEREMPTYCONTENTTABHEADERVM__CTOR_OFFSET))(this);
		}
	};
}
