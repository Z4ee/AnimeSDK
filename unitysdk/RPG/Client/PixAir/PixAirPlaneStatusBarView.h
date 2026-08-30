#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirDamageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_COMPLETEALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1BD10A20)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GETHPRATIO_OFFSET UNITYSDK_OFFSET(0x1BD10C00)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GETSHIELDRATIO_OFFSET UNITYSDK_OFFSET(0x1BD10C60)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1BD10CC0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GET_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0x1BD10CE0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1BD10CD0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BD0F7D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_SETANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1BD109D0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_SETANIMATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1BD10960)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATEHP_OFFSET UNITYSDK_OFFSET(0x1BD0FC70)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATEMAXHP_OFFSET UNITYSDK_OFFSET(0x1BD10300)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATESHIELD_OFFSET UNITYSDK_OFFSET(0x1BD10020)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BD105B0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD10CF0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__PLAYERBURNDAMAGEHPEFFECT_OFFSET UNITYSDK_OFFSET(0x1BD0FAB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__STARTDAMAGEANIMATION_OFFSET UNITYSDK_OFFSET(0x1BD0FEB0)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__STARTSHIELDDAMAGEANIMATION_OFFSET UNITYSDK_OFFSET(0x1BD10270)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatusBarView_TypeDefinitionIndex = 78787;

	class PixAirPlaneStatusBarView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Slider* _hpSlider; // 0x18
		::UnityEngine::UI::Slider* _burnDamageSlider; // 0x20
		::UnityEngine::UI::Slider* _directDamageSlider; // 0x28
		::UnityEngine::GameObject* _HPChangeEffect; // 0x30
		::UnityEngine::GameObject* _ShieldAddEffect; // 0x38
		::UnityEngine::GameObject* _ShieldDamageEffect; // 0x40
		::UnityEngine::RectTransform* _BurnNode1; // 0x48
		::UnityEngine::RectTransform* _BurnNode2; // 0x50
		::UnityEngine::UI::SmoothMask* _shieldMask; // 0x58
		::UnityEngine::UI::SmoothMask* _shieldDamageMask; // 0x60
		::System::Single _damageAnimationDuration; // 0x68
		::UnityEngine::AnimationCurve* _damageAnimationCurve; // 0x70
		::System::Single _maxHp; // 0x78
		::System::Single _currentHp; // 0x7C
		::System::Single _currentShield; // 0x80
		::System::Single _burnDamageAnimationTimer; // 0x84
		::System::Single _burnDamageStartValue; // 0x88
		::System::Single _burnDamageTargetValue; // 0x8C
		::System::Boolean _isBurnDamageAnimating; // 0x90
		::System::Single _directDamageAnimationTimer; // 0x94
		::System::Single _directDamageStartValue; // 0x98
		::System::Single _directDamageTargetValue; // 0x9C
		::System::Boolean _isDirectDamageAnimating; // 0xA0
		::System::Single _shieldDamageAnimationTimer; // 0xA4
		::System::Single _shieldDamageStartValue; // 0xA8
		::System::Single _shieldDamageTargetValue; // 0xAC
		::System::Boolean _isShieldDamageAnimating; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PlayerBurnDamageHPEffect(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__PLAYERBURNDAMAGEHPEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateHP(::System::Single a1, ::RPG::Client::LittleGame::PixAir::PixAirDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::LittleGame::PixAir::PixAirDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATEHP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShield(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATESHIELD_OFFSET))(this, a1);
		}

		::System::Void UpdateMaxHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATEMAXHP_OFFSET))(this, a1);
		}

		::System::Void _StartDamageAnimation(::RPG::Client::LittleGame::PixAir::PixAirDamageType a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirDamageType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__STARTDAMAGEANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _StartShieldDamageAnimation(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW__STARTSHIELDDAMAGEANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void SetAnimationDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_SETANIMATIONDURATION_OFFSET))(this, a1);
		}

		::System::Void SetAnimationCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_SETANIMATIONCURVE_OFFSET))(this, a1);
		}

		::System::Void CompleteAllAnimations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_COMPLETEALLANIMATIONS_OFFSET))(this);
		}

		::System::Single GetHPRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GETHPRATIO_OFFSET))(this);
		}

		::System::Single GetShieldRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GETSHIELDRATIO_OFFSET))(this);
		}

		::System::Single get_CurrentHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Single get_MaxHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GET_MAXHP_OFFSET))(this);
		}

		::System::Single get_CurrentShield()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSBARVIEW_GET_CURRENTSHIELD_OFFSET))(this);
		}
	};
}
