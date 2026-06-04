#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_540;
class Class_0_16E4307DCC419505_543;
class Class_0_16E4307DCC419505_960;
class Class_0_16E4307DCC419505_961;
class Class_1_1342B57709FD7AC5;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginBase; }
namespace RPG::Client { class MonoEffectPluginSpeed; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAGS_OFFSET UNITYSDK_OFFSET(0xC07E000)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAG_OFFSET UNITYSDK_OFFSET(0xC07DFB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xC07D870)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_AWAKEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xC07A550)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_COPYTARGETANIMATORPARAMETERS_OFFSET UNITYSDK_OFFSET(0xC087E00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESPAWNMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xC07A3B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTORYMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xC07CA90)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTROYEFFECT_OFFSET UNITYSDK_OFFSET(0xC085270)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISABLEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xC079950)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSEPLUGINS_OFFSET UNITYSDK_OFFSET(0xC0851C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC07CEE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ENABLEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xC079830)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETADAPTSCALE_OFFSET UNITYSDK_OFFSET(0xC088850)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETANIMATORS_OFFSET UNITYSDK_OFFSET(0xC087530)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETATTACHNAME_OFFSET UNITYSDK_OFFSET(0xC07B610)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0xC07ABB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTGO_OFFSET UNITYSDK_OFFSET(0xC07B3E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETFLAGMASK_OFFSET UNITYSDK_OFFSET(0xC07E170)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xC07B2B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0xC0883A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINROTATION_OFFSET UNITYSDK_OFFSET(0xC088340)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETPREFABATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xC07B6A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xC07AAF0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETGO_OFFSET UNITYSDK_OFFSET(0xC07B4E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0xC07B4A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC088C60)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ACCUMULATEDEFFECTTIME_OFFSET UNITYSDK_OFFSET(0xC088F40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ATTACHTOTIMELINE_OFFSET UNITYSDK_OFFSET(0xC086720)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xC088F20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_FROMUIMODEL_OFFSET UNITYSDK_OFFSET(0xC088CC0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_GORENDERCACHE_OFFSET UNITYSDK_OFFSET(0xC088F10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORBIDINITRENDERCACAHE_OFFSET UNITYSDK_OFFSET(0xC088410)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORIBIDRESETRENDERCACHE_OFFSET UNITYSDK_OFFSET(0xC081790)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISINVISIBLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xC088F50)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISRESET_OFFSET UNITYSDK_OFFSET(0xC088EB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISSELFDESTROYED_OFFSET UNITYSDK_OFFSET(0xC088EA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC088E90)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_MANUALUPDATEPARTICLE_OFFSET UNITYSDK_OFFSET(0xC0850C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_OWNERMONO_OFFSET UNITYSDK_OFFSET(0xC088F70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xC088F30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0xC07E120)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_OFFSET UNITYSDK_OFFSET(0xC07E0D0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_1_OFFSET UNITYSDK_OFFSET(0xC07E290)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_OFFSET UNITYSDK_OFFSET(0xC07E1B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HIDEEFFECT_OFFSET UNITYSDK_OFFSET(0xC083950)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISATTACHED_OFFSET UNITYSDK_OFFSET(0xC07B650)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISINDELAY_OFFSET UNITYSDK_OFFSET(0xC07E380)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISPLUGINSSET_OFFSET UNITYSDK_OFFSET(0xC07D820)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_MANUALTICKVISIBLE_OFFSET UNITYSDK_OFFSET(0xC07F500)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEIN_OFFSET UNITYSDK_OFFSET(0xC07DD40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEOUT_OFFSET UNITYSDK_OFFSET(0xC07DE00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONMONOEFFECTDESTROY_OFFSET UNITYSDK_OFFSET(0xC07A230)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONPREREATTACH_OFFSET UNITYSDK_OFFSET(0xC07D9E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONREATTACHED_OFFSET UNITYSDK_OFFSET(0xC07DB00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_POSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xC087290)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERFADEINCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC07DEC0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERREATTACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC07DC20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REPLAY_OFFSET UNITYSDK_OFFSET(0xC082A70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPARTICLEEMISSION_OFFSET UNITYSDK_OFFSET(0xC07F0C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPLUGINS_OFFSET UNITYSDK_OFFSET(0xC081840)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESET_OFFSET UNITYSDK_OFFSET(0xC080180)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REVIVE_OFFSET UNITYSDK_OFFSET(0xC07E7A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SELFDESTROY_OFFSET UNITYSDK_OFFSET(0xC086F20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_1_OFFSET UNITYSDK_OFFSET(0xC087B60)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0xC0875B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETATTACH_OFFSET UNITYSDK_OFFSET(0xC07B550)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTENTITY_OFFSET UNITYSDK_OFFSET(0xC07B380)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0xC07B330)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETDONTSYNCENTITYVISIBILITY_OFFSET UNITYSDK_OFFSET(0xC0882B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETEFFECTPLUGINS_OFFSET UNITYSDK_OFFSET(0xC07D660)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xC07E3E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISH_OFFSET UNITYSDK_OFFSET(0xC07CBB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETHIGHQUALITYEFFECTON_OFFSET UNITYSDK_OFFSET(0xC0874C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETPARTICLEEMISSIONON_OFFSET UNITYSDK_OFFSET(0xC07F2B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xC07A920)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0xC07B450)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xC082460)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_GORENDERCACHE_OFFSET UNITYSDK_OFFSET(0xC088EC0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_ISINVISIBLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xC088F60)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0xC0839F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SPAWNMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xC07A300)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STARTALLPS_OFFSET UNITYSDK_OFFSET(0xC060220)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPALLPS_OFFSET UNITYSDK_OFFSET(0xC0603F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPPARTICLEEMISSION_OFFSET UNITYSDK_OFFSET(0xC07E980)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xC085F80)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_TRYSIMULATEAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0xC084110)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_UNLOADLODMONOEFFECT_OFFSET UNITYSDK_OFFSET(0xC07E5D0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CANFOLLOWTARGETVISIBLE_OFFSET UNITYSDK_OFFSET(0xC088AB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xC088FC0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CHECKRENDERTEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0xC081B00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CLEARTRAILRENDERS_OFFSET UNITYSDK_OFFSET(0xC0859E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__COPYANIMATOR_OFFSET UNITYSDK_OFFSET(0xC087FA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC07A520)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITBYEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xC0809A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECTANIMSTATE_OFFSET UNITYSDK_OFFSET(0xC083730)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECT_OFFSET UNITYSDK_OFFSET(0xC07B760)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__ISENTITYINVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0xC088A20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__MOVETRAILRENDERS_OFFSET UNITYSDK_OFFSET(0xC07ED50)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__ONTARGETENTITYDISPOSE_OFFSET UNITYSDK_OFFSET(0xC088D30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RECOVEREFFECTLAYERSFROMUI3D_OFFSET UNITYSDK_OFFSET(0xC085DD0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RELEASERENDERTEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0xC085B70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYANIMATORS_OFFSET UNITYSDK_OFFSET(0xC083430)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0xC083080)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETMAZESKILLEFFECTSETTING_OFFSET UNITYSDK_OFFSET(0xC081EF0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC080CB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETACTIVE_OFFSET UNITYSDK_OFFSET(0xC0870C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETEFFECTUI3DLAYERS_OFFSET UNITYSDK_OFFSET(0xC0821F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETUPPLUGINS_OFFSET UNITYSDK_OFFSET(0xC07D6C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCPROPSTATE_OFFSET UNITYSDK_OFFSET(0xC0884A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCRECORDANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0xC088690)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC084590)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKVISIBLITY_OFFSET UNITYSDK_OFFSET(0xC07F550)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYDISPOSEEFFECTPLUGINCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xC085BC0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYRESETEFFECTPLUGINCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xC0818F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATEEFFECTPERFORMSPEED_OFFSET UNITYSDK_OFFSET(0xC086830)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATESHADERSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xC086DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectBehavior_TypeDefinitionIndex = 65310;

	class MonoEffectBehavior : public ::RPG::Client::BehaviorBase
	{
	public:
		static ::System::String** StaticGet_EFFECT_HIGHT_ROOT_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectBehavior_TypeDefinitionIndex)->GetStaticField(0x603C0);
		}
		static ::System::UInt32* StaticGet_MazeEffectAddDepth2RefCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectBehavior_TypeDefinitionIndex)->GetStaticField(0x12500);
		}
		::System::Boolean _IsReset; // 0x18
		::System::Boolean _IsRegisteredEvent; // 0x19
		::System::Boolean _UseCasterFollowTimeScale; // 0x1A
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x20
		::RPG::GameCore::GameEntity* _CastEntityRef; // 0x28
		::UnityEngine::GameObject* _CastOverrideGORef; // 0x30
		::RPG::GameCore::GameEntity* _TargetEntityRef; // 0x38
		::UnityEngine::GameObject* _TargetOverrideGORef; // 0x40
		::System::String* _AttachPointName; // 0x48
		::System::Boolean _IsInvisibleByGamePlay_k__BackingField; // 0x50
		::System::Single _CurrentLife; // 0x54
		::System::Int32 _EnableFrameCount; // 0x58
		::System::Boolean _NeedOpaqueColorRT; // 0x5C
		::System::Boolean _NeedOpaqueDepthRT; // 0x5D
		::System::Single _TimeScale; // 0x60
		::System::Single _Speed; // 0x64
		::System::Int32 _Flag; // 0x68
		::System::Int32 _HideReason; // 0x6C
		::System::Single _AccumulatedEffectTime; // 0x70
		::System::Boolean _IsSelfDestroyed; // 0x74
		::System::Boolean _IsVisible; // 0x75
		::System::Boolean _VisibleNeedRefresh; // 0x76
		::System::Boolean _FollowTargetEntityVisible; // 0x77
		::System::Boolean _FollowAttachPointVisible; // 0x78
		::System::Single _OwnerTaskTimeScale; // 0x7C
		::System::Boolean _EffectInited; // 0x80
		::System::Single _OriginMaxLifeTime; // 0x84
		::UnityEngine::Vector3 _OriginLocalOffset; // 0x88
		::UnityEngine::Vector3 _OriginRotationOffset; // 0x94
		::UnityEngine::Vector3 _OriginPosition; // 0xA0
		::UnityEngine::Vector3 _OriginScale; // 0xAC
		::UnityEngine::Quaternion _OriginRotation; // 0xB8
		::System::Single _OriginSelfTimeSlow; // 0xC8
		::System::Boolean _OriginDontSyncCasterVisibility; // 0xCC
		::RPG::PoolList_1<::System::Int32>* _OriginRenderFlagList; // 0xD0
		::RPG::PoolList_1<::UnityEngine::ParticleSystemSimulationSpace>* _OriginParticleSystemSimulationSpaceList; // 0xD8
		::RPG::PoolList_1<::System::Single>* _OriginParticleSystemSimulationSpeedList; // 0xE0
		::RPG::PoolList_1<::System::Single>* _OriginParticleSystemVolocitySpeedModifierList; // 0xE8
		::RPG::PoolList_1<::UnityEngine::ParticleSystem_MinMaxCurve>* _OriginParticleSystemEmmisionDistanceList; // 0xF0
		::RPG::PoolList_1<::System::Int32>* _OriginGameObjectsLayerList; // 0xF8
		::UnityEngine::Transform* _EffHighRoot; // 0x100
		::RPG::GameCore::CharacterVisibleComponent* _targetEntityVisibleCompt; // 0x108
		::Il2CppArray<::Class_0_16E4307DCC419505_540*>* _EffectVisibleComponents; // 0x110
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_960*>* _EffectReattachComponents; // 0x118
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_961*>* _EffectFadeComponents; // 0x120
		::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* _EffectPluginList; // 0x128
		::RPG::Client::MonoEffectPluginSpeed* _EffectPluginSpeed; // 0x130
		::Class_1_1342B57709FD7AC5* _GoRendererCache; // 0x138
		::RPG::PoolList_1<::UnityEngine::Renderer*>* _posmRenderList; // 0x140
		::Il2CppArray<::Class_0_16E4307DCC419505_543*>* _ResetEffectPlugins; // 0x148
		::System::Single _DelayTimer; // 0x150
		::System::Single _LastestTickDelaTime; // 0x154
		::System::Int32 _StopParticleEmissionFrame; // 0x158
		::System::Action* _FinishCallback; // 0x160
		::RPG::GameCore::OnEventCallBack* _onTargetEntityDisposeDelegate; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* GetGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETGAMEOBJECT_OFFSET))(this);
		}

		::System::Void SetCastOverrideGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTOVERRIDEGO_OFFSET))(this, a1);
		}

		::System::Void SetCastEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTENTITY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetCastEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTENTITY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCastGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTGO_OFFSET))(this);
		}

		::System::Void SetTargetOverrideGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETOVERRIDEGO_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetTargetOverrideGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETOVERRIDEGO_OFFSET))(this);
		}

		::System::Void SetTargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetTargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETENTITY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTargetGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETGO_OFFSET))(this);
		}

		::System::Void SetAttach(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETATTACH_OFFSET))(this, a1, a2);
		}

		::System::String* GetAttachName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETATTACHNAME_OFFSET))(this);
		}

		::System::Boolean IsAttached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISATTACHED_OFFSET))(this);
		}

		::System::String* GetPrefabAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETPREFABATTACHPOINT_OFFSET))(this);
		}

		::System::Void AwakeMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_AWAKEMONOEFFECT_OFFSET))(this);
		}

		::System::Void EnableMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ENABLEMONOEFFECT_OFFSET))(this);
		}

		::System::Void DisableMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISABLEMONOEFFECT_OFFSET))(this);
		}

		::System::Void DestoryMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTORYMONOEFFECT_OFFSET))(this);
		}

		::System::Void SpawnMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SPAWNMONOEFFECT_OFFSET))(this);
		}

		::System::Void DespawnMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESPAWNMONOEFFECT_OFFSET))(this);
		}

		::System::Void SetEffectPlugins(::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETEFFECTPLUGINS_OFFSET))(this, a1);
		}

		::System::Boolean IsPluginsSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISPLUGINSSET_OFFSET))(this);
		}

		::System::Void AttachToTargetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ATTACHTOTARGETENTITY_OFFSET))(this);
		}

		::System::Void OnPreReattach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONPREREATTACH_OFFSET))(this);
		}

		::System::Void OnReattached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONREATTACHED_OFFSET))(this);
		}

		::System::Void RegisterReattachComponent(::Class_0_16E4307DCC419505_960* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_960*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERREATTACHCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEIN_OFFSET))(this);
		}

		::System::Void OnFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEOUT_OFFSET))(this);
		}

		::System::Void RegisterFadeInComponent(::Class_0_16E4307DCC419505_961* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_961*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERFADEINCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void AddFlag(::RPG::GameCore::MonoEffectFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAG_OFFSET))(this, a1);
		}

		::System::Void AddFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAGS_OFFSET))(this, a1);
		}

		::System::Boolean HasFlag(::RPG::GameCore::MonoEffectFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_OFFSET))(this, a1);
		}

		static ::System::Boolean HasFlag_1(::System::Int32 a1, ::RPG::GameCore::MonoEffectFlag a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_1_OFFSET))(a1, a2);
		}

		::System::Int32 GetFlagMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETFLAGMASK_OFFSET))(this);
		}

		::System::Boolean HasOneOfFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_OFFSET))(this, a1);
		}

		static ::System::Boolean HasOneOfFlags_1(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_1_OFFSET))(a1, a2);
		}

		::System::Boolean IsInDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISINDELAY_OFFSET))(this);
		}

		::System::Void SetFinish(::System::Boolean a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFinishImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISHIMMEDIATELY_OFFSET))(this);
		}

		::System::Void UnloadLODMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_UNLOADLODMONOEFFECT_OFFSET))(this);
		}

		::System::Void Revive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REVIVE_OFFSET))(this);
		}

		::System::Void StopParticleEmission(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPPARTICLEEMISSION_OFFSET))(this, a1);
		}

		::System::Void ResetParticleEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPARTICLEEMISSION_OFFSET))(this);
		}

		::System::Void SetParticleEmissionOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETPARTICLEEMISSIONON_OFFSET))(this, a1);
		}

		::System::Void ManualTickVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_MANUALTICKVISIBLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESET_OFFSET))(this);
		}

		::System::Void Replay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REPLAY_OFFSET))(this, a1);
		}

		::System::Void TrySimulateAfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_TRYSIMULATEAFTERUPDATE_OFFSET))(this);
		}

		::System::Void Simulate(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SIMULATE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPLUGINS_OFFSET))(this);
		}

		::System::Void DisposePlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSEPLUGINS_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void DestroyEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTROYEFFECT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void SelfDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SELFDESTROY_OFFSET))(this);
		}

		::System::Void OnMonoEffectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONMONOEFFECTDESTROY_OFFSET))(this);
		}

		::System::Void StartAllPs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STARTALLPS_OFFSET))(this);
		}

		::System::Void StopAllPs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPALLPS_OFFSET))(this);
		}

		::System::Void HideEffect(::System::Boolean a1, ::RPG::Client::MonoEffectHideReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HIDEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void PostAudioEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_POSTAUDIOEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetHighQualityEffectOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETHIGHQUALITYEFFECTON_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::UnityEngine::Animator*>* GetAnimators()
		{
			return ((::RPG::PoolList_1<::UnityEngine::Animator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETANIMATORS_OFFSET))(this);
		}

		::System::Void SetAnimatorState(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAnimatorState_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_1_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTargetAnimatorParameters(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_COPYTARGETANIMATORPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void _CopyAnimator(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__COPYANIMATOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetDontSyncEntityVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETDONTSYNCENTITYVISIBILITY_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetOriginRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetOriginPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINPOSITION_OFFSET))(this);
		}

		::System::Void _InitEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECT_OFFSET))(this);
		}

		::System::Void _SetupPlugins(::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETUPPLUGINS_OFFSET))(this, a1);
		}

		::System::Void _TryResetEffectPluginComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYRESETEFFECTPLUGINCOMPONENTS_OFFSET))(this);
		}

		::System::Void _TryDisposeEffectPluginComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYDISPOSEEFFECTPLUGINCOMPONENTS_OFFSET))(this);
		}

		::System::Void _InitEffectAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECTANIMSTATE_OFFSET))(this);
		}

		::System::Void _InitByEffectParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITBYEFFECTPARAMS_OFFSET))(this);
		}

		::System::Void _ResetTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETTRANSFORM_OFFSET))(this);
		}

		::System::Void _SyncPropState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCPROPSTATE_OFFSET))(this);
		}

		::System::Void _SyncRecordAnimatorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCRECORDANIMATORSTATE_OFFSET))(this);
		}

		::System::Void _SetEffectUI3DLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETEFFECTUI3DLAYERS_OFFSET))(this);
		}

		::System::Void _RecoverEffectLayersFromUI3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RECOVEREFFECTLAYERSFROMUI3D_OFFSET))(this);
		}

		::System::Boolean _IsEntityInVisibleState(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__ISENTITYINVISIBLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean _CanFollowTargetVisible(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CANFOLLOWTARGETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _TickVisiblity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKVISIBLITY_OFFSET))(this);
		}

		::System::Void GetTimeScale(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void _TickTimeScale(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateEffectPerformSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATEEFFECTPERFORMSPEED_OFFSET))(this);
		}

		::System::Void _UpdateShaderSimulationSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATESHADERSIMULATIONSPEED_OFFSET))(this, a1);
		}

		::System::Void _OnTargetEntityDispose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__ONTARGETENTITYDISPOSE_OFFSET))(this, a1);
		}

		::System::Void _CheckRenderTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CHECKRENDERTEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void _ReleaseRenderTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RELEASERENDERTEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void _ReplayParticleSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYPARTICLESYSTEMS_OFFSET))(this);
		}

		::System::Void _ReplayAnimators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYANIMATORS_OFFSET))(this);
		}

		::System::Void _ResetMazeSkillEffectSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETMAZESKILLEFFECTSETTING_OFFSET))(this);
		}

		::System::Void _ClearTrailRenders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CLEARTRAILRENDERS_OFFSET))(this);
		}

		::System::Void _MoveTrailRenders(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__MOVETRAILRENDERS_OFFSET))(this, a1);
		}

		::System::Single GetAdaptScale(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EffectScaleAdaptType a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EffectScaleAdaptType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETADAPTSCALE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_FromUIModel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_FROMUIMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsSelfDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISSELFDESTROYED_OFFSET))(this);
		}

		::System::Boolean get_IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISRESET_OFFSET))(this);
		}

		::System::Void set_GoRenderCache(::Class_1_1342B57709FD7AC5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_GORENDERCACHE_OFFSET))(this, a1);
		}

		::Class_1_1342B57709FD7AC5* get_GoRenderCache()
		{
			return ((::Class_1_1342B57709FD7AC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_GORENDERCACHE_OFFSET))(this);
		}

		::System::Single get_CurrentLife()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_CURRENTLIFE_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_SPEED_OFFSET))(this);
		}

		::System::Single get_AccumulatedEffectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ACCUMULATEDEFFECTTIME_OFFSET))(this);
		}

		::System::Boolean get_IsInvisibleByGamePlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISINVISIBLEBYGAMEPLAY_OFFSET))(this);
		}

		::System::Void set_IsInvisibleByGamePlay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_ISINVISIBLEBYGAMEPLAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForbidInitRenderCacahe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORBIDINITRENDERCACAHE_OFFSET))(this);
		}

		::System::Boolean get_IsForibidResetRenderCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORIBIDRESETRENDERCACHE_OFFSET))(this);
		}

		::System::Boolean get_ManualUpdateParticle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_MANUALUPDATEPARTICLE_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* get_OwnerMono()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_OWNERMONO_OFFSET))(this);
		}

		::System::Boolean get_AttachToTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ATTACHTOTIMELINE_OFFSET))(this);
		}
	};
}
