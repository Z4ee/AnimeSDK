#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1342B57709FD7AC5;
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

#define RPG_CLIENT_MONOEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x10CD1B80)
#define RPG_CLIENT_MONOEFFECT_BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x10CD2890)
#define RPG_CLIENT_MONOEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x10CD27E0)
#define RPG_CLIENT_MONOEFFECT_GETATTACH_OFFSET UNITYSDK_OFFSET(0x10CD3560)
#define RPG_CLIENT_MONOEFFECT_GETCASTERENTITY_OFFSET UNITYSDK_OFFSET(0x10CD34A0)
#define RPG_CLIENT_MONOEFFECT_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x10CD31D0)
#define RPG_CLIENT_MONOEFFECT_GETPATHINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x10CD3A60)
#define RPG_CLIENT_MONOEFFECT_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x10CD33E0)
#define RPG_CLIENT_MONOEFFECT_GETTASKTIMESCALE_OFFSET UNITYSDK_OFFSET(0x10CD35B0)
#define RPG_CLIENT_MONOEFFECT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10CD3920)
#define RPG_CLIENT_MONOEFFECT_GET_EFFECTNAME_OFFSET UNITYSDK_OFFSET(0x10CD37F0)
#define RPG_CLIENT_MONOEFFECT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10CD3A40)
#define RPG_CLIENT_MONOEFFECT_GET_GORENDERERCACHE_OFFSET UNITYSDK_OFFSET(0x10CD3170)
#define RPG_CLIENT_MONOEFFECT_GET_INSTANCEEFFECTID_OFFSET UNITYSDK_OFFSET(0x10CD37D0)
#define RPG_CLIENT_MONOEFFECT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10CD3850)
#define RPG_CLIENT_MONOEFFECT_GET_ISCRPEFFECT_OFFSET UNITYSDK_OFFSET(0x10CD38B0)
#define RPG_CLIENT_MONOEFFECT_GET_ISMANUALTICK_OFFSET UNITYSDK_OFFSET(0x10CD3830)
#define RPG_CLIENT_MONOEFFECT_GET_ISMAZESKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x10CD3870)
#define RPG_CLIENT_MONOEFFECT_GET_ISPRERESETFINISH_OFFSET UNITYSDK_OFFSET(0x10CD2DF0)
#define RPG_CLIENT_MONOEFFECT_GET_ISRESET_OFFSET UNITYSDK_OFFSET(0x10CD39E0)
#define RPG_CLIENT_MONOEFFECT_GET_ISUIEFFECT_OFFSET UNITYSDK_OFFSET(0x10CD3890)
#define RPG_CLIENT_MONOEFFECT_GET_OVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x10CD3980)
#define RPG_CLIENT_MONOEFFECT_GET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0x10CD37B0)
#define RPG_CLIENT_MONOEFFECT_GET_UNIQUEEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x10CD3810)
#define RPG_CLIENT_MONOEFFECT_INIT_OFFSET UNITYSDK_OFFSET(0x10CD1BD0)
#define RPG_CLIENT_MONOEFFECT_ISAFTERFADE_OFFSET UNITYSDK_OFFSET(0x10CD3630)
#define RPG_CLIENT_MONOEFFECT_ISAFTERFINISH_OFFSET UNITYSDK_OFFSET(0x10CD3690)
#define RPG_CLIENT_MONOEFFECT_ISCANREVIVE_OFFSET UNITYSDK_OFFSET(0x10CD3750)
#define RPG_CLIENT_MONOEFFECT_ISREMOVED_OFFSET UNITYSDK_OFFSET(0x10CD36F0)
#define RPG_CLIENT_MONOEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10CD2030)
#define RPG_CLIENT_MONOEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10CD1E80)
#define RPG_CLIENT_MONOEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10CD1CD0)
#define RPG_CLIENT_MONOEFFECT_PRERESET_OFFSET UNITYSDK_OFFSET(0x10CD29C0)
#define RPG_CLIENT_MONOEFFECT_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x10CD2FE0)
#define RPG_CLIENT_MONOEFFECT_SETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x10CD3230)
#define RPG_CLIENT_MONOEFFECT_SET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10CD3930)
#define RPG_CLIENT_MONOEFFECT_SET_EFFECTNAME_OFFSET UNITYSDK_OFFSET(0x10CD3800)
#define RPG_CLIENT_MONOEFFECT_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10CD3A50)
#define RPG_CLIENT_MONOEFFECT_SET_GORENDERERCACHE_OFFSET UNITYSDK_OFFSET(0x10CD38D0)
#define RPG_CLIENT_MONOEFFECT_SET_INSTANCEEFFECTID_OFFSET UNITYSDK_OFFSET(0x10CD37E0)
#define RPG_CLIENT_MONOEFFECT_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10CD3860)
#define RPG_CLIENT_MONOEFFECT_SET_ISCRPEFFECT_OFFSET UNITYSDK_OFFSET(0x10CD38C0)
#define RPG_CLIENT_MONOEFFECT_SET_ISMANUALTICK_OFFSET UNITYSDK_OFFSET(0x10CD3840)
#define RPG_CLIENT_MONOEFFECT_SET_ISMAZESKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x10CD3880)
#define RPG_CLIENT_MONOEFFECT_SET_ISPRERESETFINISH_OFFSET UNITYSDK_OFFSET(0x10CD2E00)
#define RPG_CLIENT_MONOEFFECT_SET_ISUIEFFECT_OFFSET UNITYSDK_OFFSET(0x10CD38A0)
#define RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTID_OFFSET UNITYSDK_OFFSET(0x10CD37C0)
#define RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x10CD3820)
#define RPG_CLIENT_MONOEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x10CD2730)
#define RPG_CLIENT_MONOEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD3BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffect_TypeDefinitionIndex = 66775;

	class MonoEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsPreResetFinish_k__BackingField; // 0x18
		::System::UInt32 _UniqueEffectID_k__BackingField; // 0x1C
		::System::UInt32 _InstanceEffectID_k__BackingField; // 0x20
		::System::Int32 LatestTickFrame; // 0x24
		::System::String* _EffectName_k__BackingField; // 0x28
		::System::String* _UniqueEffectName_k__BackingField; // 0x30
		::System::Boolean _IsManualTick_k__BackingField; // 0x38
		::System::Boolean _IsActive_k__BackingField; // 0x39
		::System::Boolean _IsMazeSkillEffect_k__BackingField; // 0x3A
		::System::Boolean _IsUIEffect_k__BackingField; // 0x3B
		::System::Boolean _IsCRPEffect_k__BackingField; // 0x3C
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

		::System::Boolean PreReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_PRERESET_OFFSET))(this);
		}

		::System::Boolean get_IsPreResetFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISPRERESETFINISH_OFFSET))(this);
		}

		::System::Void set_IsPreResetFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISPRERESETFINISH_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_INIT_OFFSET))(this);
		}

		::System::Void SetLocalScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SETLOCALSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLocalScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETLOCALSCALE_OFFSET))(this);
		}

		::System::Void SetTargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SETTARGETENTITY_OFFSET))(this, a1);
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

		::System::Void set_UniqueEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_INSTANCEEFFECTID_OFFSET))(this);
		}

		::System::Void set_InstanceEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_INSTANCEEFFECTID_OFFSET))(this, a1);
		}

		::System::String* get_EffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_EFFECTNAME_OFFSET))(this);
		}

		::System::Void set_EffectName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_EFFECTNAME_OFFSET))(this, a1);
		}

		::System::String* get_UniqueEffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_UNIQUEEFFECTNAME_OFFSET))(this);
		}

		::System::Void set_UniqueEffectName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_UNIQUEEFFECTNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsManualTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISMANUALTICK_OFFSET))(this);
		}

		::System::Void set_IsManualTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISMANUALTICK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMazeSkillEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISMAZESKILLEFFECT_OFFSET))(this);
		}

		::System::Void set_IsMazeSkillEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISMAZESKILLEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUIEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISUIEFFECT_OFFSET))(this);
		}

		::System::Void set_IsUIEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISUIEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCRPEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_ISCRPEFFECT_OFFSET))(this);
		}

		::System::Void set_IsCRPEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_ISCRPEFFECT_OFFSET))(this, a1);
		}

		::System::Void set_GoRendererCache(::Class_1_1342B57709FD7AC5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_GORENDERERCACHE_OFFSET))(this, a1);
		}

		::Class_1_1342B57709FD7AC5* get_GoRendererCache()
		{
			return ((::Class_1_1342B57709FD7AC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_GORENDERERCACHE_OFFSET))(this);
		}

		::RPG::Client::MonoEffectBehavior* get_Behavior()
		{
			return ((::RPG::Client::MonoEffectBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void set_Behavior(::RPG::Client::MonoEffectBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectBehavior*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_BEHAVIOR_OFFSET))(this, a1);
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

		::System::Void set_GameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

		static ::System::String* GetPathInHierarchy(::UnityEngine::Transform* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECT_GETPATHINHIERARCHY_OFFSET))(a1);
		}
	};
}
