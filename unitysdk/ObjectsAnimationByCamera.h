#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Nap_VoGroupStateListener.h"
#include "unitysdk/ObjectsAnimationByCamera_AnimMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ObjectsAnimationByCamera_CollectionWrapper;
class ObjectsAnimationByCamera_DriveAudioLayer;
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

#define OBJECTSANIMATIONBYCAMERA_APPLYTRANSFORMBYFACTOR_OFFSET UNITYSDK_OFFSET(0x19E00780)
#define OBJECTSANIMATIONBYCAMERA_BUTTONSYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x19DFCB70)
#define OBJECTSANIMATIONBYCAMERA_CLEAROBJECTS_OFFSET UNITYSDK_OFFSET(0x19DFCBC0)
#define OBJECTSANIMATIONBYCAMERA_COLLECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x19DFC310)
#define OBJECTSANIMATIONBYCAMERA_ENSUREADVANCEDVOLUMECOLORSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x19DFBEE0)
#define OBJECTSANIMATIONBYCAMERA_ENSURERUNTIMEAUDIOLISTS_OFFSET UNITYSDK_OFFSET(0x19DF85F0)
#define OBJECTSANIMATIONBYCAMERA_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x19DF8590)
#define OBJECTSANIMATIONBYCAMERA_ENSURETRANSFORMFORWARDLOOP_OFFSET UNITYSDK_OFFSET(0x19DFA2F0)
#define OBJECTSANIMATIONBYCAMERA_ENSURETRANSFORMREVERSELOOP_OFFSET UNITYSDK_OFFSET(0x19DFA390)
#define OBJECTSANIMATIONBYCAMERA_EVALUATEVOLUMETRIGGERED_OFFSET UNITYSDK_OFFSET(0x19DFDF10)
#define OBJECTSANIMATIONBYCAMERA_FASTINVOLUMECHECK_OFFSET UNITYSDK_OFFSET(0x19DFDC00)
#define OBJECTSANIMATIONBYCAMERA_FORCESTOPAUDIO_OFFSET UNITYSDK_OFFSET(0x19DF92F0)
#define OBJECTSANIMATIONBYCAMERA_GENERATERANDOMVOLUMECOLOR_OFFSET UNITYSDK_OFFSET(0x19DFBC50)
#define OBJECTSANIMATIONBYCAMERA_GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x19DFE4E0)
#define OBJECTSANIMATIONBYCAMERA_GETDRIVELAYERS_OFFSET UNITYSDK_OFFSET(0x19DF8D00)
#define OBJECTSANIMATIONBYCAMERA_GETDRIVERUNTIME_OFFSET UNITYSDK_OFFSET(0x19DF8DA0)
#define OBJECTSANIMATIONBYCAMERA_GETTRANSFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x19DF8BC0)
#define OBJECTSANIMATIONBYCAMERA_GETTRANSFORMRUNTIME_OFFSET UNITYSDK_OFFSET(0x19DF8C60)
#define OBJECTSANIMATIONBYCAMERA_GETVOLUMEMATRIX_1_OFFSET UNITYSDK_OFFSET(0x19DFD480)
#define OBJECTSANIMATIONBYCAMERA_GETVOLUMEMATRIX_OFFSET UNITYSDK_OFFSET(0x19DFD3D0)
#define OBJECTSANIMATIONBYCAMERA_HASPENDINGREVERSEPLAYBACK_OFFSET UNITYSDK_OFFSET(0x19DFE3E0)
#define OBJECTSANIMATIONBYCAMERA_INITPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x19DFB6F0)
#define OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_1_OFFSET UNITYSDK_OFFSET(0x19DFDAD0)
#define OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_2_OFFSET UNITYSDK_OFFSET(0x19DFD850)
#define OBJECTSANIMATIONBYCAMERA_INVOLUMECHECK_OFFSET UNITYSDK_OFFSET(0x19DFD790)
#define OBJECTSANIMATIONBYCAMERA_LOCALSAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x19E004C0)
#define OBJECTSANIMATIONBYCAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19DFEBE0)
#define OBJECTSANIMATIONBYCAMERA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19DFE8F0)
#define OBJECTSANIMATIONBYCAMERA_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x19E00B90)
#define OBJECTSANIMATIONBYCAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19DFE580)
#define OBJECTSANIMATIONBYCAMERA_ONPLAYLOOPCHANGED_OFFSET UNITYSDK_OFFSET(0x19DFBC00)
#define OBJECTSANIMATIONBYCAMERA_ONPLAYONCECHANGED_OFFSET UNITYSDK_OFFSET(0x19DFBBB0)
#define OBJECTSANIMATIONBYCAMERA_ONTRANSFORMEXITBAND_OFFSET UNITYSDK_OFFSET(0x19DF9FF0)
#define OBJECTSANIMATIONBYCAMERA_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x19DFE530)
#define OBJECTSANIMATIONBYCAMERA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19DFEC30)
#define OBJECTSANIMATIONBYCAMERA_POSTEVENTSIMPLE_OFFSET UNITYSDK_OFFSET(0x19DF9920)
#define OBJECTSANIMATIONBYCAMERA_POSTEVENTWITHSEEKTIME_OFFSET UNITYSDK_OFFSET(0x19DF9C10)
#define OBJECTSANIMATIONBYCAMERA_PROCESSDRIVEAUDIOFOROBJECT_OFFSET UNITYSDK_OFFSET(0x19DFAC40)
#define OBJECTSANIMATIONBYCAMERA_RELEASEDRIVELAYERAUDIO_OFFSET UNITYSDK_OFFSET(0x19DFB390)
#define OBJECTSANIMATIONBYCAMERA_RELEASEPENDINGAUDIO_OFFSET UNITYSDK_OFFSET(0x19DF9790)
#define OBJECTSANIMATIONBYCAMERA_RELEASETRANSFORMLOOPS_OFFSET UNITYSDK_OFFSET(0x19DFA1C0)
#define OBJECTSANIMATIONBYCAMERA_RESETADVANCEDVOLUMERUNTIMESTATE_OFFSET UNITYSDK_OFFSET(0x19DFD350)
#define OBJECTSANIMATIONBYCAMERA_RESETDRIVEAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x19DFAA10)
#define OBJECTSANIMATIONBYCAMERA_RESETPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x19DFB4F0)
#define OBJECTSANIMATIONBYCAMERA_RESETTRANSFORMOUTSIDEPOSEINITIALIZEDFLAGS_OFFSET UNITYSDK_OFFSET(0x19DFCDA0)
#define OBJECTSANIMATIONBYCAMERA_RESOLVEORREGISTEREMITTER_OFFSET UNITYSDK_OFFSET(0x19DF8E40)
#define OBJECTSANIMATIONBYCAMERA_RESTOREINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x19DFCEC0)
#define OBJECTSANIMATIONBYCAMERA_STOPALLAUDIOFORCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x19DFB410)
#define OBJECTSANIMATIONBYCAMERA_SWITCHDRIVELAYERDIRECTION_OFFSET UNITYSDK_OFFSET(0x19DFB000)
#define OBJECTSANIMATIONBYCAMERA_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x19DF8880)
#define OBJECTSANIMATIONBYCAMERA_TRYINITDRIVEPOSEBEFORESTATETRIGGER_OFFSET UNITYSDK_OFFSET(0x19E002C0)
#define OBJECTSANIMATIONBYCAMERA_UNREGISTERRUNTIMEEMITTER_OFFSET UNITYSDK_OFFSET(0x19DF94D0)
#define OBJECTSANIMATIONBYCAMERA_UPDATEPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x19DFB8E0)
#define OBJECTSANIMATIONBYCAMERA_UPDATETRANSFORMAUDIO_OFFSET UNITYSDK_OFFSET(0x19DFA430)
#define OBJECTSANIMATIONBYCAMERA_USEADVANCEDVOLUMECHECK_OFFSET UNITYSDK_OFFSET(0x19DFDBA0)
#define OBJECTSANIMATIONBYCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E016A0)
#define OBJECTSANIMATIONBYCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E01490)

inline static constexpr unsigned int ObjectsAnimationByCamera_TypeDefinitionIndex = 80520;

class ObjectsAnimationByCamera : public ::MoleMole::Nap_VoGroupStateListener
{
public:
	static ::System::String** StaticGet__baseTriggerAnchor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCamera_TypeDefinitionIndex)->GetStaticField(0x3AC40);
	}
	static ::System::Int32* StaticGet__DitherAlpha()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCamera_TypeDefinitionIndex)->GetStaticField(0xE710);
	}
	static ::System::Boolean* StaticGet_previewAll()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObjectsAnimationByCamera_TypeDefinitionIndex)->GetStaticField(0xE714);
	}
	// static const ::System::Single TransformEndProgressThreshold; // 0x0
	// static const ::System::Single TransformMoveEpsilon; // 0x0
	// static const ::System::Single DriveTimeEpsilon; // 0x0
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
	::System::String* portalKey; // 0x88
	::System::Boolean portalEnabledOnEnter; // 0x90
	::UnityEngine::Vector3 positionOffset; // 0x94
	::UnityEngine::Vector3 targetScale; // 0xA0
	::UnityEngine::Vector3 targetAngle; // 0xAC
	::System::Boolean x; // 0xB8
	::System::Boolean y; // 0xB9
	::System::Boolean z; // 0xBA
	::System::Boolean directFadeOut; // 0xBB
	::System::Single fadeSpeed; // 0xBC
	::System::Single minAlpha; // 0xC0
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_CollectionWrapper*>* collectedObjects; // 0xC8
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* transformAudioConfigs; // 0xD0
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* driveAudioLayersByObject; // 0xD8
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioRuntimeState*>* _transformAudioRuntime; // 0xE0
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioRuntimeState*>* _driveAudioRuntime; // 0xE8
	::System::Boolean _portalIsInVolume; // 0xF0
	::System::Collections::Generic::List_1<::System::Boolean>* _advancedVolumePrevInside; // 0xF8
	::System::Boolean _advancedVolumeStateInitialized; // 0x100
	::System::Boolean _advancedVolumeTriggeredState; // 0x101
	::System::Boolean stateTriggered; // 0x102
	::System::Boolean canPlay; // 0x103
	::UnityEngine::Vector3 checkPosition; // 0x104
	::System::Boolean _preTriggerDrivePoseInitialized; // 0x110
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x118
	::System::Boolean finishRegister; // 0x120
	::System::Single staggeredElapsed; // 0x124
	::System::Double lastUpdateTime; // 0x128
	::UnityEngine::Camera* _camera; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA__CCTOR_OFFSET))();
	}

	::System::Void EnsureRuntimeAudioMatchesCollectedCount()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET))(this);
	}

	::System::Void SyncAudioConfigListsToCollectedObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET))(this);
	}

	::System::Void EnsureRuntimeAudioLists(::System::Int32 n)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ENSURERUNTIMEAUDIOLISTS_OFFSET))(this, n);
	}

	::ObjectsAnimationByCamera_TransformAudioConfig* GetTransformConfig(::System::Int32 index)
	{
		return ((::ObjectsAnimationByCamera_TransformAudioConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETTRANSFORMCONFIG_OFFSET))(this, index);
	}

	::ObjectsAnimationByCamera_TransformAudioRuntimeState* GetTransformRuntime(::System::Int32 index)
	{
		return ((::ObjectsAnimationByCamera_TransformAudioRuntimeState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETTRANSFORMRUNTIME_OFFSET))(this, index);
	}

	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayer*>* GetDriveLayers(::System::Int32 index)
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayer*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETDRIVELAYERS_OFFSET))(this, index);
	}

	::ObjectsAnimationByCamera_DriveAudioRuntimeState* GetDriveRuntime(::System::Int32 index)
	{
		return ((::ObjectsAnimationByCamera_DriveAudioRuntimeState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_GETDRIVERUNTIME_OFFSET))(this, index);
	}

	::UnityEngine::GameObject* ResolveOrRegisterEmitter(::UnityEngine::GameObject* source, ::UnityEngine::GameObject*& cachedEmitter)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RESOLVEORREGISTEREMITTER_OFFSET))(this, source, cachedEmitter);
	}

	::System::Void ForceStopAudio(::System::UInt32& pendingId)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_FORCESTOPAUDIO_OFFSET))(this, pendingId);
	}

	::System::Void UnregisterRuntimeEmitter(::UnityEngine::GameObject*& emitter)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_UNREGISTERRUNTIMEEMITTER_OFFSET))(this, emitter);
	}

	::System::Void ReleasePendingAudio(::System::UInt32& pendingId, ::System::String* stopEventName, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RELEASEPENDINGAUDIO_OFFSET))(this, pendingId, stopEventName, emitter);
	}

	::System::UInt32 PostEventSimple(::System::String* eventName, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_POSTEVENTSIMPLE_OFFSET))(this, eventName, emitter);
	}

	::System::UInt32 PostEventWithSeekTime(::System::String* eventName, ::UnityEngine::GameObject* emitter, ::System::Single seekSeconds)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_POSTEVENTWITHSEEKTIME_OFFSET))(this, eventName, emitter, seekSeconds);
	}

	::System::Void OnTransformExitBand(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ONTRANSFORMEXITBAND_OFFSET))(this, index);
	}

	::System::Void ReleaseTransformLoops(::ObjectsAnimationByCamera_TransformAudioConfig* cfg, ::ObjectsAnimationByCamera_TransformAudioRuntimeState* rt, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCamera_TransformAudioConfig*, ::ObjectsAnimationByCamera_TransformAudioRuntimeState*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RELEASETRANSFORMLOOPS_OFFSET))(this, cfg, rt, emitter);
	}

	::System::Void EnsureTransformForwardLoop(::ObjectsAnimationByCamera_TransformAudioConfig* cfg, ::ObjectsAnimationByCamera_TransformAudioRuntimeState* rt, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCamera_TransformAudioConfig*, ::ObjectsAnimationByCamera_TransformAudioRuntimeState*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ENSURETRANSFORMFORWARDLOOP_OFFSET))(this, cfg, rt, emitter);
	}

	::System::Void EnsureTransformReverseLoop(::ObjectsAnimationByCamera_TransformAudioConfig* cfg, ::ObjectsAnimationByCamera_TransformAudioRuntimeState* rt, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCamera_TransformAudioConfig*, ::ObjectsAnimationByCamera_TransformAudioRuntimeState*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_ENSURETRANSFORMREVERSELOOP_OFFSET))(this, cfg, rt, emitter);
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

	::System::Void SwitchDriveLayerDirection(::ObjectsAnimationByCamera_DriveAudioLayer* layer, ::ObjectsAnimationByCamera_DriveAudioRuntimeState* dr, ::UnityEngine::GameObject* fallback, ::System::Int32 newSign, ::System::Single sampleTime, ::System::Single animLength)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCamera_DriveAudioLayer*, ::ObjectsAnimationByCamera_DriveAudioRuntimeState*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_SWITCHDRIVELAYERDIRECTION_OFFSET))(this, layer, dr, fallback, newSign, sampleTime, animLength);
	}

	::System::Void ReleaseDriveLayerAudio(::ObjectsAnimationByCamera_DriveAudioLayer* layer, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::PVOID, ::ObjectsAnimationByCamera_DriveAudioLayer*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RELEASEDRIVELAYERAUDIO_OFFSET))(this, layer, emitter);
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

	::System::Void ResetPortalState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_RESETPORTALSTATE_OFFSET))(this);
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

	::System::Void ButtonSyncAudioConfigListsToCollectedObjects()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_BUTTONSYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET))(this);
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
