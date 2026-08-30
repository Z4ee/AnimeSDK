#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::Ui::Samples { class FriendChatContactVM; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE3CB9E0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CC1A0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatContactControl_TypeDefinitionIndex = 73335;

	class FriendChatContactControl : public ::Sofa::BaseSofaControl_1<::RPG::Client::Ui::Samples::FriendChatContactVM*>
	{
	public:
		::UnityEngine::UI::Image* _AvatarImage; // 0x58
		::RPG::Client::LocalizedText* _NameText; // 0x60
		::RPG::Client::LocalizedText* _LevelText; // 0x68
		::RPG::UINavigation::UINavigationButton* _UnreadButton; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatContactVM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::RPG::Client::Ui::Samples::FriendChatContactVM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
