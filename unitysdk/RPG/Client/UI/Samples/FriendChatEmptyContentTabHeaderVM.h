#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/FriendChatTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATEMPTYCONTENTTABHEADERVM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE3E0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatEmptyContentTabHeaderVM_TypeDefinitionIndex = 73343;

	class FriendChatEmptyContentTabHeaderVM : public ::RPG::Client::Ui::Samples::FriendChatTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATEMPTYCONTENTTABHEADERVM__CTOR_OFFSET))(this);
		}
	};
}
