#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AimIKLockTargetType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D15590)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D158A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_TRYSETAIMIK_OFFSET UNITYSDK_OFFSET(0x17D15760)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17D15A90)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D15B00)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D15BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAimIKTarget_TypeDefinitionIndex = 50587;

	class AnimatorZoneSetAimIKTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* aimControllerTagList; // 0x50
		::System::String* AimIkId; // 0x58
		::MoleMole::Config::ConfigPosRot* CustomPosRot; // 0x60
		::System::String* AttachPoint; // 0x68
		::MoleMole::Config::AimIKLockTargetType LockTargetType; // 0x70
		::System::Single UIViewPortZ; // 0x74
		::System::Boolean UseOverrideOffset; // 0x78
		::System::Boolean UseOverrideAttachPoint; // 0x79
		::System::Boolean MultipleAimIk; // 0x7A
		::UnityEngine::Vector2 UIViewPort; // 0x7C
		::UnityEngine::Vector3 Offset; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void TrySetAimIK(::MoleMole::Battle::Entity* entity, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET_TRYSETAIMIK_OFFSET))(this, entity, v);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAIMIKTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
