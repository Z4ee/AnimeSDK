#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoSpineStoryController_Anchor.h"
#include "unitysdk/RPG/Client/MonoSpineStoryController_AsideDialog.h"
#include "unitysdk/RPG/Client/MonoSpineStoryController_Dialog.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_683;
namespace RPG::Client { class CustomButton; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C2800A0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_CLOSEALLDIALOG_OFFSET UNITYSDK_OFFSET(0x1C27F2F0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_DESTROYSTORY_OFFSET UNITYSDK_OFFSET(0x1C27EE60)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_EXITSTORY_OFFSET UNITYSDK_OFFSET(0x1C27EFA0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDANCHOR_OFFSET UNITYSDK_OFFSET(0x1C27F050)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDDIALOG_OFFSET UNITYSDK_OFFSET(0x1C27F190)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTBG_OFFSET UNITYSDK_OFFSET(0x1C280630)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTFRONT_OFFSET UNITYSDK_OFFSET(0x1C280650)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C27EC90)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_STORYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C280670)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C2804C0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C2801E0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C2800F0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_PLAYCLOCKPARKSTORY_OFFSET UNITYSDK_OFFSET(0x1C27ECB0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTBG_OFFSET UNITYSDK_OFFSET(0x1C280640)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTFRONT_OFFSET UNITYSDK_OFFSET(0x1C280660)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C27ECA0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_STORYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C280680)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SKIPSTORY_OFFSET UNITYSDK_OFFSET(0x1C27EFF0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHBG_OFFSET UNITYSDK_OFFSET(0x1C27F5A0)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHFRONT_OFFSET UNITYSDK_OFFSET(0x1C27FB20)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C280510)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C280690)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x1C280570)
#define RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONSTORYFINISH_OFFSET UNITYSDK_OFFSET(0x1C2805D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSpineStoryController_TypeDefinitionIndex = 60401;

	class MonoSpineStoryController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::MonoSpineStoryController** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::MonoSpineStoryController**)Il2CppClass::FromTypeDefinitionIndex(MonoSpineStoryController_TypeDefinitionIndex)->GetStaticField(0x17A80);
		}
		::Il2CppArray<::RPG::Client::MonoSpineStoryController_Anchor>* anchors; // 0x18
		::Il2CppArray<::RPG::Client::MonoSpineStoryController_Dialog>* dialogs; // 0x20
		::RPG::Client::MonoSpineStoryController_AsideDialog asideDialog; // 0x28
		::RPG::Client::CustomButton* clickButton; // 0x50
		::UnityEngine::Animation* backgroundAnimation; // 0x58
		::UnityEngine::Animation* backgroundLoopAnimation; // 0x60
		::UnityEngine::Animation* backgroundFrontAnimation; // 0x68
		::UnityEngine::RectTransform* sourceBG; // 0x70
		::UnityEngine::RectTransform* sourceFront; // 0x78
		::UnityEngine::RectTransform* _CurrentBG_k__BackingField; // 0x80
		::UnityEngine::RectTransform* _CurrentFront_k__BackingField; // 0x88
		::Class_0_16E4307DCC419505_683* _StoryController_k__BackingField; // 0x90
		::System::Action* OnFinish; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonoSpineStoryController* get_Instance()
		{
			return ((::RPG::Client::MonoSpineStoryController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::MonoSpineStoryController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoSpineStoryController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void PlayClockParkStory(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_PLAYCLOCKPARKSTORY_OFFSET))(this, a1);
		}

		::System::Void ExitStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_EXITSTORY_OFFSET))(this);
		}

		::System::Void SkipStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SKIPSTORY_OFFSET))(this);
		}

		::System::Boolean FindAnchor(::System::String* a1, ::RPG::Client::MonoSpineStoryController_Anchor& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::MonoSpineStoryController_Anchor&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDANCHOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean FindDialog(::System::String* a1, ::RPG::Client::MonoSpineStoryController_Dialog& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::MonoSpineStoryController_Dialog&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_FINDDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void CloseAllDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_CLOSEALLDIALOG_OFFSET))(this);
		}

		::System::Void SwitchBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHBG_OFFSET))(this, a1);
		}

		::System::Void SwitchFront(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SWITCHFRONT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void DestroyStory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_DESTROYSTORY_OFFSET))(this);
		}

		::System::Void _OnClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONCLICKBUTTON_OFFSET))(this);
		}

		::System::Void _OnStoryFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER__ONSTORYFINISH_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_CurrentBG()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTBG_OFFSET))(this);
		}

		::System::Void set_CurrentBG(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTBG_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_CurrentFront()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_CURRENTFRONT_OFFSET))(this);
		}

		::System::Void set_CurrentFront(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_CURRENTFRONT_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_683* get_StoryController()
		{
			return ((::Class_0_16E4307DCC419505_683*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_GET_STORYCONTROLLER_OFFSET))(this);
		}

		::System::Void set_StoryController(::Class_0_16E4307DCC419505_683* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_683*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSPINESTORYCONTROLLER_SET_STORYCONTROLLER_OFFSET))(this, a1);
		}
	};
}
