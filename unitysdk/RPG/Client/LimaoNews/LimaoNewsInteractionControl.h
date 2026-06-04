#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD7CFD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD7CB30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD7C960)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD7D060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD7D000)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInteractionControl_TypeDefinitionIndex = 73803;

	class LimaoNewsInteractionControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnLike; // 0x38
		::UnityEngine::Animator* _AnimtorLike; // 0x40
		::UnityEngine::UI::Text* _TextLikeNum; // 0x48
		::UnityEngine::UI::Text* _TextCommentNum; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERACTIONCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
