#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_3_72B51E713EDE563F;
namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL_METHOD_6_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x9A9CF10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A9CF80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A9C800)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A9C680)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A9CFF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A9CF90)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueTabItemControl_TypeDefinitionIndex = 61008;

	class LimaoNewsIssueTabItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* Field_6_0; // 0x30
		::UnityEngine::UI::Text* Field_6_1; // 0x38
		::UnityEngine::Transform* Field_6_2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::Class_3_72B51E713EDE563F* Method_6_323F95926A2F616E()
		{
			return ((::Class_3_72B51E713EDE563F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL_METHOD_6_323F95926A2F616E_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUETABITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
