#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_NormalMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayMethod.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_ScratchPreferMethod.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/MoleMole/WeaponDamageDecalType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_GET_HOLDER_OFFSET UNITYSDK_OFFSET(0x167E7AC0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONDISABLED_OFFSET UNITYSDK_OFFSET(0x167E7930)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONENABLED_OFFSET UNITYSDK_OFFSET(0x167E78F0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_PREPARE_OFFSET UNITYSDK_OFFSET(0x167E7AE0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SET_HOLDER_OFFSET UNITYSDK_OFFSET(0x167E7AD0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__AUTOSETENDFRAME_OFFSET UNITYSDK_OFFSET(0x167E7A80)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x167E85F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ScratchConfigObject_TypeDefinitionIndex = 47457;

	class ScratchConfigObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* BeginTypeSpecialEffects; // 0x10
		::System::String* effRayStartName; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* EffectSegmentList; // 0x20
		::UnityEngine::Transform* _Holder_k__BackingField; // 0x28
		::System::String* effRayDirName; // 0x30
		::UnityEngine::Transform* rayDirObject; // 0x38
		::UnityEngine::Transform* rayStopTo; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* ScratchTypeSpecialEffects; // 0x48
		::System::String* OverrideShakeKey; // 0x50
		::UnityEngine::Transform* rayStartFrom; // 0x58
		::UnityEngine::Vector3 oneRayEuler; // 0x60
		::MoleMole::Config::Vector3Range ScratchTypeSpecialEffectsRange; // 0x6C
		::System::Int32 lerpRayCount; // 0x84
		::System::Boolean isSymmetryRay; // 0x88
		::MoleMole::Battle::DebugColor debugColor; // 0x8C
		::System::Int32 totalRayCount; // 0xAC
		::System::Int32 hitRayFrameUpdateInterval; // 0xB0
		::MoleMole::Config::Vector3Range BeginTypeSpecialEffectsRange; // 0xB4
		::System::Single effRayDistance; // 0xCC
		::MoleMole::WeaponDamageDecalType CharacterDecalType; // 0xD0
		::MoleMole::Config::AnimatorZoneHitWallEffect_ScratchPreferMethod preferMethod; // 0xD4
		::UnityEngine::Vector3 effRayEulerOffset; // 0xD8
		::MoleMole::Config::AnimatorZoneHitWallEffect_RayMethod rayMethod; // 0xE4
		::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis effRayStartDirAxis; // 0xE8
		::MoleMole::Config::AnimatorZoneHitWallEffect_NormalMethod normalMethod; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONENABLED_OFFSET))(this);
		}

		::System::Void OnDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONDISABLED_OFFSET))(this);
		}

		::System::Void _AutoSetEndFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__AUTOSETENDFRAME_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Holder()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_GET_HOLDER_OFFSET))(this);
		}

		::System::Void set_Holder(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SET_HOLDER_OFFSET))(this, value);
		}

		::System::Void Prepare(::Class_3_D6DA183EF60F02C8* speModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_PREPARE_OFFSET))(this, speModel);
		}
	};
}
