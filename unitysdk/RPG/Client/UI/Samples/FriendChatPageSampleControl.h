#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_59AA224BB47C8EC6;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ListView; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class TabView; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE3CC6C0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CD840)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPageSampleControl_TypeDefinitionIndex = 73338;

	class FriendChatPageSampleControl : public ::Sofa::BaseSofaControl_1<::Class_1_59AA224BB47C8EC6*>
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x58
		::RPG::Client::ListView* _ListView; // 0x60
		::RPG::Client::LocalizedText* _Title; // 0x68
		::RPG::Client::AnimatorButton* _RenameFirstContactButton; // 0x70
		::RPG::Client::AnimatorButton* _AddContactButton; // 0x78
		::RPG::Client::AnimatorButton* _RemoveLastContactButton; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_59AA224BB47C8EC6*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_59AA224BB47C8EC6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLECONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
