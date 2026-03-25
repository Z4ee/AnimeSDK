#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL_METHOD_6_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x9A97420)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A97AD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A96D70)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A96AF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A97B40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A97AE0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewControl_TypeDefinitionIndex = 61001;

	class LimaoNewsInterviewControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::MonoPrefabSwitcher* Field_6_0; // 0x30
		::RPG::Client::AnimatorButton* Field_6_1; // 0x38
		::UnityEngine::UI::Image* Field_6_2; // 0x40
		::UnityEngine::UI::Text* Field_6_3; // 0x48
		::UnityEngine::UI::Text* Field_6_4; // 0x50
		::RPG::Client::PrefabLoadMeta* Field_6_5; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* Field_6_6; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Method_6_8DC652D916C182B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL_METHOD_6_8DC652D916C182B2_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
