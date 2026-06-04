#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionControl; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA6850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA6280)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBDA5FF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDA68E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBDA6880)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostItemControl_TypeDefinitionIndex = 73841;

	class LimaoNewsPostItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _Btn; // 0x38
		::UnityEngine::UI::Text* _PostTitle; // 0x40
		::UnityEngine::UI::Text* _PostDesc; // 0x48
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0x50
		::UnityEngine::UI::Image* _UserImage; // 0x58
		::UnityEngine::UI::Text* _UserName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
