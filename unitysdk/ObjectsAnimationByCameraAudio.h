#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IObjectsAnimationByCameraAudioHost;
class ObjectsAnimationByCameraAudioConfig;
class ObjectsAnimationByCamera_DriveAudioLayer;
class ObjectsAnimationByCamera_DriveAudioLayersForObject;
class ObjectsAnimationByCamera_DriveAudioRuntimeState;
class ObjectsAnimationByCamera_TransformAudioConfig;
class ObjectsAnimationByCamera_TransformAudioRuntimeState;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define OBJECTSANIMATIONBYCAMERAAUDIO_CLEARAUDIOCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x16FEF560)
#define OBJECTSANIMATIONBYCAMERAAUDIO_CLONEDRIVEAUDIOLAYERSBYOBJECT_OFFSET UNITYSDK_OFFSET(0x16FEF450)
#define OBJECTSANIMATIONBYCAMERAAUDIO_CLONEDRIVEAUDIOLAYERSFOROBJECT_OFFSET UNITYSDK_OFFSET(0x16FF3380)
#define OBJECTSANIMATIONBYCAMERAAUDIO_CLONEDRIVEAUDIOLAYER_OFFSET UNITYSDK_OFFSET(0x16FF32E0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_CLONETRANSFORMAUDIOCONFIGS_OFFSET UNITYSDK_OFFSET(0x16FEF340)
#define OBJECTSANIMATIONBYCAMERAAUDIO_CLONETRANSFORMAUDIOCONFIG_OFFSET UNITYSDK_OFFSET(0x16FF3240)
#define OBJECTSANIMATIONBYCAMERAAUDIO_COPYLEGACYAUDIODATATOASSET_OFFSET UNITYSDK_OFFSET(0x16FEED60)
#define OBJECTSANIMATIONBYCAMERAAUDIO_ENSURERUNTIMEAUDIOLISTS_OFFSET UNITYSDK_OFFSET(0x16FEDB00)
#define OBJECTSANIMATIONBYCAMERAAUDIO_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x16FED9F0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_ENSURETRANSFORMFORWARDLOOP_OFFSET UNITYSDK_OFFSET(0x16FF0A70)
#define OBJECTSANIMATIONBYCAMERAAUDIO_ENSURETRANSFORMREVERSELOOP_OFFSET UNITYSDK_OFFSET(0x16FF0B10)
#define OBJECTSANIMATIONBYCAMERAAUDIO_FORCESTOPAUDIO_OFFSET UNITYSDK_OFFSET(0x16FF3550)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETACTIVEAUDIOCONFIGASSET_OFFSET UNITYSDK_OFFSET(0x16FF2DD0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETDRIVEAUDIOCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x16FEF870)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETDRIVELAYERS_OFFSET UNITYSDK_OFFSET(0x16FF0E30)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETDRIVERUNTIME_OFFSET UNITYSDK_OFFSET(0x16FF1210)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETPORTALENABLEDONENTER_OFFSET UNITYSDK_OFFSET(0x16FF2540)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETPORTALKEY_OFFSET UNITYSDK_OFFSET(0x16FF2330)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETTRANSFORMAUDIOCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x16FF3030)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETTRANSFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x16FF0130)
#define OBJECTSANIMATIONBYCAMERAAUDIO_GETTRANSFORMRUNTIME_OFFSET UNITYSDK_OFFSET(0x16FEFA80)
#define OBJECTSANIMATIONBYCAMERAAUDIO_INITPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x16FF20A0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_ISUSINGAUDIOCONFIGASSET_OFFSET UNITYSDK_OFFSET(0x16FF2ED0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_NOTIFYTRANSFORMEXITBAND_OFFSET UNITYSDK_OFFSET(0x16FF2C80)
#define OBJECTSANIMATIONBYCAMERAAUDIO_ONTRANSFORMEXITBAND_OFFSET UNITYSDK_OFFSET(0x16FF1F80)
#define OBJECTSANIMATIONBYCAMERAAUDIO_POSTEVENTSIMPLE_OFFSET UNITYSDK_OFFSET(0x16FF0680)
#define OBJECTSANIMATIONBYCAMERAAUDIO_POSTEVENTWITHSEEKTIME_OFFSET UNITYSDK_OFFSET(0x16FF38C0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_PROCESSDRIVEAUDIOFOROBJECT_OFFSET UNITYSDK_OFFSET(0x16FF1340)
#define OBJECTSANIMATIONBYCAMERAAUDIO_REGISTERSTATICDRIVEEMITTER_OFFSET UNITYSDK_OFFSET(0x16FF40E0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_RELEASEDRIVELAYERAUDIO_OFFSET UNITYSDK_OFFSET(0x16FF0ED0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_RELEASEPENDINGAUDIO_OFFSET UNITYSDK_OFFSET(0x16FF3730)
#define OBJECTSANIMATIONBYCAMERAAUDIO_RELEASETRANSFORMLOOPS_OFFSET UNITYSDK_OFFSET(0x16FF0970)
#define OBJECTSANIMATIONBYCAMERAAUDIO_RESETDRIVEAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x16FF0BB0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_RESETPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x16FF1C50)
#define OBJECTSANIMATIONBYCAMERAAUDIO_RESOLVEDRIVELAYEREMITTER_OFFSET UNITYSDK_OFFSET(0x16FF3CB0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_RESOLVEORREGISTEREMITTER_OFFSET UNITYSDK_OFFSET(0x16FF01D0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_STOPALLAUDIOFORCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x16FF1990)
#define OBJECTSANIMATIONBYCAMERAAUDIO_SWITCHDRIVELAYERDIRECTION_OFFSET UNITYSDK_OFFSET(0x16FF16F0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x16FEE0C0)
#define OBJECTSANIMATIONBYCAMERAAUDIO_SYNCDRIVEAUDIOCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x16FEE900)
#define OBJECTSANIMATIONBYCAMERAAUDIO_SYNCDRIVEAUDIOEMITTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x16FEF120)
#define OBJECTSANIMATIONBYCAMERAAUDIO_SYNCTRANSFORMAUDIOCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x16FEE530)
#define OBJECTSANIMATIONBYCAMERAAUDIO_UNREGISTERRUNTIMEEMITTER_OFFSET UNITYSDK_OFFSET(0x16FF0F50)
#define OBJECTSANIMATIONBYCAMERAAUDIO_UPDATEPORTALSTATE_OFFSET UNITYSDK_OFFSET(0x16FF2760)
#define OBJECTSANIMATIONBYCAMERAAUDIO_UPDATETRANSFORMAUDIO_OFFSET UNITYSDK_OFFSET(0x16FEFBB0)

inline static constexpr unsigned int ObjectsAnimationByCameraAudio_TypeDefinitionIndex = 61583;

class ObjectsAnimationByCameraAudio : public ::System::Object
{
public:
	// static const ::System::Single TransformEndProgressThreshold; // 0x0
	// static const ::System::Single TransformMoveEpsilon; // 0x0
	// static const ::System::Single DriveTimeEpsilon; // 0x0

	static ::System::Void EnsureRuntimeAudioMatchesCollectedCount(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_ENSURERUNTIMEAUDIOMATCHESCOLLECTEDCOUNT_OFFSET))(host);
	}

	static ::System::Void SyncAudioConfigListsToCollectedObjects(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_SYNCAUDIOCONFIGLISTSTOCOLLECTEDOBJECTS_OFFSET))(host);
	}

	static ::System::Void SyncTransformAudioConfigList(::IObjectsAnimationByCameraAudioHost* host, ::ObjectsAnimationByCameraAudioConfig* asset, ::System::Int32 n)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::ObjectsAnimationByCameraAudioConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_SYNCTRANSFORMAUDIOCONFIGLIST_OFFSET))(host, asset, n);
	}

	static ::System::Void SyncDriveAudioConfigList(::IObjectsAnimationByCameraAudioHost* host, ::ObjectsAnimationByCameraAudioConfig* asset, ::System::Int32 n)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::ObjectsAnimationByCameraAudioConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_SYNCDRIVEAUDIOCONFIGLIST_OFFSET))(host, asset, n);
	}

	static ::System::Void CopyLegacyAudioDataToAsset(::IObjectsAnimationByCameraAudioHost* host, ::ObjectsAnimationByCameraAudioConfig* target)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::ObjectsAnimationByCameraAudioConfig*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_COPYLEGACYAUDIODATATOASSET_OFFSET))(host, target);
	}

	static ::System::Void ClearAudioConfigData(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_CLEARAUDIOCONFIGDATA_OFFSET))(host);
	}

	static ::System::Int32 SyncDriveAudioEmitterPositions(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Int32(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_SYNCDRIVEAUDIOEMITTERPOSITIONS_OFFSET))(host);
	}

	static ::ObjectsAnimationByCamera_TransformAudioRuntimeState* GetTransformRuntime(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index)
	{
		return ((::ObjectsAnimationByCamera_TransformAudioRuntimeState*(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETTRANSFORMRUNTIME_OFFSET))(host, index);
	}

	static ::System::Void UpdateTransformAudio(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index, ::System::Single t, ::System::Single dt)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_UPDATETRANSFORMAUDIO_OFFSET))(host, index, t, dt);
	}

	static ::System::Void ResetDriveAudioState(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_RESETDRIVEAUDIOSTATE_OFFSET))(host, index);
	}

	static ::System::Void ProcessDriveAudioForObject(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index, ::System::Single sampleTime, ::System::Single animLength)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_PROCESSDRIVEAUDIOFOROBJECT_OFFSET))(host, index, sampleTime, animLength);
	}

	static ::System::Void StopAllAudioForCollectedObjects(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_STOPALLAUDIOFORCOLLECTEDOBJECTS_OFFSET))(host);
	}

	static ::System::Void InitPortalState(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_INITPORTALSTATE_OFFSET))(host);
	}

	static ::System::Void UpdatePortalState(::IObjectsAnimationByCameraAudioHost* host, ::System::Boolean currentlyInVolume)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_UPDATEPORTALSTATE_OFFSET))(host, currentlyInVolume);
	}

	static ::System::Void OnTransformExitBand(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_ONTRANSFORMEXITBAND_OFFSET))(host, index);
	}

	static ::System::Void NotifyTransformExitBand(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_NOTIFYTRANSFORMEXITBAND_OFFSET))(host);
	}

	static ::ObjectsAnimationByCameraAudioConfig* GetActiveAudioConfigAsset(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::ObjectsAnimationByCameraAudioConfig*(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETACTIVEAUDIOCONFIGASSET_OFFSET))(host);
	}

	static ::System::Boolean IsUsingAudioConfigAsset(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Boolean(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_ISUSINGAUDIOCONFIGASSET_OFFSET))(host);
	}

	static ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* GetTransformAudioConfigList(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>*(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETTRANSFORMAUDIOCONFIGLIST_OFFSET))(host);
	}

	static ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* GetDriveAudioConfigList(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>*(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETDRIVEAUDIOCONFIGLIST_OFFSET))(host);
	}

	static ::System::String* GetPortalKey(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::String*(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETPORTALKEY_OFFSET))(host);
	}

	static ::System::Boolean GetPortalEnabledOnEnter(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Boolean(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETPORTALENABLEDONENTER_OFFSET))(host);
	}

	static ::ObjectsAnimationByCamera_TransformAudioConfig* CloneTransformAudioConfig(::ObjectsAnimationByCamera_TransformAudioConfig* source)
	{
		return ((::ObjectsAnimationByCamera_TransformAudioConfig*(*)(::ObjectsAnimationByCamera_TransformAudioConfig*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_CLONETRANSFORMAUDIOCONFIG_OFFSET))(source);
	}

	static ::ObjectsAnimationByCamera_DriveAudioLayer* CloneDriveAudioLayer(::ObjectsAnimationByCamera_DriveAudioLayer* source)
	{
		return ((::ObjectsAnimationByCamera_DriveAudioLayer*(*)(::ObjectsAnimationByCamera_DriveAudioLayer*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_CLONEDRIVEAUDIOLAYER_OFFSET))(source);
	}

	static ::ObjectsAnimationByCamera_DriveAudioLayersForObject* CloneDriveAudioLayersForObject(::ObjectsAnimationByCamera_DriveAudioLayersForObject* source)
	{
		return ((::ObjectsAnimationByCamera_DriveAudioLayersForObject*(*)(::ObjectsAnimationByCamera_DriveAudioLayersForObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_CLONEDRIVEAUDIOLAYERSFOROBJECT_OFFSET))(source);
	}

	static ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* CloneTransformAudioConfigs(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>* source)
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>*(*)(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_TransformAudioConfig*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_CLONETRANSFORMAUDIOCONFIGS_OFFSET))(source);
	}

	static ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* CloneDriveAudioLayersByObject(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>* source)
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>*(*)(::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayersForObject*>*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_CLONEDRIVEAUDIOLAYERSBYOBJECT_OFFSET))(source);
	}

	static ::System::Void EnsureRuntimeAudioLists(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 n)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_ENSURERUNTIMEAUDIOLISTS_OFFSET))(host, n);
	}

	static ::ObjectsAnimationByCamera_TransformAudioConfig* GetTransformConfig(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index)
	{
		return ((::ObjectsAnimationByCamera_TransformAudioConfig*(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETTRANSFORMCONFIG_OFFSET))(host, index);
	}

	static ::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayer*>* GetDriveLayers(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index)
	{
		return ((::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayer*>*(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETDRIVELAYERS_OFFSET))(host, index);
	}

	static ::ObjectsAnimationByCamera_DriveAudioRuntimeState* GetDriveRuntime(::IObjectsAnimationByCameraAudioHost* host, ::System::Int32 index)
	{
		return ((::ObjectsAnimationByCamera_DriveAudioRuntimeState*(*)(::IObjectsAnimationByCameraAudioHost*, ::System::Int32))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_GETDRIVERUNTIME_OFFSET))(host, index);
	}

	static ::UnityEngine::GameObject* ResolveOrRegisterEmitter(::UnityEngine::GameObject* source, ::UnityEngine::GameObject*& cachedEmitter)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_RESOLVEORREGISTEREMITTER_OFFSET))(source, cachedEmitter);
	}

	static ::System::Void ForceStopAudio(::System::UInt32& pendingId)
	{
		return ((::System::Void(*)(::System::UInt32&))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_FORCESTOPAUDIO_OFFSET))(pendingId);
	}

	static ::System::Void UnregisterRuntimeEmitter(::UnityEngine::GameObject*& emitter)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_UNREGISTERRUNTIMEEMITTER_OFFSET))(emitter);
	}

	static ::System::Void ReleasePendingAudio(::System::UInt32& pendingId, ::System::String* stopEventName, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::System::UInt32&, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_RELEASEPENDINGAUDIO_OFFSET))(pendingId, stopEventName, emitter);
	}

	static ::System::UInt32 PostEventSimple(::System::String* eventName, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_POSTEVENTSIMPLE_OFFSET))(eventName, emitter);
	}

	static ::System::UInt32 PostEventWithSeekTime(::System::String* eventName, ::UnityEngine::GameObject* emitter, ::System::Single seekSeconds)
	{
		return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_POSTEVENTWITHSEEKTIME_OFFSET))(eventName, emitter, seekSeconds);
	}

	static ::System::Void ReleaseTransformLoops(::ObjectsAnimationByCamera_TransformAudioConfig* cfg, ::ObjectsAnimationByCamera_TransformAudioRuntimeState* rt, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::ObjectsAnimationByCamera_TransformAudioConfig*, ::ObjectsAnimationByCamera_TransformAudioRuntimeState*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_RELEASETRANSFORMLOOPS_OFFSET))(cfg, rt, emitter);
	}

	static ::System::Void EnsureTransformForwardLoop(::ObjectsAnimationByCamera_TransformAudioConfig* cfg, ::ObjectsAnimationByCamera_TransformAudioRuntimeState* rt, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::ObjectsAnimationByCamera_TransformAudioConfig*, ::ObjectsAnimationByCamera_TransformAudioRuntimeState*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_ENSURETRANSFORMFORWARDLOOP_OFFSET))(cfg, rt, emitter);
	}

	static ::System::Void EnsureTransformReverseLoop(::ObjectsAnimationByCamera_TransformAudioConfig* cfg, ::ObjectsAnimationByCamera_TransformAudioRuntimeState* rt, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::ObjectsAnimationByCamera_TransformAudioConfig*, ::ObjectsAnimationByCamera_TransformAudioRuntimeState*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_ENSURETRANSFORMREVERSELOOP_OFFSET))(cfg, rt, emitter);
	}

	static ::System::Void SwitchDriveLayerDirection(::IObjectsAnimationByCameraAudioHost* host, ::ObjectsAnimationByCamera_DriveAudioLayer* layer, ::UnityEngine::GameObject* fallback, ::System::Int32 newSign, ::System::Single sampleTime, ::System::Single animLength)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*, ::ObjectsAnimationByCamera_DriveAudioLayer*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_SWITCHDRIVELAYERDIRECTION_OFFSET))(host, layer, fallback, newSign, sampleTime, animLength);
	}

	static ::System::Void ReleaseDriveLayerAudio(::ObjectsAnimationByCamera_DriveAudioLayer* layer, ::UnityEngine::GameObject* emitter)
	{
		return ((::System::Void(*)(::ObjectsAnimationByCamera_DriveAudioLayer*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_RELEASEDRIVELAYERAUDIO_OFFSET))(layer, emitter);
	}

	static ::UnityEngine::GameObject* RegisterStaticDriveEmitter(::UnityEngine::Vector3 worldPosition, ::UnityEngine::GameObject* fallback)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_REGISTERSTATICDRIVEEMITTER_OFFSET))(worldPosition, fallback);
	}

	static ::UnityEngine::GameObject* ResolveDriveLayerEmitter(::IObjectsAnimationByCameraAudioHost* host, ::ObjectsAnimationByCamera_DriveAudioLayer* layer, ::UnityEngine::GameObject* fallback)
	{
		return ((::UnityEngine::GameObject*(*)(::IObjectsAnimationByCameraAudioHost*, ::ObjectsAnimationByCamera_DriveAudioLayer*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_RESOLVEDRIVELAYEREMITTER_OFFSET))(host, layer, fallback);
	}

	static ::System::Void ResetPortalState(::IObjectsAnimationByCameraAudioHost* host)
	{
		return ((::System::Void(*)(::IObjectsAnimationByCameraAudioHost*))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERAAUDIO_RESETPORTALSTATE_OFFSET))(host);
	}
};
