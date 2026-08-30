#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

namespace RPG::Client::Ui::Samples { class FriendChatRoomTabHeaderVM; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE3CDF20)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CDF70)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatRoomTabContentControl_TypeDefinitionIndex = 73351;

	class FriendChatRoomTabContentControl : public ::Sofa::BaseSofaControl_1<::RPG::Client::Ui::Samples::FriendChatRoomTabHeaderVM*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatRoomTabHeaderVM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatRoomTabHeaderVM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATROOMTABCONTENTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
