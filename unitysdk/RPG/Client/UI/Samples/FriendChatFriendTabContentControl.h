#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

namespace RPG::Client::Ui::Samples { class FriendChatFriendTabVM; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE3CC610)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CC660)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatFriendTabContentControl_TypeDefinitionIndex = 73337;

	class FriendChatFriendTabContentControl : public ::Sofa::BaseSofaControl_1<::RPG::Client::Ui::Samples::FriendChatFriendTabVM*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatFriendTabVM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatFriendTabVM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATFRIENDTABCONTENTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
