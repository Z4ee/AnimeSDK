#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_96760AAAA04943EC;
class Class_3_475B169F337F3520;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFE9ECF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0xFE9ECE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFE9FB60)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFE9ED80)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFE9FA90)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xFEA0A00)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xFEA0950)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__HANDLEHITDATA_OFFSET UNITYSDK_OFFSET(0xFE9F7C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PREPARE_OFFSET UNITYSDK_OFFSET(0xFE9F2A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PRINTRAY_OFFSET UNITYSDK_OFFSET(0xFE9F9F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATERAYCHECK_OFFSET UNITYSDK_OFFSET(0xFE9F580)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATESCRATCHEFFECTS_OFFSET UNITYSDK_OFFSET(0xFEA02B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATETRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xFE9FC40)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFEA0BF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFEA0CC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFEA0D80)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFEA0E30)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATESCRATCHEFFECTS_B__31_0_OFFSET UNITYSDK_OFFSET(0xFEA0B30)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATETRIGGEREFFECT_B__30_0_OFFSET UNITYSDK_OFFSET(0xFEA0A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitWallEffect_TypeDefinitionIndex = 78238;

	class AnimatorZoneHitWallEffect : public ::MoleMole::Config::AnimatorZone
	{
	public:
		static ::System::Int32* StaticGet_S_QueryLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHitWallEffect_TypeDefinitionIndex)->GetStaticField(0xC0C0);
		}
		::Class_3_DFD5D1FDB9D2A4AC* _characterModel; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* ScratchSpecialEffects; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* StartSpecialEffects; // 0x60
		::Class_3_475B169F337F3520* _hitWallComponent; // 0x68
		::System::String* StopAttachPoint; // 0x70
		::System::Collections::Generic::HashSet_1<::MoleMole::Config::AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus>* _specialEffectStatus; // 0x78
		::Class_2_96760AAAA04943EC* _zoneInfo; // 0x80
		::System::String* StartAttachPoint; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* _zoneHits; // 0x90
		::MoleMole::Config::Vector3Range ScratchSpecialEffectsRange; // 0x98
		::MoleMole::Config::Vector3Range StartSpecialEffectsRange; // 0xB0
		::System::Int32 hitRayFrameUpdateInterval; // 0xC8
		::System::Int32 _frameCurCount; // 0xCC
		::System::Boolean isEffectSide; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CCTOR_OFFSET))();
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void _Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PREPARE_OFFSET))(this);
		}

		::System::Void _TryCreateRayCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATERAYCHECK_OFFSET))(this);
		}

		::System::Void _PrintRay(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color c, ::System::Single d)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PRINTRAY_OFFSET))(this, start, end, c, d);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Boolean _HandleHitData(::UnityEngine::RaycastHit& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__HANDLEHITDATA_OFFSET))(this, info);
		}

		::System::Void _TryCreateTriggerEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATETRIGGEREFFECT_OFFSET))(this);
		}

		::System::Void _TryCreateScratchEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATESCRATCHEFFECTS_OFFSET))(this);
		}

		::System::Void __TryCreateTriggerEffect_b__30_0(::MoleMole::Battle::Entity* effectEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATETRIGGEREFFECT_B__30_0_OFFSET))(this, effectEntity);
		}

		::System::Void __TryCreateScratchEffects_b__31_0(::MoleMole::Battle::Entity* effectEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATESCRATCHEFFECTS_B__31_0_OFFSET))(this, effectEntity);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
