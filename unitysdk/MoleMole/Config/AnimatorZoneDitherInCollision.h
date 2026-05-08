#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_E65E055C82ED9E59;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CAPSULEOVERLAPTEST_OFFSET UNITYSDK_OFFSET(0x1101E1D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CHECKOVERLAPOTHER_OFFSET UNITYSDK_OFFSET(0x1101D990)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1101E140)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_INITCOLLIDERINFO_OFFSET UNITYSDK_OFFSET(0x1101C850)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1101D7F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1101C600)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1101D6A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_SMALLVALUE_OFFSET UNITYSDK_OFFSET(0x1101E6D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1101E770)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1101E780)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1101E850)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1101E910)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1101E9C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDitherInCollision_TypeDefinitionIndex = 53935;

	class AnimatorZoneDitherInCollision : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* DitherTag; // 0x0
		::System::String* ditherKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean CheckOverlapOther(::Class_2_E65E055C82ED9E59* zoneInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_E65E055C82ED9E59*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CHECKOVERLAPOTHER_OFFSET))(this, zoneInfo);
		}

		::System::Int32 CapsuleOverlapTest(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC colliderInfo, ::Class_2_E65E055C82ED9E59* zoneInfo)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC, ::Class_2_E65E055C82ED9E59*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_CAPSULEOVERLAPTEST_OFFSET))(this, position, rotation, colliderInfo, zoneInfo);
		}

		::System::Void InitColliderInfo(::MoleMole::Battle::Entity* entity, ::Class_2_E65E055C82ED9E59* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_E65E055C82ED9E59*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_INITCOLLIDERINFO_OFFSET))(this, entity, zoneInfo);
		}

		::System::Single SmallValue(::System::Single v)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_SMALLVALUE_OFFSET))(this, v);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
