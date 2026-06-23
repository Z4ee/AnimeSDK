#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/View/HoundSandAnimationCtrl_AnimationType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class SpriteRenderer; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_AWAKE_OFFSET UNITYSDK_OFFSET(0x13F06E10)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_INITSANDANIMATION_OFFSET UNITYSDK_OFFSET(0x13F07000)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13F07BA0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x13F07A10)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x13F07620)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_RESET_OFFSET UNITYSDK_OFFSET(0x13F07A80)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_TICKANIMATION_OFFSET UNITYSDK_OFFSET(0x13F07700)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_TICKSAND_OFFSET UNITYSDK_OFFSET(0x13F07370)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_UPDATE_OFFSET UNITYSDK_OFFSET(0x13F07690)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x13F07C00)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int HoundSandAnimationCtrl_TypeDefinitionIndex = 64837;

	class HoundSandAnimationCtrl : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		// static const ::System::String* sandFallAnimation; // 0x0
		::UnityEngine::Color defaultColor; // 0x58
		::UnityEngine::Color fadeInStartColor; // 0x68
		::UnityEngine::Color fadeOutTargetColor; // 0x78
		::System::Single fadeInAnimTime; // 0x88
		::System::Single fadeOutAnimTime; // 0x8C
		::System::String* fadeInCurveKey; // 0x90
		::System::String* fadeOutCurveKey; // 0x98
		::UnityEngine::AnimationCurve* fadeInCurve; // 0xA0
		::UnityEngine::AnimationCurve* fadeOutCurve; // 0xA8
		::System::Single timer; // 0xB0
		::System::Boolean isAnim; // 0xB4
		::MoleMole::MiniGame::TartarusHounds::View::HoundSandAnimationCtrl_AnimationType currentAnimation; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::SpriteRenderer*>* sandsRenders; // 0xC0
		::UnityEngine::Color preApplyColor; // 0xC8
		::System::Boolean fadeOutHideSelf; // 0xD8
		::UnityEngine::Animation* sanAnimation; // 0xE0
		::System::Single animLen; // 0xE8
		::System::Single lastRecordPlayTime; // 0xEC
		::System::Action* fadeOutFinishCb; // 0xF0
		::System::Action* fadeInFinishCb; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_AWAKE_OFFSET))(this);
		}

		::System::Void InitSandAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_INITSANDANIMATION_OFFSET))(this);
		}

		::System::Void TickSand(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_TICKSAND_OFFSET))(this, dt);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_UPDATE_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void PlayFadeOut(::System::Boolean fadeOutHideSelf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_PLAYFADEOUT_OFFSET))(this, fadeOutHideSelf);
		}

		::System::Void Reset(::System::Boolean forceResetColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_RESET_OFFSET))(this, forceResetColor);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_ONDESTROY_OFFSET))(this);
		}

		::System::Void TickAnimation(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_HOUNDSANDANIMATIONCTRL_TICKANIMATION_OFFSET))(this, dt);
		}
	};
}
