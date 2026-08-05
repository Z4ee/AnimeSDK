#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8377BAB19A574A40;
class Class_2_96760AAAA04943EC;
class Class_3_475B169F337F3520;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1435D470)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x1435D460)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1435E2F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1435D500)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1435E220)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1435F170)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1435F0D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__HANDLEHITDATA_OFFSET UNITYSDK_OFFSET(0x1435DF50)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PREPARE_OFFSET UNITYSDK_OFFSET(0x1435DA30)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__PRINTRAY_OFFSET UNITYSDK_OFFSET(0x1435E180)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATERAYCHECK_OFFSET UNITYSDK_OFFSET(0x1435DD10)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATESCRATCHEFFECTS_OFFSET UNITYSDK_OFFSET(0x1435EA30)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT__TRYCREATETRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x1435E3D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1435F360)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1435F430)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1435F4F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1435F5A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATESCRATCHEFFECTS_B__31_0_OFFSET UNITYSDK_OFFSET(0x1435F2A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___TRYCREATETRIGGEREFFECT_B__30_0_OFFSET UNITYSDK_OFFSET(0x1435F1E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitWallEffect_TypeDefinitionIndex = 75551;

	class AnimatorZoneHitWallEffect : public ::MoleMole::Config::AnimatorZone
	{
	public:
		static ::System::Int32* StaticGet_S_QueryLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneHitWallEffect_TypeDefinitionIndex)->GetStaticField(0xC9F0);
		}
		::Class_2_96760AAAA04943EC* _zoneInfo; // 0x50
		::Class_3_475B169F337F3520* _hitWallComponent; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* ScratchSpecialEffects; // 0x60
		::System::String* StartAttachPoint; // 0x68
		::System::String* StopAttachPoint; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* StartSpecialEffects; // 0x78
		::Class_3_C93CC3D2C2AC4067* _characterModel; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* _zoneHits; // 0x88
		::System::Collections::Generic::HashSet_1<::MoleMole::Config::AnimatorZoneHitWallEffect_HitWallEffectCreatedStatus>* _specialEffectStatus; // 0x90
		::System::Boolean isEffectSide; // 0x98
		::System::Int32 hitRayFrameUpdateInterval; // 0x9C
		::System::Int32 _frameCurCount; // 0xA0
		::MoleMole::Config::Vector3Range ScratchSpecialEffectsRange; // 0xA4
		::MoleMole::Config::Vector3Range StartSpecialEffectsRange; // 0xBC

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

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
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

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
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

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHITWALLEFFECT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
