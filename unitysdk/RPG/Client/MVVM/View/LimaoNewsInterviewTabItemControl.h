#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A98C50)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A986B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A984E0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A98CC0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A98C60)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewTabItemControl_TypeDefinitionIndex = 60994;

	class LimaoNewsInterviewTabItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* Field_6_0; // 0x30
		::RPG::UINavigation::UINavigationButton* Field_6_1; // 0x38
		::UnityEngine::UI::Text* Field_6_2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWTABITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
