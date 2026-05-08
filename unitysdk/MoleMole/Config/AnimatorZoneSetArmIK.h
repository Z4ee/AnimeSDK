#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace RootMotion::FinalIK { class ArmIK; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_GETARMIK_OFFSET UNITYSDK_OFFSET(0x12D2F6A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12D2F4A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12D2F600)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_SETARMIKWEIGHT_OFFSET UNITYSDK_OFFSET(0x12D2F530)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D2F8B0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12D2F8C0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12D2F930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetArmIK_TypeDefinitionIndex = 64769;

	class AnimatorZoneSetArmIK : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ArmIKTagList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& state, ::Class_1_677CEA8C88AC78AB* zoneinfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_ONZONEENTER_OFFSET))(this, entity, state, zoneinfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneinfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneinfo, deltaTime);
		}

		::System::Void SetArmIKWeight(::MoleMole::Battle::Entity* entity, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_SETARMIKWEIGHT_OFFSET))(this, entity, weight);
		}

		::RootMotion::FinalIK::ArmIK* GetArmIK(::MoleMole::Battle::Entity* entity)
		{
			return ((::RootMotion::FinalIK::ArmIK*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_GETARMIK_OFFSET))(this, entity);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
