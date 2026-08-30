#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_1_59AA224BB47C8EC6;
class Class_1_5F1B5D6380BD40EB;
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_CHANGECONTACTNAME_OFFSET UNITYSDK_OFFSET(0xE3CDB60)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE3CDAE0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CDA20)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__ONACTIVETABPRECHANGING_OFFSET UNITYSDK_OFFSET(0xE3CDC10)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPageSampleWindow_TypeDefinitionIndex = 73349;

	class FriendChatPageSampleWindow : public ::Sofa::BaseSofaWindow_1<::Class_1_59AA224BB47C8EC6*>
	{
	public:
		::UnityEngine::Animator* _UiStateController; // 0x58
		::System::Boolean _IsFirstEnter; // 0x60

		::System::Void _ctor(::Class_1_59AA224BB47C8EC6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_59AA224BB47C8EC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__CTOR_OFFSET))(this, a1);
		}

		::Class_1_59AA224BB47C8EC6* get_TypedDataContext()
		{
			return ((::Class_1_59AA224BB47C8EC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void ChangeContactName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_CHANGECONTACTNAME_OFFSET))(this);
		}

		::System::Void _OnActiveTabPreChanging(::Class_1_5F1B5D6380BD40EB* a1, ::Class_1_5F1B5D6380BD40EB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__ONACTIVETABPRECHANGING_OFFSET))(this, a1, a2);
		}
	};
}
