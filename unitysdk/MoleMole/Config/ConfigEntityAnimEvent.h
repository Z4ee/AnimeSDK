#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/ConfigAttackPatternType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CDA382D823F8E80;
class Class_1_560B23058CA4940C;
class Class_2_2FA6B1A583C7D44A;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class CollisionDetect; }
namespace MoleMole::Config { class ConfigAttackActiveFrameDynamicProp; }
namespace MoleMole::Config { class ConfigEntityAttackCameraShake; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityCameraStretch; }
namespace MoleMole::Config { class ConfigEntityCameraZoom; }
namespace MoleMole::Config { class ContinueAttackDetect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_BEGINCONTINUOUSATTACKPATTERNLISTDRAW_OFFSET UNITYSDK_OFFSET(0x16A8A9A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKATTACKPATTERNLISTSHOW_OFFSET UNITYSDK_OFFSET(0x16A8A900)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKATTACKPATTERNSHOW_OFFSET UNITYSDK_OFFSET(0x16A8A8B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKCONTINUOUSATTACKPATTERNLISTSHOW_OFFSET UNITYSDK_OFFSET(0x16A8A950)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_GETPATTERNEVENT_OFFSET UNITYSDK_OFFSET(0x16A8A160)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLISTWITHOVERRIDEPARAM_OFFSET UNITYSDK_OFFSET(0x16A8A050)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLIST_OFFSET UNITYSDK_OFFSET(0x16A885B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERN_OFFSET UNITYSDK_OFFSET(0x16A88270)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLISTWITHOVERRIDEPOSANDROT_OFFSET UNITYSDK_OFFSET(0x16A8A430)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLIST_OFFSET UNITYSDK_OFFSET(0x16A892B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A8AD10)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16A8AC70)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_PROCESSDEADFORHITRELATEDANIMEVENTS_OFFSET UNITYSDK_OFFSET(0x16A894F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_RUNTIMETOSERIALIZED_OFFSET UNITYSDK_OFFSET(0x16A8ACD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_SERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0x16A8AA50)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_TRIGGERATTACKPATTERN_OFFSET UNITYSDK_OFFSET(0x16A87FE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A8AD60)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8AA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEvent_TypeDefinitionIndex = 79643;

	class ConfigEntityAnimEvent : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_RelatedAnimEvents_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_TypeDefinitionIndex)->GetStaticField(0x31E70);
		}
		static ::System::UInt32* StaticGet_CONTINUOUS_ATTACK_PATTERN_LIST_COUNTER()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_TypeDefinitionIndex)->GetStaticField(0xC150);
		}
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>* TeamEntityRecoverProperties; // 0x10
		::MoleMole::Config::ConfigEntityAttackPattern* AttackPattern; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>* AttackPatternList; // 0x20
		::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* ActiveDynamicProp; // 0x28
		::Il2CppArray<::System::String*>* RelatedAnimEventsV2; // 0x30
		::MoleMole::Config::ConfigEntityAttackEffect* AttackEffect; // 0x38
		::MoleMole::Config::ConfigEntityAttackCameraShake* CameraShake; // 0x40
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* RecoverProperties; // 0x48
		::MoleMole::Config::ConfigEntityCameraStretch* CameraStretch; // 0x50
		::MoleMole::Config::ConfigEntityCameraZoom* CameraZoom; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>* ContinuousAttackPatternList; // 0x60
		::MoleMole::Config::ConfigEntityAttackProperty* AttackProperty; // 0x68
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* RelatedAnimEventsInRuntime; // 0x70
		::System::Single RecoverHP; // 0x78
		::MoleMole::Config::ConfigAttackPatternType AttackPatternType; // 0x7C
		::System::Boolean IsSameTimeHitRecoverProperties_NTimes; // 0x80
		::System::Boolean IsDiffTimeHitRecoverProperties_FirstTime; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT__CCTOR_OFFSET))();
		}

		::System::Boolean TriggerAttackPattern(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Boolean overridePosRot, ::UnityEngine::Vector3 centerPos, ::UnityEngine::Quaternion rotation, ::System::UInt32 overrideCenterEntityID, ::Struct_2_B76C9DBDAECC6C19 overrideParams, ::System::Boolean removeWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_TRIGGERATTACKPATTERN_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overridePosRot, centerPos, rotation, overrideCenterEntityID, overrideParams, removeWithFollowEntity);
		}

		::System::Boolean HandleAttackPattern(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Boolean overridePosAndRot, ::UnityEngine::Vector3 overrideCenterPos, ::UnityEngine::Quaternion overrideRotation, ::System::UInt32 overrideCenterEntityID, ::Struct_2_B76C9DBDAECC6C19 overrideParams, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERN_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overridePosAndRot, overrideCenterPos, overrideRotation, overrideCenterEntityID, overrideParams, autoRemoveWithFollowEntity);
		}

		::System::Boolean HandleAttackPatternListWithOverrideParam(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::Struct_2_B76C9DBDAECC6C19 overrideParams, ::System::Boolean useOverridePosRot, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* overridePositionList, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* overrideRotationList)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLISTWITHOVERRIDEPARAM_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overrideParams, useOverridePosRot, overridePositionList, overrideRotationList);
		}

		::System::Boolean HandleAttackPatternList(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::Struct_2_B76C9DBDAECC6C19 overrideParams, ::System::Boolean useOverridePosRot, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* overridePositionList, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* overrideRotationList, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLIST_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overrideParams, useOverridePosRot, overridePositionList, overrideRotationList, autoRemoveWithFollowEntity);
		}

		::System::Boolean HandleContinuousAttackPatternList(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLIST_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, autoRemoveWithFollowEntity);
		}

		::System::Boolean HandleContinuousAttackPatternListWithOverridePosAndRot(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* overridePositions, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* overrideRotations, ::System::Collections::Generic::List_1<::System::UInt32>* overrideCenterEntityList, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLISTWITHOVERRIDEPOSANDROT_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overridePositions, overrideRotations, overrideCenterEntityList, autoRemoveWithFollowEntity);
		}

		::System::Void ProcessDeadForHitRelatedAnimEvents(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* hitResults)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_PROCESSDEADFORHITRELATEDANIMEVENTS_OFFSET))(this, animatorAtkSource, attacker, hitResults);
		}

		::System::Boolean CheckAttackPatternShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKATTACKPATTERNSHOW_OFFSET))(this);
		}

		::System::Boolean CheckAttackPatternListShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKATTACKPATTERNLISTSHOW_OFFSET))(this);
		}

		::System::Boolean CheckContinuousAttackPatternListShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKCONTINUOUSATTACKPATTERNLISTSHOW_OFFSET))(this);
		}

		::System::Void BeginContinuousAttackPatternListDraw(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_BEGINCONTINUOUSATTACKPATTERNLISTDRAW_OFFSET))(this, index);
		}

		::Class_2_2FA6B1A583C7D44A* GetPatternEvent(::MoleMole::Battle::Entity* attacker, ::Class_1_1CDA382D823F8E80* animatorAtkSource, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* realHitResults)
		{
			return ((::Class_2_2FA6B1A583C7D44A*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_1CDA382D823F8E80*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_GETPATTERNEVENT_OFFSET))(this, attacker, animatorAtkSource, realHitResults);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void RuntimeToSerialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_RUNTIMETOSERIALIZED_OFFSET))(this);
		}

		::System::Void SerializedToRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_SERIALIZEDTORUNTIME_OFFSET))(this);
		}
	};
}
