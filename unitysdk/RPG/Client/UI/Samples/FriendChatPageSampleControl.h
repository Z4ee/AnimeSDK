#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1295;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ListView; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class TabView; }
namespace RPG::Client::ResBar { class TopBarControl; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE4039A0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE405220)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPageSampleControl_TypeDefinitionIndex = 73435;

	class FriendChatPageSampleControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1295*>
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x70
		::RPG::Client::ListView* _ListView; // 0x78
		::RPG::Client::LocalizedText* _Title; // 0x80
		::RPG::Client::AnimatorButton* _RenameFirstContactButton; // 0x88
		::RPG::Client::AnimatorButton* _AddContactButton; // 0x90
		::RPG::Client::AnimatorButton* _RemoveLastContactButton; // 0x98
		::RPG::Client::AnimatorButton* _ScrollToLastContactButton; // 0xA0
		::System::Single _ScrollToItemDuration; // 0xA8
		::RPG::Client::AnimatorButton* _PreviousTabButton; // 0xB0
		::RPG::Client::AnimatorButton* _NextTabButton; // 0xB8
		::RPG::Client::ResBar::TopBarControl* _TopBarControl; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1295*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1295*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
