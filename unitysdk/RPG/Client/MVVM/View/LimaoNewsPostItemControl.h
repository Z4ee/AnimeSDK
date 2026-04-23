#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MVVM::View { class LimaoNewsInteractionControl; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA75D910)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA75D180)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA75CEF0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA75D980)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA75D920)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsPostItemControl_TypeDefinitionIndex = 68466;

	class LimaoNewsPostItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _Btn; // 0x30
		::UnityEngine::UI::Text* _PostTitle; // 0x38
		::UnityEngine::UI::Text* _PostDesc; // 0x40
		::RPG::Client::MVVM::View::LimaoNewsInteractionControl* _InteractionControl; // 0x48
		::UnityEngine::UI::Image* _UserImage; // 0x50
		::UnityEngine::UI::Text* _UserName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
