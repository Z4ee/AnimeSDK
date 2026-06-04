#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_6639441D78E72F56_1;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA9500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA8B60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONANIMATIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xBDA9610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA8F00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBDA8C00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBDA9570)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA9720)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBDA96C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow_TypeDefinitionIndex = 73856;

	class LimaoNewsPostSubmitWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x40
		::RPG::Client::AnimatorButton* _BtnClose; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0x50
		::RPG::Client::MonoAnimationTrigger* _MonoAnimationTriggerRoot; // 0x58
		::UnityEngine::UI::Text* _PostTitle; // 0x60
		::RPG::Client::LimaoNews::LimaoNewsSubmitLevelControl* _CurrentLevelControl; // 0x68

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsWebsiteStateChangeMessage(::Class_1_6639441D78E72F56_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6639441D78E72F56_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnAnimationTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW__ONANIMATIONTRIGGER_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
