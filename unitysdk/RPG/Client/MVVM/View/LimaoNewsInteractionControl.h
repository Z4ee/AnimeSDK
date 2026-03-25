#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A966F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A96120)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A95F50)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x9A96760)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A96700)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInteractionControl_TypeDefinitionIndex = 60975;

	class LimaoNewsInteractionControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* Field_6_0; // 0x30
		::UnityEngine::Animator* Field_6_1; // 0x38
		::UnityEngine::UI::Text* Field_6_2; // 0x40
		::UnityEngine::UI::Text* Field_6_3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
