#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_0_16E4307DCC419505_1295;
class Class_1_59AA224BB47C8EC6;
class Class_1_5F1B5D6380BD40EB;
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_CHANGECONTACTNAME_OFFSET UNITYSDK_OFFSET(0xE410380)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE410300)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE410210)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__ONSELECTEDTABPRECHANGING_OFFSET UNITYSDK_OFFSET(0xE410430)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatPageSampleWindow_TypeDefinitionIndex = 73452;

	class FriendChatPageSampleWindow : public ::Sofa::BaseSofaWindow_1<::Class_0_16E4307DCC419505_1295*>
	{
	public:
		::UnityEngine::Animator* _UiStateController; // 0x60
		::System::Boolean _IsFirstEnter; // 0x68

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

		::System::Void _OnSelectedTabPreChanging(::Class_1_5F1B5D6380BD40EB* a1, ::Class_1_5F1B5D6380BD40EB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATPAGESAMPLEWINDOW__ONSELECTEDTABPRECHANGING_OFFSET))(this, a1, a2);
		}
	};
}
