#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_029A7EDCBF9933C8;
class Class_1_6639441D78E72F56;
class Class_3_EB9687505CB7F22E;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::MVVM::View { class LimaoNewsCommentControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0xA7509B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xA750A70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW_METHOD_2_DE70BFBC2BB426D0_OFFSET UNITYSDK_OFFSET(0xA750B10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA74FD00)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA750190)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA750A20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA74FDA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA750F60)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA750FC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA750F00)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueSubmitWindow_TypeDefinitionIndex = 68451;

	class LimaoNewsIssueSubmitWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_029A7EDCBF9933C8* Field_2_1; // 0x40
		::RPG::Client::AnimatorButton* Field_2_2; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::View::LimaoNewsCommentControl*>* Field_2_3; // 0x50
		::UnityEngine::UI::Text* Field_2_4; // 0x58
		::RPG::Client::MonoAnimationTrigger* Field_2_5; // 0x60
		::RPG::Client::MVVM::View::LimaoNewsSubmitLevelControl* Field_2_0; // 0x68

		::System::Void _ctor(::Class_3_EB9687505CB7F22E* a1, ::Class_1_029A7EDCBF9933C8* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_EB9687505CB7F22E*, ::Class_1_029A7EDCBF9933C8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void Method_2_CFC95121222309BD(::Class_1_6639441D78E72F56* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6639441D78E72F56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
		}

		::System::Void Method_2_DE70BFBC2BB426D0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW_METHOD_2_DE70BFBC2BB426D0_OFFSET))(this, a1);
		}

		::Class_3_EB9687505CB7F22E* Method_2_323F95926A2F616E()
		{
			return ((::Class_3_EB9687505CB7F22E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW_METHOD_2_323F95926A2F616E_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
