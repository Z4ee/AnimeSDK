#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AimIKLockTargetType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1A05B7F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1A05BB00)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_TRYSETAIMIK_OFFSET UNITYSDK_OFFSET(0x1A05B9C0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05BCF0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1A05BD60)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1A05BE10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAimIKTarget_TypeDefinitionIndex = 76841;

	class AnimatorZoneSetAimIKTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* aimControllerTagList; // 0x50
		::System::String* AttachPoint; // 0x58
		::MoleMole::Config::ConfigPosRot* CustomPosRot; // 0x60
		::System::String* AimIkId; // 0x68
		::System::Single UIViewPortZ; // 0x70
		::UnityEngine::Vector3 Offset; // 0x74
		::MoleMole::Config::AimIKLockTargetType LockTargetType; // 0x80
		::System::Boolean UseOverrideAttachPoint; // 0x84
		::System::Boolean UseOverrideOffset; // 0x85
		::System::Boolean MultipleAimIk; // 0x86
		::UnityEngine::Vector2 UIViewPort; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void TrySetAimIK(::MoleMole::Battle::Entity* entity, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_TRYSETAIMIK_OFFSET))(this, entity, v);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
