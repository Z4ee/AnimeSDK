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

#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_GET_HOLDER_OFFSET UNITYSDK_OFFSET(0xDB852E0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONDISABLED_OFFSET UNITYSDK_OFFSET(0xDB85150)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_ONENABLED_OFFSET UNITYSDK_OFFSET(0xDB85110)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_PREPARE_OFFSET UNITYSDK_OFFSET(0xDB85300)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT_SET_HOLDER_OFFSET UNITYSDK_OFFSET(0xDB852F0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__AUTOSETENDFRAME_OFFSET UNITYSDK_OFFSET(0xDB852A0)
#define MOLEMOLE_BATTLE_SCRATCHCONFIGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xDB85E10)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ScratchConfigObject_TypeDefinitionIndex = 69342;

	class ScratchConfigObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* BeginTypeSpecialEffects; // 0x10
		::UnityEngine::Transform* rayDirObject; // 0x18
		::UnityEngine::Transform* _Holder_k__BackingField; // 0x20
		::System::String* effRayStartName; // 0x28
		::UnityEngine::Transform* rayStopTo; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* EffectSegmentList; // 0x38
		::UnityEngine::Transform* rayStartFrom; // 0x40
		::System::String* effRayDirName; // 0x48
		::System::String* OverrideShakeKey; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* ScratchTypeSpecialEffects; // 0x58
		::System::Int32 lerpRayCount; // 0x60
		::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis effRayStartDirAxis; // 0x64
		::MoleMole::Battle::DebugColor debugColor; // 0x68
		::MoleMole::Config::AnimatorZoneHitWallEffect_ScratchPreferMethod preferMethod; // 0x88
		::System::Boolean isSymmetryRay; // 0x8C
		::MoleMole::WeaponDamageDecalType CharacterDecalType; // 0x90
		::MoleMole::Config::AnimatorZoneHitWallEffect_NormalMethod normalMethod; // 0x94
		::MoleMole::Config::Vector3Range ScratchTypeSpecialEffectsRange; // 0x98
		::System::Single effRayDistance; // 0xB0
		::UnityEngine::Vector3 effRayEulerOffset; // 0xB4
		::MoleMole::Config::AnimatorZoneHitWallEffect_RayMethod rayMethod; // 0xC0
		::System::Int32 hitRayFrameUpdateInterval; // 0xC4
		::System::Int32 totalRayCount; // 0xC8
		::UnityEngine::Vector3 oneRayEuler; // 0xCC
		::MoleMole::Config::Vector3Range BeginTypeSpecialEffectsRange; // 0xD8

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
