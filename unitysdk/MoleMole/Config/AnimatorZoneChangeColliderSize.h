#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_CapsuleDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CHECKMATCHANDCLEARRECORD_OFFSET UNITYSDK_OFFSET(0x1624C9D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1624CE50)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1624C640)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1624BF50)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1624C6E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_RECORDCOLLIDERSIZEINDEX_OFFSET UNITYSDK_OFFSET(0x1624C340)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1624CEE0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1624CEF0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1624CFC0)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1624D080)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1624D130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_TypeDefinitionIndex = 81539;

	class AnimatorZoneChangeColliderSize : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* BlendCurveEntry; // 0x50
		::System::String* BlendCurveExit; // 0x58
		::System::String* ColliderName; // 0x60
		::System::Single BlendTimeEntry; // 0x68
		::System::Single OverrideColliderParam2; // 0x6C
		::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType Collider; // 0x70
		::System::Single OverrideColliderParam; // 0x74
		::System::Single BlendTimeExit; // 0x78
		::MoleMole::Config::AnimatorZoneChangeColliderSize_CapsuleDirection Direction; // 0x7C
		::System::Boolean EnableOverrideCenter; // 0x80
		::UnityEngine::Vector3 OverrideCenter; // 0x84
		::System::Single OverrideColliderParam1; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean RecordColliderSizeIndex(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType colliderType, ::System::String* colName, ::System::Int32 recordIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_RECORDCOLLIDERSIZEINDEX_OFFSET))(this, entity, colliderType, colName, recordIndex);
		}

		::System::Boolean CheckMatchAndClearRecord(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType colliderType, ::System::String* colName, ::System::Int32 recordIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_CHECKMATCHANDCLEARRECORD_OFFSET))(this, entity, colliderType, colName, recordIndex);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
