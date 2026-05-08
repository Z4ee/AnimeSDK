#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace NapStreaming { class NapStreamingData; }
namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define NAPSTREAMING_NAPSTREAMINGMANAGER_ADDSTREAMINGPOSPROVIDER_OFFSET UNITYSDK_OFFSET(0x1150F320)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_APPLYSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0x1150E8E0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1150E4E0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_CHECKISSTREAMINGDONE_OFFSET UNITYSDK_OFFSET(0x11511A20)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x11510FE0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_FORCEUPDATESTREAMING_OFFSET UNITYSDK_OFFSET(0x1150FE10)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1150E4A0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0x1150E410)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GET_ININITLOADING_OFFSET UNITYSDK_OFFSET(0x115108A0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_GET_INSTREAMINGSCENE_OFFSET UNITYSDK_OFFSET(0x11510750)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x115123C0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x11510EF0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_LOADINITASSET_OFFSET UNITYSDK_OFFSET(0x11510AC0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11512410)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET UNITYSDK_OFFSET(0x115104C0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVESTREAMINGPOSPROVIDER_OFFSET UNITYSDK_OFFSET(0x1150F510)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPOI_OFFSET UNITYSDK_OFFSET(0x1150F150)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPVS_OFFSET UNITYSDK_OFFSET(0x1150EF80)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1150E450)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0x1150E3C0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERNEEDLOAD_OFFSET UNITYSDK_OFFSET(0x115111C0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGOBJECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x115116E0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_STARTSTREAMING_OFFSET UNITYSDK_OFFSET(0x115106F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1150EBC0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x11511060)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMINGBYMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x11511E10)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMING_OFFSET UNITYSDK_OFFSET(0x1150FA90)
#define NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x115122F0)
#define NAPSTREAMING_NAPSTREAMINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11512830)
#define NAPSTREAMING_NAPSTREAMINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x115126C0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingManager_TypeDefinitionIndex = 42446;

	class NapStreamingManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::System::Boolean>** StaticGet_ModifiedLayerLoadDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::NapStreaming::StreamingLayer, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x3A330);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::NapStreamingManager_StreamingPosProvider*>** StaticGet_PosProviders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::NapStreamingManager_StreamingPosProvider*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x3A338);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ProviderTags()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x3A340);
		}
		static ::NapStreaming::NapStreamingManager** StaticGet_s_currentInstance()
		{
			return (::NapStreaming::NapStreamingManager**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0x3A348);
		}
		static ::System::Boolean* StaticGet_OpenLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4D0);
		}
		static ::System::Boolean* StaticGet_EnablePVS()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4D1);
		}
		static ::System::Single* StaticGet_LoadDistanceCoefficient()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4D4);
		}
		static ::System::Int32* StaticGet_UnloadCurrentCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4D8);
		}
		static ::System::Boolean* StaticGet_OpenLowPrefab()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4DC);
		}
		static ::System::Boolean* StaticGet_UseLowPrefab()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4DD);
		}
		static ::System::Boolean* StaticGet_EnablePOI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4DE);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4DF);
		}
		static ::UnityEngine::Vector3* StaticGet_ForceUpdateGap()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4E0);
		}
		static ::System::Single* StaticGet_HLODDistanceCoefficient()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4EC);
		}
		static ::System::Int32* StaticGet_UnloadBatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingManager_TypeDefinitionIndex)->GetStaticField(0xE4F0);
		}
		// static const ::System::String* SceneLoadTag; // 0x0
		// static const ::System::Int32 InitTickCount = 0x3C; // 0x0
		::NapStreaming::NapStreamingData* data; // 0x18
		::System::Boolean showAll; // 0x20
		::NapStreaming::StreamingLayer selectLayer; // 0x24
		::System::Boolean checkVisible; // 0x28
		::System::Boolean checkPOI; // 0x29
		::System::Boolean forceStop; // 0x2A
		::System::Boolean inInitLoading; // 0x2B
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*>* startLoadedPaths; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* tickPaths; // 0x38
		::System::Action* initLoadCallback; // 0x40
		::UnityEngine::Camera* mainCamera; // 0x48
		::UnityEngine::Vector3 providerLastPos; // 0x50
		::System::Single exitProviderGap; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetLoggingSupport(::System::Boolean b)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGSUPPORT_OFFSET))(b);
		}

		static ::System::Boolean GetLoggingSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGSUPPORT_OFFSET))();
		}

		static ::System::Void SetLoggingCostTime(::System::UInt64 costTime)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETLOGGINGCOSTTIME_OFFSET))(costTime);
		}

		static ::System::UInt64 GetLoggingCostTime()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GETLOGGINGCOSTTIME_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_START_OFFSET))(this);
		}

		static ::System::Void SetEnablePVS(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPVS_OFFSET))(enabled);
		}

		static ::System::Void SetEnablePOI(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETENABLEPOI_OFFSET))(enabled);
		}

		static ::System::Void AddStreamingPosProvider(::System::String* tag, ::NapStreaming::NapStreamingManager_StreamingPosProvider* provider)
		{
			return ((::System::Void(*)(::System::String*, ::NapStreaming::NapStreamingManager_StreamingPosProvider*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_ADDSTREAMINGPOSPROVIDER_OFFSET))(tag, provider);
		}

		static ::System::Void RemoveStreamingPosProvider(::System::String* tag, ::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REMOVESTREAMINGPOSPROVIDER_OFFSET))(tag, forceUpdate);
		}

		static ::System::Void ForceUpdateStreaming()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_FORCEUPDATESTREAMING_OFFSET))();
		}

		static ::System::Void RegisterOrRunAfterLoadAction(::System::Action* initLoadCallback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_REGISTERORRUNAFTERLOADACTION_OFFSET))(initLoadCallback);
		}

		static ::System::Boolean get_InStreamingScene()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GET_INSTREAMINGSCENE_OFFSET))();
		}

		static ::System::Boolean get_InInitLoading()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_GET_ININITLOADING_OFFSET))();
		}

		static ::System::Void LoadInitAsset(::Foundation::AssetPath p, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LOADINITASSET_OFFSET))(p, callback);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync(::Foundation::AssetPath p, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LOADASSETASYNC_OFFSET))(p, callback);
		}

		static ::System::Void DestroyObject(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_DESTROYOBJECT_OFFSET))(go);
		}

		static ::System::Void UnloadAsset(::Foundation::AssetRequestHandle h, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UNLOADASSET_OFFSET))(h, immediate);
		}

		static ::System::Void SetStreamingLayerNeedLoad(::NapStreaming::StreamingLayer layer, ::System::Boolean needLoad)
		{
			return ((::System::Void(*)(::NapStreaming::StreamingLayer, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGLAYERNEEDLOAD_OFFSET))(layer, needLoad);
		}

		static ::System::Void SetStreamingObjectsVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_SETSTREAMINGOBJECTSVISIBLE_OFFSET))(isVisible);
		}

		::System::Void ApplyStreamingLayerNeedLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_APPLYSTREAMINGLAYERNEEDLOAD_OFFSET))(this);
		}

		::System::Void StartStreaming(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_STARTSTREAMING_OFFSET))(this, cb);
		}

		::System::Void CheckIsStreamingDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_CHECKISSTREAMINGDONE_OFFSET))(this);
		}

		::System::Void UpdateStreamingByMainCamera(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMINGBYMAINCAMERA_OFFSET))(this, forceUpdate);
		}

		::System::Void UpdateStreaming(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATESTREAMING_OFFSET))(this, forceUpdate);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
