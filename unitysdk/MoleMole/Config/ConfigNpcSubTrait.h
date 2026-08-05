#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
class Class_2_F346500DFC680A13;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_B63797F552E19B19;
class Class_3_F66EF797857EB737;
namespace MoleMole::Config { class NpcAccessoryVoConfig; }
namespace MoleMole::Config { class NpcMontageConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xF142F20)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xF13FD20)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATECROWDNPC_OFFSET UNITYSDK_OFFSET(0xF145690)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATENORMALNPC_OFFSET UNITYSDK_OFFSET(0xF145260)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xF13FE20)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xF13FC90)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF142340)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF140BD0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xF142DF0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETANIMATIONRANDOMSTARTTIMERANGE_OFFSET UNITYSDK_OFFSET(0xF145EC0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xF13FE10)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETOMITLEVEL_OFFSET UNITYSDK_OFFSET(0xF144DF0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCANIMATION_OFFSET UNITYSDK_OFFSET(0xF145F70)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCCOLLIDER_OFFSET UNITYSDK_OFFSET(0xF146AF0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNORMALNPCANIMATION_OFFSET UNITYSDK_OFFSET(0xF1473D0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNPCNAME_OFFSET UNITYSDK_OFFSET(0xF146820)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xF1423A0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xF140C50)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONCUSTOMSETENABLE_OFFSET UNITYSDK_OFFSET(0xF147350)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0xF147B20)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xF1470F0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xF142C60)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xF142200)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0xF145CD0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_RANDOMLOOPSTATENORMALIZEDTIMEASYNC_OFFSET UNITYSDK_OFFSET(0xF147AB0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_SETPARAMETER_OFFSET UNITYSDK_OFFSET(0xF147870)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYGETNPCPERFTAG_OFFSET UNITYSDK_OFFSET(0xF144F20)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYRENAMESERVERNPCROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xF146BA0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0xF147BA0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xF147B90)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__INITNPCONENABLE_OFFSET UNITYSDK_OFFSET(0xF1471B0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xF147BC0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xF147BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcSubTrait_TypeDefinitionIndex = 43768;

	class ConfigNpcSubTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel* StaticGet_debugSimulateOmitLevel()
		{
			return (::MoleMole::PerformanceSettingProfile_ENPCOmitLevel*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12C90);
		}
		static ::System::Boolean* StaticGet_debugUseDynamicUnloadPriority()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12C94);
		}
		static ::System::Boolean* StaticGet_debugCullAll()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12C95);
		}
		static ::System::Boolean* StaticGet_debugPrintCullVo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12C96);
		}
		static ::System::Boolean* StaticGet_enablePlatformCull()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12C97);
		}
		static ::System::Boolean* StaticGet_debugOverrideOmitLevel()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigNpcSubTrait_TypeDefinitionIndex)->GetStaticField(0x12C98);
		}
		::System::Collections::Generic::List_1<::MoleMole::Config::NpcMontageConfig*>* MontageConfigs; // 0x18
		::System::String* _tttName; // 0x20
		::System::String* ColliderKey; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* AccessoryList; // 0x30
		::System::String* Name; // 0x38
		::System::Int32 DynamicUnloadPriority; // 0x40
		::System::Boolean InitEntityDisable; // 0x44
		::System::Boolean CustomRandomStartTimeRange; // 0x45
		::System::Int32 ActionID; // 0x48
		::System::Boolean EnableAnimationStateMachine; // 0x4C
		::System::Boolean ActionRandomStartTime; // 0x4D
		::System::Boolean DisableFadeInOut; // 0x4E
		::System::Boolean IsUsePlayerSkin; // 0x4F
		::System::Int32 NpcID; // 0x50
		::System::Single RandomStartTimeRangeMax; // 0x54
		::System::Single RandomStartTimeRangeMin; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigNpcSubTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigNpcSubTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigNpcSubTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigNpcSubTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		static ::MoleMole::PerformanceSettingProfile_ENPCOmitLevel GetOmitLevel()
		{
			return ((::MoleMole::PerformanceSettingProfile_ENPCOmitLevel(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETOMITLEVEL_OFFSET))();
		}

		static ::System::Boolean CreateCrowdNpc(::Foundation::ViewObject::EntityBuildContext& buildContext, ::System::Int32 npcID, ::Class_2_F346500DFC680A13* npcTemplate, ::Class_2_F8EB4D9464ADCCA1* monsterTemplate, ::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornQuaternion, ::System::Boolean disableFadeInOut, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* accessoryVoConfigList)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::Class_2_F346500DFC680A13*, ::Class_2_F8EB4D9464ADCCA1*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATECROWDNPC_OFFSET))(buildContext, npcID, npcTemplate, monsterTemplate, bornPosition, bornQuaternion, disableFadeInOut, accessoryVoConfigList);
		}

		static ::System::Boolean CreateNormalNpc(::Foundation::ViewObject::EntityBuildContext& buildContext, ::System::Int32 npcID, ::Class_2_F8EB4D9464ADCCA1* monsterTemplate, ::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornQuaternion, ::System::Boolean disableFadeInOut)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::EntityBuildContext&, ::System::Int32, ::Class_2_F8EB4D9464ADCCA1*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_CREATENORMALNPC_OFFSET))(buildContext, npcID, monsterTemplate, bornPosition, bornQuaternion, disableFadeInOut);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		static ::System::Void InitCrowdNpcAnimation(::MoleMole::EntityHandle entityHandle, ::System::Boolean enableStateMachine, ::System::Int32 actionID, ::System::ValueTuple_2<::System::Single, ::System::Single> randomRange, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcMontageConfig*>* montageConfigs, ::System::UInt32 debugGroupID, ::System::UInt32 debugMemberID)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>, ::System::Collections::Generic::List_1<::MoleMole::Config::NpcMontageConfig*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCANIMATION_OFFSET))(entityHandle, enableStateMachine, actionID, randomRange, montageConfigs, debugGroupID, debugMemberID);
		}

		static ::System::Void InitNpcName(::MoleMole::EntityHandle entityHandle, ::System::String* nameKey)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNPCNAME_OFFSET))(entityHandle, nameKey);
		}

		static ::System::Void InitCrowdNpcCollider(::MoleMole::EntityHandle entityHandle, ::System::String* colliderKey)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITCROWDNPCCOLLIDER_OFFSET))(entityHandle, colliderKey);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnCustomSetEnable(::MoleMole::EntityHandle entityHandle, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONCUSTOMSETENABLE_OFFSET))(this, entityHandle, enable);
		}

		::System::Void _InitNpcOnEnable(::MoleMole::EntityHandle entityHandle, ::System::Boolean isCustomEnable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__INITNPCONENABLE_OFFSET))(this, entityHandle, isCustomEnable);
		}

		static ::System::Void TryRenameServerNpcRootGameObject(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYRENAMESERVERNPCROOTGAMEOBJECT_OFFSET))(entityHandle);
		}

		static ::System::Void InitNormalNpcAnimation(::MoleMole::EntityHandle entityHandle, ::System::Int32 actionID, ::System::ValueTuple_2<::System::Single, ::System::Single> randomRange, ::System::Boolean isCustomEnable)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Int32, ::System::ValueTuple_2<::System::Single, ::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_INITNORMALNPCANIMATION_OFFSET))(entityHandle, actionID, randomRange, isCustomEnable);
		}

		static ::System::Void SetParameter(::UnityEngine::Animator* animator, ::System::String* paramType, ::System::String* paramName, ::System::String* paramValue)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_SETPARAMETER_OFFSET))(animator, paramType, paramName, paramValue);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid RandomLoopStateNormalizedTimeAsync(::UnityEngine::Animator* animator, ::System::ValueTuple_2<::System::Single, ::System::Single> randomRange)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::UnityEngine::Animator*, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_RANDOMLOOPSTATENORMALIZEDTIMEASYNC_OFFSET))(animator, randomRange);
		}

		static ::System::ValueTuple_2<::System::Single, ::System::Single> GetAnimationRandomStartTimeRange(::System::Boolean randomStart, ::System::Boolean customRange, ::System::Single rangeMin, ::System::Single rangeMax)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_GETANIMATIONRANDOMSTARTTIMERANGE_OFFSET))(randomStart, customRange, rangeMin, rangeMax);
		}

		static ::Class_3_B63797F552E19B19* TryGetNpcPerfTag(::Foundation::ViewObject::ViewObjectHandle memberHandle, ::Class_3_F66EF797857EB737* memberComp)
		{
			return ((::Class_3_B63797F552E19B19*(*)(::Foundation::ViewObject::ViewObjectHandle, ::Class_3_F66EF797857EB737*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_TRYGETNPCPERFTAG_OFFSET))(memberHandle, memberComp);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
