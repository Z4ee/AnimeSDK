#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionControl; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD486140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD485C20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD485B00)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostItemControl_TypeDefinitionIndex = 79074;

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
	};
}
