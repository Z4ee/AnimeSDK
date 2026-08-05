#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Nap_VoGroupStateListener.h"
#include "unitysdk/ObjectsAnimationByCameraAudioSyncScope.h"
#include "unitysdk/ObjectsAnimationByCamera_AnimMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ObjectsAnimationByCameraAudioConfig;
class ObjectsAnimationByCamera_CollectionWrapper;
class ObjectsAnimationByCamera_DriveAudioLayersForObject;
class ObjectsAnimationByCamera_DriveAudioRuntimeState;
class ObjectsAnimationByCamera_TransformAudioConfig;
class ObjectsAnimationByCamera_TransformAudioRuntimeState;
class ObjectsAnimationByCamera_VolumeSettings;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define OBJECTSANIMATIONBYCAMERA_APPLYTRANSFORMBYFACTOR_OFFSET UNITYSDK_OFFSET(0xF655510)
#define OBJECTSANIMATIONBYCAMERA_CLEARAUDIOCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xF650270)
#define OBJECTSANIMATIONBYCAMERA_CLEAROBJECTS_OFFSET UNITYSDK_OFFSET(0xF651630)
#define OBJECTSANIMATIONBYCAMERA_COLLECTOBJECTS_OFFSET UNITYSDK_OFFSET(0xF650DB0)
#define OBJECTSANIMATIONBYCAMERA_COPYLEGACYAUDIODATATOASSET_OFFSET UNITYSDK_OFFSET(0xF650220)
#define OBJECTSANIMATIONBYCAMERA_ENSUREADVANCEDVOLUMECOLORSINITIALIZED_OFFSET UNITYSDK_OFFSET(0xF650980)
#define OBJECTSANIMATIONBYCAMERA_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0xF650180)
#define OBJECTSANIMATIONBYCAMERA_EVALUATEVOLUMETRIGGERED_OFFSET UNITYSDK_OFFSET(0xF652A40)
#define OBJECTSANIMATIONBYCAMERA_FASTINVOLUMECHECK_OFFSET UNITYSDK_OFFSET(0xF652730)
#define OBJECTSANIMATIONBYCAMERA_GENERATERANDOMVOLUMECOLOR_OFFSET UNITYSDK_OFFSET(0xF6506D0)
#define OBJECTSANIMATIONBYCAMERA_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0xF653010)
#define OBJECTSANIMATIONBYCAMERA_GETTRANSFORMRUNTIME_OFFSET UNITYSDK_OFFSET(0xF650310)
#define OBJECTSANIMATIONBYCAMERA_GETVOLUMEMATRIX_1_OFFSET UNITYSDK_OFFSET(0xF651FC0)
#define OBJECTSANIMATIONBYCAMERA_GETVOLUMEMATRIX_OFFSET UNITYSDK_OFFSET(0xF651F10)
#define OBJECTSANIMATIONBYCAMERA_HASPENDINGREVERSEPLAYBACK_OFFSET UNITYSDK_OFFSET(0xF652F10)
#define OBJECTSANIMATIONBYCAMERA_INITPORTALSTATE_OFFSET UNITYSDK_OFFSET(0xF650540)
#define OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_1_OFFSET UNITYSDK_OFFSET(0xF652600)
#define OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_2_OFFSET UNITYSDK_OFFSET(0xF652380)
#define OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_OFFSET UNITYSDK_OFFSET(0xF6522C0)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GETCOLLECTEDOBJECTAT_OFFSET UNITYSDK_OFFSET(0xF650080)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOCONFIGASSET_OFFSET UNITYSDK_OFFSET(0xF64FB20)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOSYNCSCOPE_OFFSET UNITYSDK_OFFSET(0xF650120)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_COLLECTEDOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0xF650020)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET UNITYSDK_OFFSET(0xF64FDA0)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0xF64FEE0)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALENABLEDONENTER_OFFSET UNITYSDK_OFFSET(0xF64FC60)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALISINVOLUME_OFFSET UNITYSDK_OFFSET(0xF64FF80)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALKEY_OFFSET UNITYSDK_OFFSET(0xF64FBC0)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIOCONFIGS_OFFSET UNITYSDK_OFFSET(0xF64FD00)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0xF64FE40)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_AUDIOCONFIGASSET_OFFSET UNITYSDK_OFFSET(0xF64FB70)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET UNITYSDK_OFFSET(0xF64FDF0)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0xF64FF30)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALENABLEDONENTER_OFFSET UNITYSDK_OFFSET(0xF64FCB0)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALISINVOLUME_OFFSET UNITYSDK_OFFSET(0xF64FFD0)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALKEY_OFFSET UNITYSDK_OFFSET(0xF64FC10)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIOCONFIGS_OFFSET UNITYSDK_OFFSET(0xF64FD50)
#define OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIORUNTIME_OFFSET UNITYSDK_OFFSET(0xF64FE90)
#define OBJECTSANIMATIONBYCAMERA_LOCALSAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0xF655250)
#define OBJECTSANIMATIONBYCAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF6537A0)
#define OBJECTSANIMATIONBYCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF653460)
#define OBJECTSANIMATIONBYCAMERA_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xF655940)
#define OBJECTSANIMATIONBYCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF6530B0)
#define OBJECTSANIMATIONBYCAMERA_ONPLAYLOOPCHANGED_OFFSET UNITYSDK_OFFSET(0xF650680)
#define OBJECTSANIMATIONBYCAMERA_ONPLAYONCECHANGED_OFFSET UNITYSDK_OFFSET(0xF650630)
#define OBJECTSANIMATIONBYCAMERA_ONTRANSFORMEXITBAND_OFFSET UNITYSDK_OFFSET(0xF6505E0)
#define OBJECTSANIMATIONBYCAMERA_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xF653060)
#define OBJECTSANIMATIONBYCAMERA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xF653800)
#define OBJECTSANIMATIONBYCAMERA_PROCESSDRIVEAUDIOFOROBJECT_OFFSET UNITYSDK_OFFSET(0xF650450)
#define OBJECTSANIMATIONBYCAMERA_RESETADVANCEDVOLUMERUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0xF651E90)
#define OBJECTSANIMATIONBYCAMERA_RESETDRIVEAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0xF650400)
#define OBJECTSANIMATIONBYCAMERA_RESETTRANSFORMOUTSIDEPOSEINITIALIZEDFLAGS_OFFSET UNITYSDK_OFFSET(0xF651890)
#define OBJECTSANIMATIONBYCAMERA_RESTOREINITIALSTATE_OFFSET UNITYSDK_OFFSET(0xF6519B0)
#define OBJECTSANIMATIONBYCAMERA_STOPALLAUDIOFORCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0xF6504F0)
#define OBJECTSANIMATIONBYCAMERA_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0xF6501D0)
#define OBJECTSANIMATIONBYCAMERA_SYNCDRIVEAUDIOEMITTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0xF6502C0)
#define OBJECTSANIMATIONBYCAMERA_TRYINITDRIVEPOSEBEFORESTATETRIGGER_OFFSET UNITYSDK_OFFSET(0xF655050)
#define OBJECTSANIMATIONBYCAMERA_UPDATEPORTALSTATE_OFFSET UNITYSDK_OFFSET(0xF650590)
#define OBJECTSANIMATIONBYCAMERA_UPDATETRANSFORMAUDIO_OFFSET UNITYSDK_OFFSET(0xF650360)
#define OBJECTSANIMATIONBYCAMERA_USEADVANCEDVOLUMECHECK_OFFSET UNITYSDK_OFFSET(0xF6526D0)
#define OBJECTSANIMATIONBYCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF656450)
#define OBJECTSANIMATIONBYCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xF656240)

inline static constexpr unsigned int ObjectsAnimationByCamera_TypeDefinitionIndex = 75777;

class ObjectsAnimationByCamera : public ::MoleMole::Nap_VoGroupStateListener
{
public:
	static ::System::String** StaticGet__baseTriggerAnchor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCamera_TypeDefinitionIndex)->GetStaticField(0x3D9F0);
	}
	static ::System::Int32* StaticGet__DitherAlpha()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCamera_TypeDefinitionIndex)->GetStaticField(0xE660);
	}
	static ::System::Boolean* StaticGet_previewAll()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCamera_TypeDefinitionIndex)->GetStaticField(0xE664);
	}
	::System::Boolean preview; // 0x38
	::System::Boolean bakeLastFrame; // 0x39
	::ObjectsAnimationByCamera_AnimMode animMode; // 0x3C
	::System::Boolean reverseLogic; // 0x40
	::System::Single affectRadius; // 0x44
	::System::Single fadeDistance; // 0x48
	::System::Boolean useCameraInRuntime; // 0x4C
	::System::Boolean pureGraphTrigger; // 0x4D
	::System::Boolean playOnce; // 0x4E
	::System::Boolean playLoop; // 0x4F
	::System::Boolean reverseOnExit; // 0x50
	::System::Boolean useStaggered; // 0x51
	::System::Single playInterval; // 0x54
	::UnityEngine::Vector3 volumeCenter; // 0x58
	::UnityEngine::Vector3 volumeRotation; // 0x64
	::UnityEngine::Vector3 volumeSize; // 0x70
	::System::Boolean useAdvancedVolumes; // 0x7C
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_VolumeSettings*>* advancedVolumes; // 0x80
	::ObjectsAnimationByCameraAudioConfig* audioConfigAsset; // 0x88
	::System::String* portalKey; // 0x90
	::System::Boolean portalEnabledOnEnter; // 0x98
	::UnityEngine::Vector3 positionOffset; // 0x9C
	::UnityEngine::Vector3 targetScale; // 0xA8
	::UnityEngine::Vector3 targetAngle; // 0xB4
	::System::Boolean x; // 0xC0
	::System::Boolean y; // 0xC1
	::System::Boolean z; // 0xC2
	::System::Boolean directFadeOut; // 0xC3
	::System::Single fadeSpeed; // 0xC4
	::System::Single minAlpha; // 0xC8
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_CollectionWrapper*>* collectedObjects; // 0xD0
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* transformAudioConfigs; // 0xD8
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* driveAudioLayersByObject; // 0xE0
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>* _transformAudioRuntime; // 0xE8
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>* _driveAudioRuntime; // 0xF0
	::System::Boolean _portalIsInVolume; // 0xF8
	::System::Collections::Generic::List_1<::System::Boolean>* _advancedVolumePrevInside; // 0x100
	::System::Boolean _advancedVolumeStateInitialized; // 0x108
	::System::Boolean _advancedVolumeTriggeredState; // 0x109
	::System::Boolean stateTriggered; // 0x10A
	::System::Boolean canPlay; // 0x10B
	::UnityEngine::Vector3 checkPosition; // 0x10C
	::System::Boolean _preTriggerDrivePoseInitialized; // 0x118
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x120
	::System::Boolean finishRegister; // 0x128
	::System::Single staggeredElapsed; // 0x12C
	::System::Double lastUpdateTime; // 0x130
	::UnityEngine::Camera* _camera; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA__CCTOR_OFFSET))();
	}

	::ObjectsAnimationByCameraAudioConfig* IObjectsAnimationByCameraAudioHost_get_AudioConfigAsset()
	{
		return ((::ObjectsAnimationByCameraAudioConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOCONFIGASSET_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_AudioConfigAsset(::ObjectsAnimationByCameraAudioConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCameraAudioConfig*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_AUDIOCONFIGASSET_OFFSET))(this, value);
	}

	::System::String* IObjectsAnimationByCameraAudioHost_get_PortalKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALKEY_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_PortalKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALKEY_OFFSET))(this, value);
	}

	::System::Boolean IObjectsAnimationByCameraAudioHost_get_PortalEnabledOnEnter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALENABLEDONENTER_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_PortalEnabledOnEnter(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALENABLEDONENTER_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* IObjectsAnimationByCameraAudioHost_get_TransformAudioConfigs()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIOCONFIGS_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_TransformAudioConfigs(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIOCONFIGS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* IObjectsAnimationByCameraAudioHost_get_DriveAudioLayersByObject()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_DriveAudioLayersByObject(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIOLAYERSBYOBJECT_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>* IObjectsAnimationByCameraAudioHost_get_TransformAudioRuntime()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_TRANSFORMAUDIORUNTIME_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_TransformAudioRuntime(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_TRANSFORMAUDIORUNTIME_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>* IObjectsAnimationByCameraAudioHost_get_DriveAudioRuntime()
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_DRIVEAUDIORUNTIME_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_DriveAudioRuntime(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_DRIVEAUDIORUNTIME_OFFSET))(this, value);
	}

	::System::Boolean IObjectsAnimationByCameraAudioHost_get_PortalIsInVolume()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_PORTALISINVOLUME_OFFSET))(this);
	}

	::System::Void IObjectsAnimationByCameraAudioHost_set_PortalIsInVolume(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_SET_PORTALISINVOLUME_OFFSET))(this, value);
	}

	::System::Int32 IObjectsAnimationByCameraAudioHost_get_CollectedObjectCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_COLLECTEDOBJECTCOUNT_OFFSET))(this);
	}

	::UnityEngine::GameObject* IObjectsAnimationByCameraAudioHost_GetCollectedObjectAt(::System::Int32 index)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GETCOLLECTEDOBJECTAT_OFFSET))(this, index);
	}

	::ObjectsAnimationByCameraAudioSyncScope IObjectsAnimationByCameraAudioHost_get_AudioSyncScope()
	{
		return ((::ObjectsAnimationByCameraAudioSyncScope(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_IOBJECTSANIMATIONBYCAMERAAUDIOHOST_GET_AUDIOSYNCSCOPE_OFFSET))(this);
	}

	::System::Void EnsureRuntimeAudioMatchesCollectedCount()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET))(this);
	}

	::System::Void SyncAudioConfigListsToCollectedObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET))(this);
	}

	::System::Void CopyLegacyAudioDataToAsset(::ObjectsAnimationByCameraAudioConfig* target)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCameraAudioConfig*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_COPYLEGACYAUDIODATATOASSET_OFFSET))(this, target);
	}

	::System::Void ClearAudioConfigData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_CLEARAUDIOCONFIGDATA_OFFSET))(this);
	}

	::System::Int32 SyncDriveAudioEmitterPositions()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_SYNCDRIVEAUDIOEMITTERPOSITIONS_OFFSET))(this);
	}

	::ObjectsAnimationByCamera_TransformAudioRuntimeState* GetTransformRuntime(::System::Int32 index)
	{
		return ((::ObjectsAnimationByCamera_TransformAudioRuntimeState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETTRANSFORMRUNTIME_OFFSET))(this, index);
	}

	::System::Void UpdateTransformAudio(::System::Int32 index, ::ObjectsAnimationByCamera_CollectionWrapper* o, ::System::Single t, ::System::Single dt)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::ObjectsAnimationByCamera_CollectionWrapper*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_UPDATETRANSFORMAUDIO_OFFSET))(this, index, o, t, dt);
	}

	::System::Void ResetDriveAudioState(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RESETDRIVEAUDIOSTATE_OFFSET))(this, index);
	}

	::System::Void ProcessDriveAudioForObject(::System::Int32 index, ::ObjectsAnimationByCamera_CollectionWrapper* o, ::System::Single sampleTime, ::System::Single animLength)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::ObjectsAnimationByCamera_CollectionWrapper*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_PROCESSDRIVEAUDIOFOROBJECT_OFFSET))(this, index, o, sampleTime, animLength);
	}

	::System::Void StopAllAudioForCollectedObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_STOPALLAUDIOFORCOLLECTEDOBJECTS_OFFSET))(this);
	}

	::System::Void InitPortalState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_INITPORTALSTATE_OFFSET))(this);
	}

	::System::Void UpdatePortalState(::System::Boolean currentlyInVolume)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_UPDATEPORTALSTATE_OFFSET))(this, currentlyInVolume);
	}

	::System::Void OnTransformExitBand(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONTRANSFORMEXITBAND_OFFSET))(this, index);
	}

	::System::Void OnPlayOnceChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONPLAYONCECHANGED_OFFSET))(this);
	}

	::System::Void OnPlayLoopChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONPLAYLOOPCHANGED_OFFSET))(this);
	}

	static ::UnityEngine::Color GenerateRandomVolumeColor()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GENERATERANDOMVOLUMECOLOR_OFFSET))();
	}

	::System::Void EnsureAdvancedVolumeColorsInitialized()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ENSUREADVANCEDVOLUMECOLORSINITIALIZED_OFFSET))(this);
	}

	::System::Void CollectObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_COLLECTOBJECTS_OFFSET))(this);
	}

	::System::Void ClearObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_CLEAROBJECTS_OFFSET))(this);
	}

	::System::Void RestoreInitialState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RESTOREINITIALSTATE_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 GetVolumeMatrix()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETVOLUMEMATRIX_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 GetVolumeMatrix_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 rotation)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETVOLUMEMATRIX_1_OFFSET))(this, center, rotation);
	}

	::System::Boolean InVolumeCheck(::UnityEngine::Vector3 camPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_OFFSET))(this, camPos);
	}

	::System::Boolean InVolumeCheck_1(::UnityEngine::Vector3 camPos, ::ObjectsAnimationByCamera_VolumeSettings* volume)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::ObjectsAnimationByCamera_VolumeSettings*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_1_OFFSET))(this, camPos, volume);
	}

	::System::Boolean InVolumeCheck_2(::UnityEngine::Vector3 camPos, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 rotation, ::UnityEngine::Vector3 size)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_2_OFFSET))(this, camPos, center, rotation, size);
	}

	::System::Boolean UseAdvancedVolumeCheck()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_USEADVANCEDVOLUMECHECK_OFFSET))(this);
	}

	::System::Boolean FastInVolumeCheck(::UnityEngine::Vector3 camPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_FASTINVOLUMECHECK_OFFSET))(this, camPos);
	}

	::System::Boolean EvaluateVolumeTriggered(::UnityEngine::Vector3 camPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_EVALUATEVOLUMETRIGGERED_OFFSET))(this, camPos);
	}

	::System::Boolean HasPendingReversePlayback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_HASPENDINGREVERSEPLAYBACK_OFFSET))(this);
	}

	::System::Void ResetAdvancedVolumeRuntimeState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RESETADVANCEDVOLUMERUNTIMESTATE_OFFSET))(this);
	}

	::System::Void ResetTransformOutsidePoseInitializedFlags()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RESETTRANSFORMOUTSIDEPOSEINITIALIZEDFLAGS_OFFSET))(this);
	}

	::System::Single GetDeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETDELTATIME_OFFSET))(this);
	}

	::System::Void OnTriggered()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONTRIGGERED_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONUPDATE_OFFSET))(this);
	}

	::System::Void ApplyTransformByFactor(::ObjectsAnimationByCamera_CollectionWrapper* collectedObject, ::UnityEngine::GameObject* obj, ::System::Single lerpFactor)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCamera_CollectionWrapper*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_APPLYTRANSFORMBYFACTOR_OFFSET))(this, collectedObject, obj, lerpFactor);
	}

	::System::Void TryInitDrivePoseBeforeStateTrigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_TRYINITDRIVEPOSEBEFORESTATETRIGGER_OFFSET))(this);
	}

	::System::Void LocalSampleAnimation(::ObjectsAnimationByCamera_CollectionWrapper* collectedObject, ::UnityEngine::GameObject* obj, ::System::Single targetTime)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCamera_CollectionWrapper*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_LOCALSAMPLEANIMATION_OFFSET))(this, collectedObject, obj, targetTime);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
