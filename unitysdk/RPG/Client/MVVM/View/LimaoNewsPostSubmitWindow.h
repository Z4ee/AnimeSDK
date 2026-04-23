#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_029A7EDCBF9933C8;
class Class_1_6639441D78E72F56;
class Class_3_8DD37DEE3D191DB8;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::MVVM::View { class LimaoNewsInteractionControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0xA75E520)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xA75E590)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_DE70BFBC2BB426D0_OFFSET UNITYSDK_OFFSET(0xA75E630)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA75DA30)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA75DDB0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA75DAD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA75E740)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA75E6E0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow_TypeDefinitionIndex = 68481;

	class LimaoNewsPostSubmitWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::MVVM::View::LimaoNewsInteractionControl* Field_2_4; // 0x40
		::UnityEngine::UI::Text* Field_2_3; // 0x48
		::Class_1_029A7EDCBF9933C8* Field_2_0; // 0x50
		::RPG::Client::MVVM::View::LimaoNewsSubmitLevelControl* Field_2_1; // 0x58
		::RPG::Client::MonoAnimationTrigger* Field_2_5; // 0x60
		::RPG::Client::AnimatorButton* Field_2_2; // 0x68

		::System::Void _ctor(::Class_3_8DD37DEE3D191DB8* a1, ::Class_1_029A7EDCBF9933C8* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8DD37DEE3D191DB8*, ::Class_1_029A7EDCBF9933C8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_2_CFC95121222309BD(::Class_1_6639441D78E72F56* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6639441D78E72F56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
		}

		::System::Void Method_2_DE70BFBC2BB426D0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_DE70BFBC2BB426D0_OFFSET))(this, a1);
		}

		::Class_3_8DD37DEE3D191DB8* Method_2_323F95926A2F616E()
		{
			return ((::Class_3_8DD37DEE3D191DB8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_323F95926A2F616E_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
