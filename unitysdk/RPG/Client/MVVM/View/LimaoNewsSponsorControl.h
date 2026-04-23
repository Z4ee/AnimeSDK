#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client::MVVM::View { class LimaoNewsSponsorItemControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA7625D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA761FE0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA761CA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA762640)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA7625E0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsSponsorControl_TypeDefinitionIndex = 68468;

	class LimaoNewsSponsorControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::MonoPrefabSwitcher* Field_6_0; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MVVM::View::LimaoNewsSponsorItemControl*>* Field_6_1; // 0x38
		::UnityEngine::UI::Button* Field_6_2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSSPONSORCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
