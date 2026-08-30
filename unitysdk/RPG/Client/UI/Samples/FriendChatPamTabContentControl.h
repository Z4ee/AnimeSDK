#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

namespace RPG::Client::Ui::Samples { class FriendChatPamTabVM; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x1DDBFD10)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBFD60)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPamTabContentControl_TypeDefinitionIndex = 73349;

	class FriendChatPamTabContentControl : public ::Sofa::BaseSofaControl_1<::RPG::Client::Ui::Samples::FriendChatPamTabVM*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatPamTabVM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatPamTabVM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAMTABCONTENTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
