#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/Config/AnimatorEventShootingBulletEntry_ShootBulletType.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_WaveType.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/ShootingGroundSubsystem_BulletMode.h"
#include "unitysdk/MoleMole/ShootingGroundSubsystem_FireMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_C546E5BF9CD6AD69;
class Class_1_CD54B66100AEF2DB;
class Class_1_D77CC2A6B11CB8D0;
class Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E;
class Class_2_0206DD479BB5C906;
class Class_3_C4DB8D898CBC2756_1;
namespace MoleMole { class ShootingGroundSubsystem_BulletStats; }
namespace MoleMole { class ShootingGroundSubsystem_RaycastHitCompare; }
namespace MoleMole { class UITriggerShootMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigShootingGround; }
namespace MoleMole::Config { class ConfigShootingGroundAimAssist; }
namespace MoleMole::Config { class ConfigShootingGroundControl; }
namespace Nap::NapECS { class EcsFilter; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYALLOUTLINEEFFECTS_OFFSET UNITYSDK_OFFSET(0x11DF2440)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYOUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x11DF74E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CHANGEFIREMODE_OFFSET UNITYSDK_OFFSET(0x11DF4B70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CONVERTBULLETMODE_OFFSET UNITYSDK_OFFSET(0x11DF7430)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CREATEGAMERESULT_OFFSET UNITYSDK_OFFSET(0x11DF7480)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_DOEXPLODEACTION_OFFSET UNITYSDK_OFFSET(0x11DF7B60)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ENTERTPSMODE_OFFSET UNITYSDK_OFFSET(0x11DF1630)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_EXITTPSMODE_OFFSET UNITYSDK_OFFSET(0x11DEE530)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTCOLLIDERSCALE_OFFSET UNITYSDK_OFFSET(0x11DEE180)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTRATIO_OFFSET UNITYSDK_OFFSET(0x11DEE0F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETCAMERAPOSANDROT_OFFSET UNITYSDK_OFFSET(0x11DF5D40)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETHITTARGETDAMAGE_OFFSET UNITYSDK_OFFSET(0x11DF4360)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETLEVELLOGICMODULE_OFFSET UNITYSDK_OFFSET(0x11DF8360)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETRANKMATERIAL_OFFSET UNITYSDK_OFFSET(0x11DEE360)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTBASESCORE_OFFSET UNITYSDK_OFFSET(0x11DF6C70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTRANK_OFFSET UNITYSDK_OFFSET(0x11DF6D10)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTREWARDSCORE_OFFSET UNITYSDK_OFFSET(0x11DF6CC0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETTIMESCORE_OFFSET UNITYSDK_OFFSET(0x11DF6940)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETZOOMMUTESTATE_OFFSET UNITYSDK_OFFSET(0x11DEFBA0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AIMASSISTCONFIG_OFFSET UNITYSDK_OFFSET(0x11DEDE10)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AMMO_OFFSET UNITYSDK_OFFSET(0x11DEDE70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_MAGAZINECAPACITY_OFFSET UNITYSDK_OFFSET(0x11DEF820)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_RECOILOFFSET_OFFSET UNITYSDK_OFFSET(0x11DEDFB0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_SPREADSCALE_OFFSET UNITYSDK_OFFSET(0x11DEE050)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITDATA_OFFSET UNITYSDK_OFFSET(0x11DEF500)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITIALIZEBULLET_OFFSET UNITYSDK_OFFSET(0x11DF1280)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITZOOMDATA_OFFSET UNITYSDK_OFFSET(0x11DEF920)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISINTPSMODE_OFFSET UNITYSDK_OFFSET(0x11DF1230)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISWEAKPOINT_OFFSET UNITYSDK_OFFSET(0x11DF41B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MARKENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x11DF7AF0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MODE2TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11DF1570)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11DEE400)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11DEE440)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x11DF76F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONHITTARGET_OFFSET UNITYSDK_OFFSET(0x11DF3D70)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x11DF0790)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONRELOADANIMEVENT_OFFSET UNITYSDK_OFFSET(0x11DF7020)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONSHOOTANIMEVENT_OFFSET UNITYSDK_OFFSET(0x11DF2C20)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11DF07F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWAVETYPECHANGE_OFFSET UNITYSDK_OFFSET(0x11DF4B00)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWILLKILLMONSTER_OFFSET UNITYSDK_OFFSET(0x11DF60E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x11DF7110)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x11DF71E0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONUP_OFFSET UNITYSDK_OFFSET(0x11DF72B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPACTIONZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x11DF0580)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPZONEZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x11DF0400)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PROCESSENTITYBEHIT_OFFSET UNITYSDK_OFFSET(0x11DF4860)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PUSHALIVEMONSTEREFFECT_OFFSET UNITYSDK_OFFSET(0x11DEF160)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RANDOMSIGN_OFFSET UNITYSDK_OFFSET(0x11DF2BD0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REGISTERLEVELLOGICMODULE_OFFSET UNITYSDK_OFFSET(0x11DF8310)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REMOVEALLOUTLINEEFFECTS_OFFSET UNITYSDK_OFFSET(0x11DF2A00)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETACTIONZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x11DF0700)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETINPUTZOOM_OFFSET UNITYSDK_OFFSET(0x11DF29A0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETTARGETENTITYDEADSTATE_OFFSET UNITYSDK_OFFSET(0x11DF43F0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETZONEZOOMCONTROL_OFFSET UNITYSDK_OFFSET(0x11DEFE00)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SET_AMMO_OFFSET UNITYSDK_OFFSET(0x11DEDE80)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TOGGLEINPUTZOOM_OFFSET UNITYSDK_OFFSET(0x11DF70C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TRIGGERSCORECHANGE_OFFSET UNITYSDK_OFFSET(0x11DF6AC0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATECAMERASENSITIVITY_OFFSET UNITYSDK_OFFSET(0x11DF2220)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWAVEREMAINTIME_OFFSET UNITYSDK_OFFSET(0x11DF6C00)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWEAKPOINTEFFECT_OFFSET UNITYSDK_OFFSET(0x11DF7380)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEZOOMSTATE_OFFSET UNITYSDK_OFFSET(0x11DEFE80)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF83B0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__UPDATEWEAKPOINTEFFECT_G__TRYUPDATEEFFECT_95_0_OFFSET UNITYSDK_OFFSET(0x11DF84D0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11DF8830)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11DF88C0)
#define MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11DF8950)

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_TypeDefinitionIndex = 73420;

	class ShootingGroundSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ShootingGroundSubsystem*>
	{
	public:
		// static const ::System::String* TRIGGER_HIDE_BATTLEUI_TAG; // 0x0
		::Nap::NapECS::EcsFilter* filter; // 0x10
		::MoleMole::UITriggerShootMainPageController* pageController; // 0x18
		::System::Action* OnMagazineEmpty; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* killMonsterSet; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* freeShootEffectEntityIDList; // 0x30
		::MoleMole::ShootingGroundSubsystem_RaycastHitCompare* _compare; // 0x38
		::Il2CppArray<::MoleMole::Config::ConfigShootingGroundControl*>* _controlConfigs; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* _outlineList; // 0x48
		::Il2CppArray<::UnityEngine::RaycastHit>* _hits; // 0x50
		::Class_1_CD54B66100AEF2DB* _scopedCamera; // 0x58
		::System::Collections::Generic::HashSet_1<::System::UInt32>* markRemovedEntitySet; // 0x60
		::Class_2_0206DD479BB5C906* zoneZoomControlStack; // 0x68
		::MoleMole::Battle::Entity* _shooterEntity; // 0x70
		::Il2CppArray<::MoleMole::ShootingGroundSubsystem_BulletStats*>* _bullet; // 0x78
		::Class_1_D77CC2A6B11CB8D0* _statistics; // 0x80
		::System::Action* OnZoomOut; // 0x88
		::Class_1_C546E5BF9CD6AD69* levelShootGameMoudule; // 0x90
		::System::Action* OnZoomIn; // 0x98
		::Class_2_0206DD479BB5C906* actionZoomControlStack; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _aliveMonsterEffect; // 0xA8
		::MoleMole::Config::ConfigShootingGround* _config; // 0xB0
		::System::Int32 killMonsterCount; // 0xB8
		::System::Single remainTime; // 0xBC
		::System::Single _originOutlineThickness; // 0xC0
		::System::Boolean _zoomInput; // 0xC4
		::System::Boolean zoomDataInitialized; // 0xC5
		::System::Boolean _isInZoomState; // 0xC6
		::System::Boolean _applyAimAssist; // 0xC7
		::System::Double rewardScore; // 0xC8
		::System::Int32 currentContinuousKillCount; // 0xD0
		::UnityEngine::Vector2 _recoilRad; // 0xD4
		::System::Single _recoil; // 0xDC
		::System::Int32 _score; // 0xE0
		::System::Double baseScore; // 0xE8
		::System::Int32 _ammo; // 0xF0
		::System::Single _spread; // 0xF4
		::MoleMole::ShootingGroundSubsystem_FireMode fireMode; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigShootingGroundAimAssist* get_AimAssistConfig()
		{
			return ((::MoleMole::Config::ConfigShootingGroundAimAssist*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AIMASSISTCONFIG_OFFSET))(this);
		}

		::System::Int32 get_Ammo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_AMMO_OFFSET))(this);
		}

		::System::Void set_Ammo(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SET_AMMO_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_RecoilOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_RECOILOFFSET_OFFSET))(this);
		}

		::System::Single get_SpreadScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_SPREADSCALE_OFFSET))(this);
		}

		::System::Single GetAimAssistRatio(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTRATIO_OFFSET))(this, inputDevice);
		}

		::System::Single GetAimAssistColliderScale(::UnityEngine::Vector3 position)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETAIMASSISTCOLLIDERSCALE_OFFSET))(this, position);
		}

		::UnityEngine::Material* GetRankMaterial(::System::Int32 rank)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETRANKMATERIAL_OFFSET))(this, rank);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void PushAliveMonsterEffect(::System::UInt32 effectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PUSHALIVEMONSTEREFFECT_OFFSET))(this, effectID);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITDATA_OFFSET))(this);
		}

		::System::Void InitZoomData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITZOOMDATA_OFFSET))(this);
		}

		::System::Boolean GetZoomMuteState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETZOOMMUTESTATE_OFFSET))(this);
		}

		::System::Int32 SetZoneZoomControl(::System::Boolean mute)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETZONEZOOMCONTROL_OFFSET))(this, mute);
		}

		::System::Void PopZoneZoomControl(::System::Int32 zoneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPZONEZOOMCONTROL_OFFSET))(this, zoneIndex);
		}

		::System::Void PopActionZoomControl(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_POPACTIONZOOMCONTROL_OFFSET))(this, index);
		}

		::System::Int32 SetActionZoomControl(::System::Boolean mute)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETACTIONZOOMCONTROL_OFFSET))(this, mute);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsInTPSMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISINTPSMODE_OFFSET))(this);
		}

		::System::Void InitializeBullet(::MoleMole::ShootingGroundSubsystem_BulletMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_BulletMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_INITIALIZEBULLET_OFFSET))(this, mode);
		}

		::System::Void EnterTPSMode(::System::String* configKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ENTERTPSMODE_OFFSET))(this, configKey);
		}

		static ::System::Int32 get_MagazineCapacity()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GET_MAGAZINECAPACITY_OFFSET))();
		}

		::System::Void ExitTPSMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_EXITTPSMODE_OFFSET))(this);
		}

		::System::Void UpdateCameraSensitivity(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATECAMERASENSITIVITY_OFFSET))(this, inputDevice);
		}

		static ::System::Int32 RandomSign()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_RANDOMSIGN_OFFSET))();
		}

		::System::Void OnShootAnimEvent(::MoleMole::ShootingGroundSubsystem_BulletMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_BulletMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONSHOOTANIMEVENT_OFFSET))(this, mode);
		}

		::System::Void OnHitTarget(::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* builder, ::MoleMole::ShootingGroundSubsystem_BulletStats* bullet, ::UnityEngine::GameObject* gameObject, ::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*, ::MoleMole::ShootingGroundSubsystem_BulletStats*, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONHITTARGET_OFFSET))(this, builder, bullet, gameObject, entity, hitPoint);
		}

		::System::Void ProcessEntityBeHit(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_PROCESSENTITYBEHIT_OFFSET))(this, entity);
		}

		::System::Void OnWaveTypeChange(::MoleMole::Config::LevelShootGameConfig_WaveType waveType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig_WaveType))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWAVETYPECHANGE_OFFSET))(this, waveType);
		}

		::System::Void ChangeFireMode(::MoleMole::ShootingGroundSubsystem_FireMode fireMode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_FireMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CHANGEFIREMODE_OFFSET))(this, fireMode);
		}

		::System::Void GetCameraPosAndRot(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETCAMERAPOSANDROT_OFFSET))(this, position, rotation);
		}

		::System::Boolean IsWeakPoint(::UnityEngine::GameObject* colliderGameObject, ::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ISWEAKPOINT_OFFSET))(this, colliderGameObject, entity);
		}

		::System::Void SetTargetEntityDeadState(::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* builder, ::MoleMole::Battle::Entity* entity, ::System::Boolean isBreakWeakPoint, ::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETTARGETENTITYDEADSTATE_OFFSET))(this, builder, entity, isBreakWeakPoint, hitPoint);
		}

		::System::Void OnWillKillMonster(::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E* builder, ::MoleMole::Battle::Entity* entity, ::System::Boolean isBreakWeakPoint, ::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D77CC2A6B11CB8D0_Class_1_30C6AF3533F2E06E*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONWILLKILLMONSTER_OFFSET))(this, builder, entity, isBreakWeakPoint, hitPoint);
		}

		::System::Void TriggerScoreChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TRIGGERSCORECHANGE_OFFSET))(this);
		}

		::System::Double GetTimeScore()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETTIMESCORE_OFFSET))(this);
		}

		::System::Void UpdateWaveRemainTime(::System::Single time, ::System::Boolean replace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWAVEREMAINTIME_OFFSET))(this, time, replace);
		}

		::System::Double GetShootBaseScore()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTBASESCORE_OFFSET))(this);
		}

		::System::Double GetShootRewardScore()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTREWARDSCORE_OFFSET))(this);
		}

		static ::System::Int32 GetShootRank(::System::Int32 totalScore)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETSHOOTRANK_OFFSET))(totalScore);
		}

		::System::Double GetHitTargetDamage(::MoleMole::ShootingGroundSubsystem_BulletStats* bullet, ::UnityEngine::GameObject* gameObject, ::MoleMole::Battle::Entity* entity, ::System::Boolean hitWeakPoint)
		{
			return ((::System::Double(*)(::PVOID, ::MoleMole::ShootingGroundSubsystem_BulletStats*, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETHITTARGETDAMAGE_OFFSET))(this, bullet, gameObject, entity, hitWeakPoint);
		}

		::System::Void OnReloadAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONRELOADANIMEVENT_OFFSET))(this);
		}

		::System::Void SetInputZoom(::System::Boolean isZoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_SETINPUTZOOM_OFFSET))(this, isZoom);
		}

		::System::Void ToggleInputZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_TOGGLEINPUTZOOM_OFFSET))(this);
		}

		::System::Void OnZoomButtonClick(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONCLICK_OFFSET))(this, inputDevice);
		}

		::System::Void OnZoomButtonDown(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONDOWN_OFFSET))(this, inputDevice);
		}

		::System::Void OnZoomButtonUp(::Enum_3_A019F766F8C74696 inputDevice)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A019F766F8C74696))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONZOOMBUTTONUP_OFFSET))(this, inputDevice);
		}

		::System::Void UpdateWeakPointEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEWEAKPOINTEFFECT_OFFSET))(this);
		}

		::System::Void UpdateZoomState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_UPDATEZOOMSTATE_OFFSET))(this);
		}

		static ::System::Int32 Mode2TemplateID(::MoleMole::ShootingGroundSubsystem_BulletMode mode)
		{
			return ((::System::Int32(*)(::MoleMole::ShootingGroundSubsystem_BulletMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MODE2TEMPLATEID_OFFSET))(mode);
		}

		static ::MoleMole::ShootingGroundSubsystem_BulletMode ConvertBulletMode(::MoleMole::Config::AnimatorEventShootingBulletEntry_ShootBulletType bulletType)
		{
			return ((::MoleMole::ShootingGroundSubsystem_BulletMode(*)(::MoleMole::Config::AnimatorEventShootingBulletEntry_ShootBulletType))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CONVERTBULLETMODE_OFFSET))(bulletType);
		}

		::Class_3_C4DB8D898CBC2756_1* CreateGameResult()
		{
			return ((::Class_3_C4DB8D898CBC2756_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_CREATEGAMERESULT_OFFSET))(this);
		}

		::System::Void ApplyAllOutlineEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYALLOUTLINEEFFECTS_OFFSET))(this);
		}

		::System::Void RemoveAllOutlineEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REMOVEALLOUTLINEEFFECTS_OFFSET))(this);
		}

		::System::Void OnEntityReady(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_ONENTITYREADY_OFFSET))(this, evt);
		}

		::System::Void ApplyOutlineRenderer(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_APPLYOUTLINERENDERER_OFFSET))(this, entity);
		}

		::System::Void MarkEntityRemoved(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_MARKENTITYREMOVED_OFFSET))(this, entity);
		}

		::System::Void DoExplodeAction(::MoleMole::Battle::Entity* explodeEntity, ::System::Single explodeRadius, ::System::Collections::Generic::List_1<::System::String*>* zoneTags)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_DOEXPLODEACTION_OFFSET))(this, explodeEntity, explodeRadius, zoneTags);
		}

		::System::Void RegisterLevelLogicModule(::Class_1_C546E5BF9CD6AD69* levelLogic)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C546E5BF9CD6AD69*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_REGISTERLEVELLOGICMODULE_OFFSET))(this, levelLogic);
		}

		::Class_1_C546E5BF9CD6AD69* GetLevelLogicModule()
		{
			return ((::Class_1_C546E5BF9CD6AD69*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM_GETLEVELLOGICMODULE_OFFSET))(this);
		}

		::System::Boolean _UpdateWeakPointEffect_g__TryUpdateEffect_95_0(::System::UInt32 effectID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM__UPDATEWEAKPOINTEFFECT_G__TRYUPDATEEFFECT_95_0_OFFSET))(this, effectID);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOOTINGGROUNDSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
