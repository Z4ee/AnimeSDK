#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_0BA5D98E0F73DDB8;
class Class_3_8DD37DEE3D191DB8;
class Class_3_D7D23702D98A30C5;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::MVVM::View { class LimaoNewsInteractionControl; }
namespace RPG::Client::MVVM::View { class LimaoNewsSubmitLevelControl; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x9AA3930)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_DE70BFBC2BB426D0_OFFSET UNITYSDK_OFFSET(0x9AA39A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA2E20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA31C0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA2EC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA3E60)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA3E00)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___ONINITIALIZECOMPONENT_B__1_0_OFFSET UNITYSDK_OFFSET(0x9AA3D90)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostSubmitWindow_TypeDefinitionIndex = 61028;

	class LimaoNewsPostSubmitWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::MVVM::View::LimaoNewsSubmitLevelControl* Field_2_1; // 0x40
		::RPG::Client::MonoAnimationTrigger* Field_2_5; // 0x48
		::UnityEngine::UI::Text* Field_2_3; // 0x50
		::RPG::Client::MVVM::View::LimaoNewsInteractionControl* Field_2_4; // 0x58
		::RPG::Client::AnimatorButton* Field_2_2; // 0x60
		::Class_1_0BA5D98E0F73DDB8* Field_2_0; // 0x68

		::System::Void _ctor(::Class_3_8DD37DEE3D191DB8* a1, ::Class_1_0BA5D98E0F73DDB8* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8DD37DEE3D191DB8*, ::Class_1_0BA5D98E0F73DDB8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_2_DE70BFBC2BB426D0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_DE70BFBC2BB426D0_OFFSET))(this, a1);
		}

		::Class_3_8DD37DEE3D191DB8* Method_2_323F95926A2F616E()
		{
			return ((::Class_3_8DD37DEE3D191DB8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW_METHOD_2_323F95926A2F616E_OFFSET))(this);
		}

		::System::Void __OnInitializeComponent_b__1_0(::Class_3_D7D23702D98A30C5* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D7D23702D98A30C5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTSUBMITWINDOW___ONINITIALIZECOMPONENT_B__1_0_OFFSET))(this, e);
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
