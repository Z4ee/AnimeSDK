#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA123300)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_BINDNODE_OFFSET UNITYSDK_OFFSET(0xA123560)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA123660)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_ONMOBILEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1240C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_ONPCUPDATE_OFFSET UNITYSDK_OFFSET(0xA123C30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_SETHOVERACTIVE_OFFSET UNITYSDK_OFFSET(0xA123790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_START_OFFSET UNITYSDK_OFFSET(0xA123400)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA123AB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER__CTOR_OFFSET UNITYSDK_OFFSET(0xA124490)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBigAvatarCardHover_TypeDefinitionIndex = 69855;

	class DiceCombatBigAvatarCardHover : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _GyroRegistered; // 0x18
		::UnityEngine::Vector3 _OriginalRot; // 0x1C
		::UnityEngine::Transform* _CardHoverArea; // 0x28
		::UnityEngine::Transform* _HoverCenterPoint; // 0x30
		::RPG::Client::AnimatorButton* _TextClickBtn; // 0x38
		::RPG::Client::AnimatorButton* _CardClickBtn; // 0x40
		::System::Boolean _Hover; // 0x48
		::System::Boolean _Reset; // 0x49
		::UnityEngine::Vector3 _currentEuler; // 0x4C
		::System::Single ANGLE_X_LIMIT_MIN; // 0x58
		::System::Single ANGLE_X_LIMIT_MAX; // 0x5C
		::System::Single ANGLE_Y_LIMIT_MIN; // 0x60
		::System::Single ANGLE_Y_LIMIT_MAX; // 0x64
		::System::Single PCRotateSpeedX; // 0x68
		::System::Single PCRotateSpeedY; // 0x6C
		::System::Single MobileRotateSpeedX; // 0x70
		::System::Single MobileRotateSpeedY; // 0x74
		::System::Single RotateLerpSpeed; // 0x78
		::System::Single RecoverLerpSpeed; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void BindNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_BINDNODE_OFFSET))(this);
		}

		::System::Void SetHoverActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_SETHOVERACTIVE_OFFSET))(this, active);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_UPDATE_OFFSET))(this);
		}

		::System::Void OnPCUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_ONPCUPDATE_OFFSET))(this);
		}

		::System::Void OnMobileUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBIGAVATARCARDHOVER_ONMOBILEUPDATE_OFFSET))(this);
		}
	};
}
