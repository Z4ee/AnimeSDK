#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_3_290D64E8B1BFF24F;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::MVVM::View { class LimaoNewsInterviewControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsIssueNumItemControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsIssueNumberControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsIssueTabItemControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsRewardNumControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_METHOD_6_0CA9B0B924F0CB2A_OFFSET UNITYSDK_OFFSET(0xA74CA40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_METHOD_6_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0xA74C9D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_METHOD_6_32B252CB84490CAB_OFFSET UNITYSDK_OFFSET(0xA74CC90)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_ONLIMAONEWSSUBMITISSUE_OFFSET UNITYSDK_OFFSET(0xA74D300)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_REFRESHSUBMITNODE_OFFSET UNITYSDK_OFFSET(0xA74D1E0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_TRYSHOWSUBMITNODEWITHFADEIN_OFFSET UNITYSDK_OFFSET(0xA74CF30)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA74D6D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA74B6B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA74AFD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA74D740)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA74D6E0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueControl_TypeDefinitionIndex = 68456;

	class LimaoNewsIssueControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::MVVM::View::LimaoNewsIssueNumberControl* Field_6_0; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::View::LimaoNewsInterviewControl*>* Field_6_1; // 0x38
		::RPG::Client::PrefabLoadMeta* Field_6_2; // 0x40
		::RPG::Client::PrefabLoadMeta* Field_6_3; // 0x48
		::UnityEngine::Transform* Field_6_4; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::View::LimaoNewsIssueTabItemControl*>* Field_6_5; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::View::LimaoNewsIssueNumItemControl*>* Field_6_6; // 0x60
		::UnityEngine::Transform* Field_6_7; // 0x68
		::UnityEngine::UI::Button* Field_6_8; // 0x70
		::UnityEngine::UI::Button* Field_6_9; // 0x78
		::UnityEngine::UI::Button* Field_6_10; // 0x80
		::UnityEngine::Transform* Field_6_11; // 0x88
		::UnityEngine::Transform* Field_6_12; // 0x90
		::RPG::Client::MVVM::View::LimaoNewsRewardNumControl* Field_6_13; // 0x98
		::RPG::Client::MonoAnimationTrigger* Field_6_14; // 0xA0
		::UnityEngine::Animation* Field_6_15; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void TryShowSubmitNodeWithFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_TRYSHOWSUBMITNODEWITHFADEIN_OFFSET))(this);
		}

		::System::Void RefreshSubmitNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_REFRESHSUBMITNODE_OFFSET))(this);
		}

		::System::Void OnLimaoNewsSubmitIssue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_ONLIMAONEWSSUBMITISSUE_OFFSET))(this);
		}

		::RPG::Client::MVVM::View::LimaoNewsIssueTabItemControl* Method_6_0CA9B0B924F0CB2A(::System::Int32 a1)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsIssueTabItemControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_METHOD_6_0CA9B0B924F0CB2A_OFFSET))(this, a1);
		}

		::RPG::Client::MVVM::View::LimaoNewsIssueNumItemControl* Method_6_32B252CB84490CAB(::System::Int32 a1)
		{
			return ((::RPG::Client::MVVM::View::LimaoNewsIssueNumItemControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_METHOD_6_32B252CB84490CAB_OFFSET))(this, a1);
		}

		::Class_3_290D64E8B1BFF24F* Method_6_323F95926A2F616E()
		{
			return ((::Class_3_290D64E8B1BFF24F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL_METHOD_6_323F95926A2F616E_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
