#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/ConfigAttackPatternType.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/Struct_2_057163E12A7F6FF0.h"
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

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_BEGINCONTINUOUSATTACKPATTERNLISTDRAW_OFFSET UNITYSDK_OFFSET(0x14372070)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKATTACKPATTERNLISTSHOW_OFFSET UNITYSDK_OFFSET(0x14371FD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKATTACKPATTERNSHOW_OFFSET UNITYSDK_OFFSET(0x14371F80)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_CHECKCONTINUOUSATTACKPATTERNLISTSHOW_OFFSET UNITYSDK_OFFSET(0x14372020)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_GETPATTERNEVENT_OFFSET UNITYSDK_OFFSET(0x14371810)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLISTWITHOVERRIDEPARAM_OFFSET UNITYSDK_OFFSET(0x143716D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLIST_OFFSET UNITYSDK_OFFSET(0x1436F890)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERN_OFFSET UNITYSDK_OFFSET(0x1436F2F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLISTWITHOVERRIDEPOSANDROT_OFFSET UNITYSDK_OFFSET(0x14371AD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLIST_OFFSET UNITYSDK_OFFSET(0x14370910)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14372400)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14372360)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_PROCESSDEADFORHITRELATEDANIMEVENTS_OFFSET UNITYSDK_OFFSET(0x14370B70)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_RUNTIMETOSERIALIZED_OFFSET UNITYSDK_OFFSET(0x143723C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_SERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0x14372120)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_TRIGGERATTACKPATTERN_OFFSET UNITYSDK_OFFSET(0x1436F020)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x14372450)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14372110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEvent_TypeDefinitionIndex = 91279;

	class ConfigEntityAnimEvent : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_RelatedAnimEvents_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_TypeDefinitionIndex)->GetStaticField(0x364B0);
		}
		static ::System::Int32* StaticGet_PatternID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_TypeDefinitionIndex)->GetStaticField(0xCA30);
		}
		static ::System::UInt32* StaticGet_CONTINUOUS_ATTACK_PATTERN_LIST_COUNTER()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAnimEvent_TypeDefinitionIndex)->GetStaticField(0xCA34);
		}
		::MoleMole::Config::ConfigAttackActiveFrameDynamicProp* ActiveDynamicProp; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ContinueAttackDetect*>* ContinuousAttackPatternList; // 0x18
		::MoleMole::Config::ConfigEntityCameraZoom* CameraZoom; // 0x20
		::MoleMole::Config::ConfigEntityCameraStretch* CameraStretch; // 0x28
		::Il2CppArray<::System::String*>* RelatedAnimEventsV2; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::CollisionDetect*>* AttackPatternList; // 0x38
		::MoleMole::Config::ConfigEntityAttackCameraShake* CameraShake; // 0x40
		::MoleMole::Config::ConfigEntityAttackProperty* AttackProperty; // 0x48
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* RelatedAnimEventsInRuntime; // 0x50
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* RecoverProperties; // 0x58
		::MoleMole::Config::ConfigEntityAttackPattern* AttackPattern; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeamProperty, ::System::Single>* TeamEntityRecoverProperties; // 0x68
		::MoleMole::Config::ConfigEntityAttackEffect* AttackEffect; // 0x70
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

		::System::Boolean TriggerAttackPattern(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Boolean overridePosRot, ::UnityEngine::Vector3 centerPos, ::UnityEngine::Quaternion rotation, ::System::UInt32 overrideCenterEntityID, ::Struct_2_057163E12A7F6FF0 overrideParams, ::System::Boolean removeWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_TRIGGERATTACKPATTERN_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overridePosRot, centerPos, rotation, overrideCenterEntityID, overrideParams, removeWithFollowEntity);
		}

		::System::Boolean HandleAttackPattern(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Boolean overridePosAndRot, ::UnityEngine::Vector3 overrideCenterPos, ::UnityEngine::Quaternion overrideRotation, ::System::UInt32 overrideCenterEntityID, ::Struct_2_057163E12A7F6FF0 overrideParams, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::Struct_2_057163E12A7F6FF0, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERN_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overridePosAndRot, overrideCenterPos, overrideRotation, overrideCenterEntityID, overrideParams, autoRemoveWithFollowEntity);
		}

		::System::Boolean HandleAttackPatternListWithOverrideParam(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::Struct_2_057163E12A7F6FF0 overrideParams, ::System::Boolean useOverridePosRot, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* overridePositionList, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* overrideRotationList)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLISTWITHOVERRIDEPARAM_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overrideParams, useOverridePosRot, overridePositionList, overrideRotationList);
		}

		::System::Boolean HandleAttackPatternList(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::Struct_2_057163E12A7F6FF0 overrideParams, ::System::Boolean useOverridePosRot, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* overridePositionList, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* overrideRotationList, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLEATTACKPATTERNLIST_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overrideParams, useOverridePosRot, overridePositionList, overrideRotationList, autoRemoveWithFollowEntity);
		}

		::System::Boolean HandleContinuousAttackPatternList(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLIST_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, autoRemoveWithFollowEntity);
		}

		::System::Boolean HandleContinuousAttackPatternListWithOverridePosAndRot(::Class_1_1CDA382D823F8E80* animatorAtkSource, ::MoleMole::Battle::Entity* attacker, ::UnityEngine::LayerMask layerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer, ::System::Boolean withHit, ::Il2CppArray<::System::String*>* tags, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* overridePositions, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* overrideRotations, ::System::Collections::Generic::List_1<::System::UInt32>* overrideCenterEntityList, ::System::Boolean autoRemoveWithFollowEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_HANDLECONTINUOUSATTACKPATTERNLISTWITHOVERRIDEPOSANDROT_OFFSET))(this, animatorAtkSource, attacker, layerMask, subLayer, withHit, tags, overridePositions, overrideRotations, overrideCenterEntityList, autoRemoveWithFollowEntity);
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
