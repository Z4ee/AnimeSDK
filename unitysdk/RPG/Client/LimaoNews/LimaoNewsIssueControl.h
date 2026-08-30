#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::LimaoNews { class LimaoNewsInterviewControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueNumItemControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueNumberControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueTabItemControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsIssueViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsRewardNumControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD45C250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_ONLIMAONEWSSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xD45CF60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_REFRESHSUBMITNODE_OFFSET UNITYSDK_OFFSET(0xD45CE30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_TRYSHOWSUBMITNODEWITHFADEIN_OFFSET UNITYSDK_OFFSET(0xD45CB00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD45D340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__GETPAGENUMITEMCONTROL_OFFSET UNITYSDK_OFFSET(0xD45C590)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__GETTABITEMCONTROL_OFFSET UNITYSDK_OFFSET(0xD45C2D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD45B1F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD45AE40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueControl_TypeDefinitionIndex = 79064;

	class LimaoNewsIssueControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsIssueNumberControl* _CurrentIssueNumberControl; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsInterviewControl*>* _InterviewControls; // 0x40
		::RPG::Client::PrefabLoadMeta* _TabPrefabLoad; // 0x48
		::RPG::Client::PrefabLoadMeta* _PageNumPrefabLoad; // 0x50
		::UnityEngine::Transform* _NodeInterviewRoot; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueTabItemControl*>* _TabItemControls; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsIssueNumItemControl*>* _PageNumItemControls; // 0x68
		::UnityEngine::Transform* _NodeSubmit; // 0x70
		::UnityEngine::UI::Button* _BtnSubmit; // 0x78
		::UnityEngine::UI::Button* _BtnGamepadLeft; // 0x80
		::UnityEngine::UI::Button* _BtnGamepadRight; // 0x88
		::UnityEngine::Transform* _NodeGamepadLeft; // 0x90
		::UnityEngine::Transform* _NodeGamepadRight; // 0x98
		::RPG::Client::LimaoNews::LimaoNewsRewardNumControl* _SubmitRewardNumControl; // 0xA0
		::RPG::Client::MonoAnimationTrigger* _MonoAnimationTriggerPublish; // 0xA8
		::UnityEngine::Animation* _AnimationChannelPanel; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void TryShowSubmitNodeWithFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_TRYSHOWSUBMITNODEWITHFADEIN_OFFSET))(this);
		}

		::System::Void RefreshSubmitNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_REFRESHSUBMITNODE_OFFSET))(this);
		}

		::System::Void OnLimaoNewsSubmitIssue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_ONLIMAONEWSSUBMITISSUE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueTabItemControl* _GetTabItemControl(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueTabItemControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__GETTABITEMCONTROL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueNumItemControl* _GetPageNumItemControl(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueNumItemControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL__GETPAGENUMITEMCONTROL_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsIssueViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsIssueViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
