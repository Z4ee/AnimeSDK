#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class TutorialNode;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client::LimaoNews { class LimaoNewsInteractionControl; }
namespace RPG::Client::LimaoNews { class LimaoNewsStateTagControl; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_PLAYADDANIMATION_OFFSET UNITYSDK_OFFSET(0x1C4A2A80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x1C4A2C60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_PLAYLIKENUMANIMATION_OFFSET UNITYSDK_OFFSET(0x1C4A2CC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_REFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0x1C4A2D20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A2DE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__DOREFRESHREDDOTNODE_OFFSET UNITYSDK_OFFSET(0x1C4A2980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C4A1D40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C4A1A70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1C4A2AE0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPostInfoRowControl_TypeDefinitionIndex = 79070;

	class LimaoNewsPostInfoRowControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::MonoPrefabSwitcher* _PrefabSwitcher; // 0x38
		::RPG::Client::AnimatorButton* _Btn; // 0x40
		::UnityEngine::Animation* _AnimationAdd; // 0x48
		::UnityEngine::Animation* _AnimationFade; // 0x50
		::UnityEngine::UI::Image* _UserImage; // 0x58
		::UnityEngine::UI::Text* _UserName; // 0x60
		::UnityEngine::Transform* _UserOfficialTag; // 0x68
		::UnityEngine::UI::Text* _PostTitle; // 0x70
		::UnityEngine::UI::Text* _PostDesc; // 0x78
		::UnityEngine::Transform* _NodeBannedTag; // 0x80
		::UnityEngine::Transform* _NodeRecommendTag; // 0x88
		::UnityEngine::Transform* _NodeImage; // 0x90
		::UnityEngine::UI::Image* _PostImage; // 0x98
		::UnityEngine::Transform* _NodeVideoMask; // 0xA0
		::UnityEngine::Transform* _NodeComicMask; // 0xA8
		::UnityEngine::Transform* _NodeBannedMask; // 0xB0
		::RPG::Client::LimaoNews::LimaoNewsInteractionControl* _InteractionControl; // 0xB8
		::UnityEngine::Animation* _AnimationLikeNum; // 0xC0
		::RPG::Client::LimaoNews::LimaoNewsStateTagControl* _StateTagControl; // 0xC8
		::TutorialNode* _TutorialNode; // 0xD0
		::UnityEngine::Transform* _ReddotNode; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PlayAddAnimation(::System::String* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_PLAYADDANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* PlayFadeInAnimation(::System::String* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_PLAYFADEINANIMATION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* PlayLikeNumAnimation(::System::String* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_PLAYLIKENUMANIMATION_OFFSET))(this, a1);
		}

		::System::Void RefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL_REFRESHREDDOTNODE_OFFSET))(this);
		}

		::System::Void _DoRefreshRedDotNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__DOREFRESHREDDOTNODE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _PlayAnimation(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOSTINFOROWCONTROL__PLAYANIMATION_OFFSET))(this, a1, a2);
		}
	};
}
