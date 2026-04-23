#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_2_67556107F6051F25;
namespace RPG::View { class ActivityAvatarInfoControl; }
namespace UnityEngine::UI { class Button; }

#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xB888770)
#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB888810)
#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB888D10)
#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB888E50)
#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB888EB0)

namespace RPG::View
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastWindow_TypeDefinitionIndex = 47908;

	class DirectDeliveryAvatarRewardToastWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::View::ActivityAvatarInfoControl* Field_2_0; // 0x40
		::UnityEngine::UI::Button* Field_2_1; // 0x48

		::System::Void _ctor(::Class_2_67556107F6051F25* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_67556107F6051F25*))((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}
	};
}
