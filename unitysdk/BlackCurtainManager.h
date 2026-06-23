#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/NapLodController_NapLODLevel.h"

class BlackCurtainEffect;
class Class_3_D6DA183EF60F02C8;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_FFD0045B4597F294;
namespace Foundation { template <typename T> class CustomEventAction_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigBlackCurtain; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define BLACKCURTAINMANAGER_ACTIVE_OFFSET UNITYSDK_OFFSET(0x13D3B610)
#define BLACKCURTAINMANAGER_CASTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x13D42290)
#define BLACKCURTAINMANAGER_DEACTIVE_OFFSET UNITYSDK_OFFSET(0x13D3E1E0)
#define BLACKCURTAINMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13D3B2B0)
#define BLACKCURTAINMANAGER_DOAVATARBACKUP_OFFSET UNITYSDK_OFFSET(0x13D41700)
#define BLACKCURTAINMANAGER_DOAVATARSUMMON_OFFSET UNITYSDK_OFFSET(0x13D3FAC0)
#define BLACKCURTAINMANAGER_DOAVATAR_OFFSET UNITYSDK_OFFSET(0x13D3DEE0)
#define BLACKCURTAINMANAGER_DOBUDDY_OFFSET UNITYSDK_OFFSET(0x13D3F500)
#define BLACKCURTAINMANAGER_DOENTITY_OFFSET UNITYSDK_OFFSET(0x13D40DD0)
#define BLACKCURTAINMANAGER_DOLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x13D3F2D0)
#define BLACKCURTAINMANAGER_DOMONSTER_OFFSET UNITYSDK_OFFSET(0x13D3D9D0)
#define BLACKCURTAINMANAGER_DOPARTNERAVATAR_OFFSET UNITYSDK_OFFSET(0x13D3EFF0)
#define BLACKCURTAINMANAGER_DOPARTNERFOLLOWAVATAR_OFFSET UNITYSDK_OFFSET(0x13D41F80)
#define BLACKCURTAINMANAGER_DOSTAGEROOT_OFFSET UNITYSDK_OFFSET(0x13D40400)
#define BLACKCURTAINMANAGER_DOTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x13D3ED60)
#define BLACKCURTAINMANAGER_FORCEDEACTIVEALL_OFFSET UNITYSDK_OFFSET(0x13D3B300)
#define BLACKCURTAINMANAGER_GETCASTERENTITY_OFFSET UNITYSDK_OFFSET(0x13D3D7E0)
#define BLACKCURTAINMANAGER_GETEFFECTRENDERENABLE_OFFSET UNITYSDK_OFFSET(0x13D42F60)
#define BLACKCURTAINMANAGER_ISACITVE_OFFSET UNITYSDK_OFFSET(0x13D3B570)
#define BLACKCURTAINMANAGER_ISCASTERENABLE_OFFSET UNITYSDK_OFFSET(0x13D40CA0)
#define BLACKCURTAINMANAGER_ISDISABLEQTE_OFFSET UNITYSDK_OFFSET(0x13D3B5B0)
#define BLACKCURTAINMANAGER_ISINENTITYWHITELIST_OFFSET UNITYSDK_OFFSET(0x13D40B20)
#define BLACKCURTAINMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13D3B490)
#define BLACKCURTAINMANAGER_OVERRIDELODLEVEL_OFFSET UNITYSDK_OFFSET(0x13D41950)
#define BLACKCURTAINMANAGER_PROCESSEFFECTLIGHT_OFFSET UNITYSDK_OFFSET(0x13D43420)
#define BLACKCURTAINMANAGER_PROCESSEFFECTRENDERINGLAYERMASK_1_OFFSET UNITYSDK_OFFSET(0x13D43780)
#define BLACKCURTAINMANAGER_PROCESSEFFECTRENDERINGLAYERMASK_2_OFFSET UNITYSDK_OFFSET(0x13D3D370)
#define BLACKCURTAINMANAGER_PROCESSEFFECTRENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x13D42DF0)
#define BLACKCURTAINMANAGER_REFRESHSUMMONER_OFFSET UNITYSDK_OFFSET(0x13D3D520)
#define BLACKCURTAINMANAGER_REGISTERCARRYABLEEFFECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x13D43260)
#define BLACKCURTAINMANAGER_RESETBYCONFIG_OFFSET UNITYSDK_OFFSET(0x13D3BE50)
#define BLACKCURTAINMANAGER_SETHIZ_OFFSET UNITYSDK_OFFSET(0x13D42550)
#define BLACKCURTAINMANAGER_SETLIGHTENABLE_OFFSET UNITYSDK_OFFSET(0x13D3EB10)
#define BLACKCURTAINMANAGER_SETRECEIVESHADOWS_1_OFFSET UNITYSDK_OFFSET(0x13D42C10)
#define BLACKCURTAINMANAGER_SETRECEIVESHADOWS_OFFSET UNITYSDK_OFFSET(0x13D42AB0)
#define BLACKCURTAINMANAGER_SETRENDERINGLAYERMASKLAYER5_OFFSET UNITYSDK_OFFSET(0x13D3E940)
#define BLACKCURTAINMANAGER_SETSHADOWCOLORFADEBYZ_OFFSET UNITYSDK_OFFSET(0x13D42810)
#define BLACKCURTAINMANAGER_SUSPENDCURRENTMATPROPERTYMODIFIERS_OFFSET UNITYSDK_OFFSET(0x13D3D100)
#define BLACKCURTAINMANAGER_UNREGISTERCARRYABLEEFFECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x13D43310)
#define BLACKCURTAINMANAGER_UNSUSPENDCURRENTMATPROPERTYMODIFIERS_OFFSET UNITYSDK_OFFSET(0x13D3E720)
#define BLACKCURTAINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D43D10)
#define BLACKCURTAINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13D43960)

inline static constexpr unsigned int BlackCurtainManager_TypeDefinitionIndex = 48456;

class BlackCurtainManager : public ::Foundation::SingletonDisposable_1<::BlackCurtainManager*>
{
public:
	static ::System::UInt32* StaticGet_RenderingLayer5Mask()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainManager_TypeDefinitionIndex)->GetStaticField(0xD5B0);
	}
	static ::System::Int32* StaticGet_ShadowColorFadeByZ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainManager_TypeDefinitionIndex)->GetStaticField(0xD5B4);
	}
	static ::System::UInt32* StaticGet_RenderingLayer5UnMask()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainManager_TypeDefinitionIndex)->GetStaticField(0xD5B8);
	}
	// static const ::System::Int32 layer = 0x4; // 0x0
	::MoleMole::Config::ConfigBlackCurtain* _activeConfig; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _changedRenders; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::BlackCurtainEffect*>* _activeEffectDic; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Light*, ::System::Int32>* _disabledLightsDict; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Boolean>* _disabledReceiveShadowRenderDict; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Boolean>* _disabledShadowRenderDict; // 0x38
	::Foundation::CustomEventAction_1<::System::Boolean>* OnBlackCurtainChangedCallback; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _carryableEffectRenders; // 0x48
	::System::Collections::Generic::List_1<::BlackCurtainEffect*>* _activeEffects; // 0x50
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Boolean>* _disabledReceiveShadowMaterialDict; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Light*>* _changedLights; // 0x60
	::System::Boolean _isActive; // 0x68
	::System::Boolean _isDisableQTE; // 0x69

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_ONCREATE_OFFSET))(this);
	}

	::System::Boolean IsAcitve()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_ISACITVE_OFFSET))(this);
	}

	::System::Boolean IsDisableQTE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_ISDISABLEQTE_OFFSET))(this);
	}

	::System::Void Active(::System::String* key, ::System::UInt32 casterBlackCurtainEntityID, ::System::Collections::Generic::List_1<::System::String*>* whiteAbilityTargetKeyList, ::MoleMole::Battle::Entity* sourceEntity)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_ACTIVE_OFFSET))(this, key, casterBlackCurtainEntityID, whiteAbilityTargetKeyList, sourceEntity);
	}

	::System::Void RefreshSummoner(::MoleMole::Battle::Entity* summonedEntity)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_REFRESHSUMMONER_OFFSET))(this, summonedEntity);
	}

	::System::Void ForceDeActiveAll()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_FORCEDEACTIVEALL_OFFSET))(this);
	}

	::System::Void DeActive(::System::String* key, ::System::UInt32 casterEntityID)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DEACTIVE_OFFSET))(this, key, casterEntityID);
	}

	::System::Void SuspendCurrentMatPropertyModifiers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_SUSPENDCURRENTMATPROPERTYMODIFIERS_OFFSET))(this);
	}

	::System::Void UnSuspendCurrentMatPropertyModifiers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_UNSUSPENDCURRENTMATPROPERTYMODIFIERS_OFFSET))(this);
	}

	::System::Void ResetByConfig(::System::Boolean enable, ::BlackCurtainEffect* blackCurtainEffect)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BlackCurtainEffect*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_RESETBYCONFIG_OFFSET))(this, enable, blackCurtainEffect);
	}

	::MoleMole::Battle::Entity* GetCasterEntity(::BlackCurtainEffect* blackCurtainEffect)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::BlackCurtainEffect*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_GETCASTERENTITY_OFFSET))(this, blackCurtainEffect);
	}

	::System::Boolean IsInEntityWhiteList(::MoleMole::Battle::Entity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_ISINENTITYWHITELIST_OFFSET))(this, entity);
	}

	::System::Void DoLocalAvatar(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOLOCALAVATAR_OFFSET))(this, enable, config, casterEntity);
	}

	::System::Void DoPartnerAvatar(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOPARTNERAVATAR_OFFSET))(this, enable, config, casterEntity);
	}

	::System::Boolean IsCasterEnable(::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_ISCASTERENABLE_OFFSET))(this, config, entity, casterEntity);
	}

	::System::Void DoAvatarBackup(::MoleMole::Battle::Entity* entity, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOAVATARBACKUP_OFFSET))(this, entity, enable);
	}

	::System::Void DoTeamAvatar(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOTEAMAVATAR_OFFSET))(this, enable, config);
	}

	::System::Void DoAvatar(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOAVATAR_OFFSET))(this, enable, config, casterEntity);
	}

	::System::Void DoPartnerFollowAvatar(::System::Boolean enabled, ::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* caster)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOPARTNERFOLLOWAVATAR_OFFSET))(this, enabled, config, caster);
	}

	::System::Void DoMonster(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOMONSTER_OFFSET))(this, enable, config, casterEntity);
	}

	::System::Void DoBuddy(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOBUDDY_OFFSET))(this, enable, config, casterEntity);
	}

	::System::Void DoAvatarSummon(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config, ::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOAVATARSUMMON_OFFSET))(this, enable, config, casterEntity);
	}

	::System::Void CastPerObjectShadow(::Class_3_DFD5D1FDB9D2A4AC* model, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_CASTPEROBJECTSHADOW_OFFSET))(this, model, enable);
	}

	::System::Void SetHiz(::Class_3_DFD5D1FDB9D2A4AC* model, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_SETHIZ_OFFSET))(this, model, enable);
	}

	::System::Void DoStageRoot(::System::Boolean enable, ::MoleMole::Config::ConfigBlackCurtain* config)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOSTAGEROOT_OFFSET))(this, enable, config);
	}

	::System::Void DoEntity(::Class_3_DFD5D1FDB9D2A4AC* model, ::System::Boolean enableInBlackCurtain, ::MoleMole::Config::ConfigBlackCurtain* config, ::System::Boolean processMDB)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::MoleMole::Config::ConfigBlackCurtain*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_DOENTITY_OFFSET))(this, model, enableInBlackCurtain, config, processMDB);
	}

	::System::Void OverrideLodLevel(::Class_3_DFD5D1FDB9D2A4AC* model, ::System::Boolean enable, ::NapLodController_NapLODLevel lodLevel)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean, ::NapLodController_NapLODLevel))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_OVERRIDELODLEVEL_OFFSET))(this, model, enable, lodLevel);
	}

	::System::Boolean ProcessEffectRenderingLayerMask(::MoleMole::Battle::Entity* casterEntity, ::Il2CppArray<::UnityEngine::Renderer*>* renderers)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_PROCESSEFFECTRENDERINGLAYERMASK_OFFSET))(this, casterEntity, renderers);
	}

	::System::Void RegisterCarryableEffectRenderers(::Il2CppArray<::UnityEngine::Renderer*>* renderers)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_REGISTERCARRYABLEEFFECTRENDERERS_OFFSET))(this, renderers);
	}

	::System::Void UnregisterCarryableEffectRenderers(::Il2CppArray<::UnityEngine::Renderer*>* renderers)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_UNREGISTERCARRYABLEEFFECTRENDERERS_OFFSET))(this, renderers);
	}

	::System::Boolean ProcessEffectLight(::MoleMole::Battle::Entity* casterEntity, ::Class_3_D6DA183EF60F02C8* modelComponent, ::System::Boolean isNewEffect)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_D6DA183EF60F02C8*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_PROCESSEFFECTLIGHT_OFFSET))(this, casterEntity, modelComponent, isNewEffect);
	}

	::System::Void ProcessEffectRenderingLayerMask_1(::MoleMole::Battle::Entity* casterEntity, ::UnityEngine::Renderer* renderer)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_PROCESSEFFECTRENDERINGLAYERMASK_1_OFFSET))(this, casterEntity, renderer);
	}

	::System::Void ProcessEffectRenderingLayerMask_2(::UnityEngine::Renderer* renderer, ::System::Boolean isenable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_PROCESSEFFECTRENDERINGLAYERMASK_2_OFFSET))(this, renderer, isenable);
	}

	::System::Boolean GetEffectRenderEnable(::MoleMole::Battle::Entity* casterEntity)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_GETEFFECTRENDERENABLE_OFFSET))(this, casterEntity);
	}

	::System::Void SetRenderingLayerMaskLayer5(::UnityEngine::Renderer* renderer, ::System::Boolean isValid)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_SETRENDERINGLAYERMASKLAYER5_OFFSET))(this, renderer, isValid);
	}

	::System::Void SetShadowColorFadeByZ(::Class_3_FFD0045B4597F294* materialComponent, ::UnityEngine::Renderer* renderer, ::System::Boolean isEnable)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_SETSHADOWCOLORFADEBYZ_OFFSET))(this, materialComponent, renderer, isEnable);
	}

	::System::Void SetReceiveShadows(::UnityEngine::Renderer* renderer, ::System::Boolean isEnable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_SETRECEIVESHADOWS_OFFSET))(this, renderer, isEnable);
	}

	::System::Void SetReceiveShadows_1(::UnityEngine::Material* material, ::System::Boolean isEnable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_SETRECEIVESHADOWS_1_OFFSET))(this, material, isEnable);
	}

	::System::Void SetLightEnable(::UnityEngine::Light* light, ::System::Boolean isEnable)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER_SETLIGHTENABLE_OFFSET))(this, light, isEnable);
	}
};
