#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObjectsAnimationByCameraAudioSyncScope.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ObjectsAnimationByCameraAudioConfig;
class ObjectsAnimationByCameraWithKey_CollectionWrapper;
class ObjectsAnimationByCamera_DriveAudioLayersForObject;
class ObjectsAnimationByCamera_DriveAudioRuntimeState;
class ObjectsAnimationByCamera_TransformAudioConfig;
class ObjectsAnimationByCamera_TransformAudioRuntimeState;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define OBJECTSANIMATIONBYCAMERAWITHKEY_APPLYFADEOUT_OFFSET UNITYSDK_OFFSET(0x18B16F70)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_APPLYTRANSFORMBYFACTORINTERNAL_OFFSET UNITYSDK_OFFSET(0x18B16B60)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_APPLYTRANSFORMBYFACTOR_OFFSET UNITYSDK_OFFSET(0x18B166F0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_CLEARAUDIOCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x18B14080)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_CLEAROBJECTS_OFFSET UNITYSDK_OFFSET(0x18B14D50)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_COLLECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x18B143F0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_COPYLEGACYAUDIODATATOASSET_OFFSET UNITYSDK_OFFSET(0x18B14030)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18B13F90)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x18B162D0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_GETREFERENCEFRAMERATE_OFFSET UNITYSDK_OFFSET(0x18B17570)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_INITPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x18B14300)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GETCOLLECTEDOBJECTAT_OFFSET UNITYSDK_OFFSET(0x18B13EA0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOCONFIGASSET_OFFSET UNITYSDK_OFFSET(0x18B13990)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOSYNCSCOPE_OFFSET UNITYSDK_OFFSET(0x18B13F40)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_COLLECTEDOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x18B13E50)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET UNITYSDK_OFFSET(0x18B13BD0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0x18B13D10)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALENABLEDONENTER_OFFSET UNITYSDK_OFFSET(0x18B13AB0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALISINVOLUME_OFFSET UNITYSDK_OFFSET(0x18B13DB0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALKEY_OFFSET UNITYSDK_OFFSET(0x18B13A20)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIOCONFIGS_OFFSET UNITYSDK_OFFSET(0x18B13B40)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0x18B13C70)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_AUDIOCONFIGASSET_OFFSET UNITYSDK_OFFSET(0x18B139D0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET UNITYSDK_OFFSET(0x18B13C20)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0x18B13D60)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALENABLEDONENTER_OFFSET UNITYSDK_OFFSET(0x18B13AF0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALISINVOLUME_OFFSET UNITYSDK_OFFSET(0x18B13E00)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALKEY_OFFSET UNITYSDK_OFFSET(0x18B13A60)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIOCONFIGS_OFFSET UNITYSDK_OFFSET(0x18B13B80)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0x18B13CC0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_LOCALSAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x18B16320)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_NOTIFYTRANSFORMEXITBAND_OFFSET UNITYSDK_OFFSET(0x18B143A0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B15760)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B155B0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B153B0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18B157C0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_PLAY_OFFSET UNITYSDK_OFFSET(0x18B178A0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_PROCESSDRIVEAUDIOFOROBJECT_OFFSET UNITYSDK_OFFSET(0x18B14210)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_RESETDRIVEAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x18B141C0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_RESTOREINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x18B14EB0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18B17960)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAMENONSTAGGERED_OFFSET UNITYSDK_OFFSET(0x18B17CE0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAMESTAGGERED_OFFSET UNITYSDK_OFFSET(0x18B179E0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAME_OFFSET UNITYSDK_OFFSET(0x18B15300)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_STOPALLAUDIOFORCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x18B142B0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_STOP_OFFSET UNITYSDK_OFFSET(0x18B165E0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x18B13FE0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_SYNCDRIVEAUDIOEMITTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x18B140D0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_UPDATEPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x18B14350)
#define OBJECTSANIMATIONBYCAMERAWITHKEY_UPDATETRANSFORMAUDIO_OFFSET UNITYSDK_OFFSET(0x18B14120)
#define OBJECTSANIMATIONBYCAMERAWITHKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B182A0)
#define OBJECTSANIMATIONBYCAMERAWITHKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B18170)

inline static constexpr unsigned int ObjectsAnimationByCameraWithKey_TypeDefinitionIndex = 85691;

class ObjectsAnimationByCameraWithKey : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__DitherAlpha()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCameraWithKey_TypeDefinitionIndex)->GetStaticField(0xD1A0);
	}
	static ::System::Boolean* StaticGet_previewAll()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCameraWithKey_TypeDefinitionIndex)->GetStaticField(0xD1A4);
	}
	::System::Boolean preview; // 0x18
	::System::Boolean bakeLastFrame; // 0x19
	::System::Boolean reverseLogic; // 0x1A
	::System::Boolean playOnce; // 0x1B
	::System::Boolean playLoop; // 0x1C
	::System::Boolean useStaggered; // 0x1D
	::System::Single playInterval; // 0x20
	::UnityEngine::Vector3 positionOffset; // 0x24
	::UnityEngine::Vector3 targetScale; // 0x30
	::UnityEngine::Vector3 targetAngle; // 0x3C
	::System::Boolean x; // 0x48
	::System::Boolean y; // 0x49
	::System::Boolean z; // 0x4A
	::System::Boolean directFadeOut; // 0x4B
	::System::Single fadeSpeed; // 0x4C
	::System::Single minAlpha; // 0x50
	::System::Collections::Generic::List_1<::ObjectsAnimationByCameraWithKey_CollectionWrapper*>* collectedObjects; // 0x58
	::ObjectsAnimationByCameraAudioConfig* audioConfigAsset; // 0x60
	::System::String* portalKey; // 0x68
	::System::Boolean portalEnabledOnEnter; // 0x70
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* transformAudioConfigs; // 0x78
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* driveAudioLayersByObject; // 0x80
	::System::Boolean canPlay; // 0x88
	::System::Boolean isLoop; // 0x89
	::System::Boolean isResume; // 0x8A
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>* _transformAudioRuntime; // 0x90
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>* _driveAudioRuntime; // 0x98
	::System::Boolean _portalIsInVolume; // 0xA0
	::UnityEngine::MaterialPropertyBlock* mpb; // 0xA8
	::System::Boolean finishRegister; // 0xB0
	::System::Single staggeredElapsed; // 0xB4
	::System::Double lastUpdateTime; // 0xB8
	::System::Single _effectiveStopTime; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY__CCTOR_OFFSET))();
	}

	::ObjectsAnimationByCameraAudioConfig* IObjectsAnimationByCameraAudioHost_get_AudioConfigAsset()
	{
		return ((::ObjectsAnimationByCameraAudioConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOCONFIGASSET_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_AudioConfigAsset(::ObjectsAnimationByCameraAudioConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCameraAudioConfig*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_AUDIOCONFIGASSET_OFFSET))(this, value);
	}

	::System::String* IObjectsAnimationByCameraAudioHost_get_PortalKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALKEY_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_PortalKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALKEY_OFFSET))(this, value);
	}

	::System::Boolean IObjectsAnimationByCameraAudioHost_get_PortalEnabledOnEnter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALENABLEDONENTER_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_PortalEnabledOnEnter(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALENABLEDONENTER_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* IObjectsAnimationByCameraAudioHost_get_TransformAudioConfigs()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIOCONFIGS_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_TransformAudioConfigs(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIOCONFIGS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* IObjectsAnimationByCameraAudioHost_get_DriveAudioLayersByObject()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_DriveAudioLayersByObject(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>* IObjectsAnimationByCameraAudioHost_get_TransformAudioRuntime()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIORUNTIME_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_TransformAudioRuntime(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIORUNTIME_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>* IObjectsAnimationByCameraAudioHost_get_DriveAudioRuntime()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIORUNTIME_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_DriveAudioRuntime(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIORUNTIME_OFFSET))(this, value);
	}

	::System::Boolean IObjectsAnimationByCameraAudioHost_get_PortalIsInVolume()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALISINVOLUME_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_PortalIsInVolume(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALISINVOLUME_OFFSET))(this, value);
	}

	::System::Int32 IObjectsAnimationByCameraAudioHost_get_CollectedObjectCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_COLLECTEDOBJECTCOUNT_OFFSET))(this);
	}

	::UnityEngine::GameObject* IObjectsAnimationByCameraAudioHost_GetCollectedObjectAt(::System::Int32 index)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GETCOLLECTEDOBJECTAT_OFFSET))(this, index);
	}

	::ObjectsAnimationByCameraAudioSyncScope IObjectsAnimationByCameraAudioHost_get_AudioSyncScope()
	{
		return ((::ObjectsAnimationByCameraAudioSyncScope(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOSYNCSCOPE_OFFSET))(this);
	}

	::System::Void EnsureRuntimeAudioMatchesCollectedCount()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET))(this);
	}

	::System::Void SyncAudioConfigListsToCollectedObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET))(this);
	}

	::System::Void CopyLegacyAudioDataToAsset(::ObjectsAnimationByCameraAudioConfig* target)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCameraAudioConfig*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_COPYLEGACYAUDIODATATOASSET_OFFSET))(this, target);
	}

	::System::Void ClearAudioConfigData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_CLEARAUDIOCONFIGDATA_OFFSET))(this);
	}

	::System::Int32 SyncDriveAudioEmitterPositions()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_SYNCDRIVEAUDIOEMITTERPOSITIONS_OFFSET))(this);
	}

	::System::Void UpdateTransformAudio(::System::Int32 index, ::ObjectsAnimationByCameraWithKey_CollectionWrapper* collectedObject, ::System::Single t, ::System::Single dt)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::ObjectsAnimationByCameraWithKey_CollectionWrapper*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_UPDATETRANSFORMAUDIO_OFFSET))(this, index, collectedObject, t, dt);
	}

	::System::Void ResetDriveAudioState(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_RESETDRIVEAUDIOSTATE_OFFSET))(this, index);
	}

	::System::Void ProcessDriveAudioForObject(::System::Int32 index, ::ObjectsAnimationByCameraWithKey_CollectionWrapper* collectedObject, ::System::Single sampleTime, ::System::Single animLength)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::ObjectsAnimationByCameraWithKey_CollectionWrapper*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_PROCESSDRIVEAUDIOFOROBJECT_OFFSET))(this, index, collectedObject, sampleTime, animLength);
	}

	::System::Void StopAllAudioForCollectedObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_STOPALLAUDIOFORCOLLECTEDOBJECTS_OFFSET))(this);
	}

	::System::Void InitPortalState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_INITPORTALSTATE_OFFSET))(this);
	}

	::System::Void UpdatePortalState(::System::Boolean currentlyInVolume)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_UPDATEPORTALSTATE_OFFSET))(this, currentlyInVolume);
	}

	::System::Void NotifyTransformExitBand()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_NOTIFYTRANSFORMEXITBAND_OFFSET))(this);
	}

	::System::Void CollectObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_COLLECTOBJECTS_OFFSET))(this);
	}

	::System::Void ClearObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_CLEAROBJECTS_OFFSET))(this);
	}

	::System::Void RestoreInitialState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_RESTOREINITIALSTATE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_ONUPDATE_OFFSET))(this);
	}

	::System::Void ApplyTransformByFactor(::System::Single lerpFactor)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_APPLYTRANSFORMBYFACTOR_OFFSET))(this, lerpFactor);
	}

	::System::Void ApplyTransformByFactorInternal(::ObjectsAnimationByCameraWithKey_CollectionWrapper* collectedObject, ::UnityEngine::GameObject* obj, ::System::Single lerpFactor)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCameraWithKey_CollectionWrapper*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_APPLYTRANSFORMBYFACTORINTERNAL_OFFSET))(this, collectedObject, obj, lerpFactor);
	}

	::System::Void ApplyFadeOut(::System::Single affectFactor)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_APPLYFADEOUT_OFFSET))(this, affectFactor);
	}

	::System::Single GetDeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_GETDELTATIME_OFFSET))(this);
	}

	::System::Void LocalSampleAnimation(::ObjectsAnimationByCameraWithKey_CollectionWrapper* collectedObject, ::UnityEngine::GameObject* obj, ::System::Single targetTime)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCameraWithKey_CollectionWrapper*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_LOCALSAMPLEANIMATION_OFFSET))(this, collectedObject, obj, targetTime);
	}

	::System::Single GetReferenceFrameRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_GETREFERENCEFRAMERATE_OFFSET))(this);
	}

	::System::Void Play(::System::Int32 startFrame, ::System::Int32 stopFrame, ::System::Boolean isLoop, ::System::Boolean isResume)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_PLAY_OFFSET))(this, startFrame, stopFrame, isLoop, isResume);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_STOP_OFFSET))(this);
	}

	::System::Void SampleAtFrame(::System::Single frame)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAME_OFFSET))(this, frame);
	}

	::System::Void SampleAtFrameInternal(::System::Single frame)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAMEINTERNAL_OFFSET))(this, frame);
	}

	::System::Void SampleAtFrameStaggered(::System::Single frame)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAMESTAGGERED_OFFSET))(this, frame);
	}

	::System::Void SampleAtFrameNonStaggered(::System::Single frame)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAWITHKEY_SAMPLEATFRAMENONSTAGGERED_OFFSET))(this, frame);
	}
};
