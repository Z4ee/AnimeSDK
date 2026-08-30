#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_5F4D64A4B97E38F9;
class Class_1_6639441D78E72F56_1;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::LimaoNews { class LimaoNewsCommentControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueSubmitViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C542C30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C542140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONANIMATIONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C542DD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C5426F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1C542CE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C5421F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C542D30)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueSubmitWindow_TypeDefinitionIndex = 79058;

	class LimaoNewsIssueSubmitWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsCommentControl*>* _CommentControls; // 0x50
		::UnityEngine::UI::Text* _TextTitle; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsSubmitLevelControl* _CurrentLevelControl; // 0x60
		::RPG::Client::AnimatorButton* _BtnClose; // 0x68
		::RPG::Client::MonoAnimationTrigger* _MonoAnimationTriggerRoot; // 0x70

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsIssueSubmitViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsIssueSubmitViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnLimaoNewsWebsiteStateChangeMessage(::Class_1_6639441D78E72F56_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6639441D78E72F56_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONLIMAONEWSWEBSITESTATECHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnAnimationTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW__ONANIMATIONTRIGGER_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueSubmitViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueSubmitViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUESUBMITWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
