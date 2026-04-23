#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class Effect_LineRendererAni; }
namespace RPG::Client { class MonoEffectBehavior; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class TrailRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA92EC80)
#define RPG_CLIENT_MONOEFFECT_BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xA92F9C0)
#define RPG_CLIENT_MONOEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA92F910)
#define RPG_CLIENT_MONOEFFECT_GETATTACH_OFFSET UNITYSDK_OFFSET(0xA930100)
#define RPG_CLIENT_MONOEFFECT_GETCASTERENTITY_OFFSET UNITYSDK_OFFSET(0xA930040)
#define RPG_CLIENT_MONOEFFECT_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA92FE00)
#define RPG_CLIENT_MONOEFFECT_GETPATHINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA9305D0)
#define RPG_CLIENT_MONOEFFECT_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA92FF80)
#define RPG_CLIENT_MONOEFFECT_GETTASKTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA930150)
#define RPG_CLIENT_MONOEFFECT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA930490)
#define RPG_CLIENT_MONOEFFECT_GET_EFFECTNAME_OFFSET UNITYSDK_OFFSET(0xA930380)
#define RPG_CLIENT_MONOEFFECT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA9305B0)
#define RPG_CLIENT_MONOEFFECT_GET_GORENDERERCACHE_OFFSET UNITYSDK_OFFSET(0xA92FDA0)
#define RPG_CLIENT_MONOEFFECT_GET_INSTANCEEFFECTID_OFFSET UNITYSDK_OFFSET(0xA930360)
#define RPG_CLIENT_MONOEFFECT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA9303E0)
#define RPG_CLIENT_MONOEFFECT_GET_ISMANUALTICK_OFFSET UNITYSDK_OFFSET(0xA9303C0)
#define RPG_CLIENT_MONOEFFECT_GET_ISMAZESKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xA930400)
#define RPG_CLIENT_MONOEFFECT_GET_ISRESET_OFFSET UNITYSDK_OFFSET(0xA930550)
#define RPG_CLIENT_MONOEFFECT_GET_ISUIEFFECT_OFFSET UNITYSDK_OFFSET(0xA930420)
#define RPG_CLIENT_MONOEFFECT_GET_OVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xA9304F0)
#define RPG_CLIENT_MONOEFFECT_GET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xA930340)
#define RPG_CLIENT_MONOEFFECT_GET_UNIQUEEFFECTNAME_OFFSET UNITYSDK_OFFSET(0xA9303A0)
#define RPG_CLIENT_MONOEFFECT_INIT_OFFSET UNITYSDK_OFFSET(0xA92ECD0)
#define RPG_CLIENT_MONOEFFECT_ISAFTERFADE_OFFSET UNITYSDK_OFFSET(0xA9301C0)
#define RPG_CLIENT_MONOEFFECT_ISAFTERFINISH_OFFSET UNITYSDK_OFFSET(0xA930220)
#define RPG_CLIENT_MONOEFFECT_ISCANREVIVE_OFFSET UNITYSDK_OFFSET(0xA9302E0)
#define RPG_CLIENT_MONOEFFECT_ISREMOVED_OFFSET UNITYSDK_OFFSET(0xA930280)
#define RPG_CLIENT_MONOEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA92EFD0)
#define RPG_CLIENT_MONOEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA92EED0)
#define RPG_CLIENT_MONOEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA92EDD0)
#define RPG_CLIENT_MONOEFFECT_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA92FC10)
#define RPG_CLIENT_MONOEFFECT_SETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA92FE60)
#define RPG_CLIENT_MONOEFFECT_SET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA9304A0)
#define RPG_CLIENT_MONOEFFECT_SET_EFFECTNAME_OFFSET UNITYSDK_OFFSET(0xA930390)
#define RPG_CLIENT_MONOEFFECT_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA9305C0)
#define RPG_CLIENT_MONOEFFECT_SET_GORENDERERCACHE_OFFSET UNITYSDK_OFFSET(0xA930440)
#define RPG_CLIENT_MONOEFFECT_SET_INSTANCEEFFECTID_OFFSET UNITYSDK_OFFSET(0xA930370)
#define RPG_CLIENT_MONOEFFECT_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA9303F0)
#define RPG_CLIENT_MONOEFFECT_SET_ISMANUALTICK_OFFSET UNITYSDK_OFFSET(0xA9303D0)
#define RPG_CLIENT_MONOEFFECT_SET_ISMAZESKILLEFFECT_OFFSET UNITYSDK_OFFSET(0xA930410)
#define RPG_CLIENT_MONOEFFECT_SET_ISUIEFFECT_OFFSET UNITYSDK_OFFSET(0xA930430)
#define RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0xA930350)
#define RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTNAME_OFFSET UNITYSDK_OFFSET(0xA9303B0)
#define RPG_CLIENT_MONOEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA92F860)
#define RPG_CLIENT_MONOEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA930710)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffect_TypeDefinitionIndex = 64442;

	class MonoEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _UniqueEffectID_k__BackingField; // 0x18
		::System::UInt32 _InstanceEffectID_k__BackingField; // 0x1C
		::System::Int32 LatestTickFrame; // 0x20
		::System::String* _EffectName_k__BackingField; // 0x28
		::System::String* _UniqueEffectName_k__BackingField; // 0x30
		::System::Boolean _IsManualTick_k__BackingField; // 0x38
		::System::Boolean _IsActive_k__BackingField; // 0x39
		::System::Boolean _IsMazeSkillEffect_k__BackingField; // 0x3A
		::System::Boolean _IsUIEffect_k__BackingField; // 0x3B
		::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x40
		::RPG::Client::TriggerEffectParams* TriggerParams; // 0x48
		::System::Single AdaptScale; // 0x50
		::System::Single Delay; // 0x54
		::UnityEngine::Vector3 LocalOffset; // 0x58
		::UnityEngine::Vector3 LocalRotationOffset; // 0x64
		::System::Single SelfTimeSlow; // 0x70
		::UnityEngine::Vector3 LocalScale; // 0x74
		::System::Single MaxLifeTime; // 0x80
		::UnityEngine::Vector3 WorldOffset; // 0x84
		::System::Boolean EnableSimulateTimeAlign; // 0x90
		::System::Boolean EnablePOSM; // 0x91
		::System::Boolean DontSyncCasterVisibility; // 0x92
		::System::Boolean DontSyncCharaMatEffectVisibility; // 0x93
		::System::Boolean DontSyncCharacterStealthState; // 0x94
		::System::Boolean DontDisableIfAttachedIsDisabled; // 0x95
		::System::Boolean DontSyncCasterDitherAlpha; // 0x96
		::System::Boolean SyncVisibilityDitherAlpha; // 0x97
		::System::Single SyncVisibilityDitherAlphaThreshold; // 0x98
		::System::String* AttachPoint; // 0xA0
		::System::Boolean HideOnTargetScaled; // 0xA8
		::Il2CppArray<::System::String*>* RandomAttachPoints; // 0xB0
		::System::Boolean ForceShow; // 0xB8
		::System::Boolean FollowTimeScale; // 0xB9
		::System::Boolean ShaderSimulationSpeedEnable; // 0xBA
		::System::Boolean FollowEntityTimeScale; // 0xBB
		::System::Boolean FollowEntityAnimVisualTimeScale; // 0xBC
		::System::Boolean IsCrossMapLifeTime; // 0xBD
		::System::Boolean DontFinishOnTargetEntityDie; // 0xBE
		::System::Boolean EnableReplay; // 0xBF
		::System::Boolean AutoHideIfTargetFreezed; // 0xC0
		::RPG::PoolList_1<::UnityEngine::Animation*>* _AnimationList; // 0xC8
		::RPG::PoolList_1<::UnityEngine::Animator*>* _AnimatorList; // 0xD0
		::RPG::PoolList_1<::UnityEngine::ParticleSystem*>* _ParticleSystemList; // 0xD8
		::RPG::PoolList_1<::UnityEngine::TrailRenderer*>* _TrailRenderList; // 0xE0
		::RPG::PoolList_1<::RPG::Client::Effect_LineRendererAni*>* _LineRenderAnimList; // 0xE8
		::UnityEngine::Object* EffectPrefab; // 0xF0
		::UnityEngine::Transform* _AttachTransformRef; // 0xF8
		::RPG::Client::MonoEffectBehavior* _Behavior; // 0x100
		::System::Boolean _IsInit; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_INIT_OFFSET))(this);
		}

		::System::Void SetLocalScale(::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SETLOCALSCALE_OFFSET))(this, scale);
		}

		::UnityEngine::Vector3 GetLocalScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETLOCALSCALE_OFFSET))(this);
		}

		::System::Void SetTargetEntity(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SETTARGETENTITY_OFFSET))(this, pEntity);
		}

		::RPG::GameCore::GameEntity* GetTargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETTARGETENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetCasterEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETCASTERENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttach()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETATTACH_OFFSET))(this);
		}

		::System::Single GetTaskTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETTASKTIMESCALE_OFFSET))(this);
		}

		::System::Boolean IsAfterFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_ISAFTERFADE_OFFSET))(this);
		}

		::System::Boolean IsAfterFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_ISAFTERFINISH_OFFSET))(this);
		}

		::System::Boolean IsRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_ISREMOVED_OFFSET))(this);
		}

		::System::Boolean IsCanRevive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_ISCANREVIVE_OFFSET))(this);
		}

		::System::UInt32 get_UniqueEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_UNIQUEEFFECTID_OFFSET))(this);
		}

		::System::Void set_UniqueEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstanceEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_INSTANCEEFFECTID_OFFSET))(this);
		}

		::System::Void set_InstanceEffectID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_INSTANCEEFFECTID_OFFSET))(this, value);
		}

		::System::String* get_EffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_EFFECTNAME_OFFSET))(this);
		}

		::System::Void set_EffectName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_EFFECTNAME_OFFSET))(this, value);
		}

		::System::String* get_UniqueEffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_UNIQUEEFFECTNAME_OFFSET))(this);
		}

		::System::Void set_UniqueEffectName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsManualTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISMANUALTICK_OFFSET))(this);
		}

		::System::Void set_IsManualTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISMANUALTICK_OFFSET))(this, value);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMazeSkillEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISMAZESKILLEFFECT_OFFSET))(this);
		}

		::System::Void set_IsMazeSkillEffect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISMAZESKILLEFFECT_OFFSET))(this, value);
		}

		::System::Boolean get_IsUIEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISUIEFFECT_OFFSET))(this);
		}

		::System::Void set_IsUIEffect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISUIEFFECT_OFFSET))(this, value);
		}

		::System::Void set_GoRendererCache(::Class_1_9CBC71DC5240DC00* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_GORENDERERCACHE_OFFSET))(this, value);
		}

		::Class_1_9CBC71DC5240DC00* get_GoRendererCache()
		{
			return ((::Class_1_9CBC71DC5240DC00*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_GORENDERERCACHE_OFFSET))(this);
		}

		::RPG::Client::MonoEffectBehavior* get_Behavior()
		{
			return ((::RPG::Client::MonoEffectBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void set_Behavior(::RPG::Client::MonoEffectBehavior* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectBehavior*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_BEHAVIOR_OFFSET))(this, value);
		}

		::RPG::GameCore::OverrideMonoEffectConfig* get_OverrideConfig()
		{
			return ((::RPG::GameCore::OverrideMonoEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_OVERRIDECONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISRESET_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_GameObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_GAMEOBJECT_OFFSET))(this, value);
		}

		static ::System::String* GetPathInHierarchy(::UnityEngine::Transform* t)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETPATHINHIERARCHY_OFFSET))(t);
		}
	};
}
