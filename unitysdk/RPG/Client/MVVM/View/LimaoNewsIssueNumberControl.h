#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL_METHOD_6_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA74FB80)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL_SETNUMBER_OFFSET UNITYSDK_OFFSET(0xA74CEE0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA74FC30)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA74FA40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA74F870)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA74FCA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA74FC40)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueNumberControl_TypeDefinitionIndex = 68460;

	class LimaoNewsIssueNumberControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::SmoothMask* Field_6_0; // 0x30
		::UnityEngine::UI::Image* Field_6_1; // 0x38
		::UnityEngine::UI::Image* Field_6_2; // 0x40
		::UnityEngine::UI::Image* Field_6_3; // 0x48
		::System::Int32 Field_6_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL_SETNUMBER_OFFSET))(this, a1);
		}

		::System::String* Method_6_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL_METHOD_6_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUENUMBERCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
