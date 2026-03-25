#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA6DA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA6840)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA66C0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9AA6E10)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9AA6DB0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsSponsorItemControl_TypeDefinitionIndex = 61017;

	class LimaoNewsSponsorItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Button* Field_6_0; // 0x30
		::UnityEngine::UI::Image* Field_6_1; // 0x38
		::UnityEngine::UI::Image* Field_6_2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
