#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetRequestStatus.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/InstantiationParameters.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace Foundation { class AssetRequestCompleteDelWithUserData; }
namespace Foundation { class AssetRequestDestroyDel; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACKWITHUSERDATA_OFFSET UNITYSDK_OFFSET(0x1BAE15D0)
#define FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAE12D0)
#define FOUNDATION_ASSETREQUESTBASE_ADDDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAE2270)
#define FOUNDATION_ASSETREQUESTBASE_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BAE2BB0)
#define FOUNDATION_ASSETREQUESTBASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1BAE0ED0)
#define FOUNDATION_ASSETREQUESTBASE_CHECKUSEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1BAE2B60)
#define FOUNDATION_ASSETREQUESTBASE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1BAE2AE0)
#define FOUNDATION_ASSETREQUESTBASE_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x1BAE2C00)
#define FOUNDATION_ASSETREQUESTBASE_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1BAE1120)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1BAE2A30)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1BAE2B20)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BAE29D0)
#define FOUNDATION_ASSETREQUESTBASE_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1BAE2C40)
#define FOUNDATION_ASSETREQUESTBASE_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1BAE11A0)
#define FOUNDATION_ASSETREQUESTBASE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1BAE1180)
#define FOUNDATION_ASSETREQUESTBASE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BAE29C0)
#define FOUNDATION_ASSETREQUESTBASE_GET_DESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1BAE1160)
#define FOUNDATION_ASSETREQUESTBASE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1BAE1290)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1BAE12C0)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1BAE0E60)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1BAE12B0)
#define FOUNDATION_ASSETREQUESTBASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1BAE1200)
#define FOUNDATION_ASSETREQUESTBASE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1BAE1210)
#define FOUNDATION_ASSETREQUESTBASE_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1BAE27C0)
#define FOUNDATION_ASSETREQUESTBASE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1BAE1280)
#define FOUNDATION_ASSETREQUESTBASE_GET_URL_OFFSET UNITYSDK_OFFSET(0x1BAE11C0)
#define FOUNDATION_ASSETREQUESTBASE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BAE11E0)
#define FOUNDATION_ASSETREQUESTBASE_INVOKECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BADFD80)
#define FOUNDATION_ASSETREQUESTBASE_INVOKEDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BADF400)
#define FOUNDATION_ASSETREQUESTBASE_ISUNUSED_OFFSET UNITYSDK_OFFSET(0x1BAE28E0)
#define FOUNDATION_ASSETREQUESTBASE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BAE2930)
#define FOUNDATION_ASSETREQUESTBASE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BADFD30)
#define FOUNDATION_ASSETREQUESTBASE_ONUNUSED_OFFSET UNITYSDK_OFFSET(0x1BAE0D20)
#define FOUNDATION_ASSETREQUESTBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BAE2840)
#define FOUNDATION_ASSETREQUESTBASE_REMOVEALLCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAE1AA0)
#define FOUNDATION_ASSETREQUESTBASE_REMOVECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAE2020)
#define FOUNDATION_ASSETREQUESTBASE_REMOVEDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAE25B0)
#define FOUNDATION_ASSETREQUESTBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1BAE2980)
#define FOUNDATION_ASSETREQUESTBASE_RETAIN_OFFSET UNITYSDK_OFFSET(0x1BAE27E0)
#define FOUNDATION_ASSETREQUESTBASE_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1BAE11B0)
#define FOUNDATION_ASSETREQUESTBASE_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x1BAE1190)
#define FOUNDATION_ASSETREQUESTBASE_SET_DESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1BAE1170)
#define FOUNDATION_ASSETREQUESTBASE_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1BAE12A0)
#define FOUNDATION_ASSETREQUESTBASE_SET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1BAE27D0)
#define FOUNDATION_ASSETREQUESTBASE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1BADFC30)
#define FOUNDATION_ASSETREQUESTBASE_SET_URL_OFFSET UNITYSDK_OFFSET(0x1BAE11D0)
#define FOUNDATION_ASSETREQUESTBASE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BAE11F0)
#define FOUNDATION_ASSETREQUESTBASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BADF000)
#define FOUNDATION_ASSETREQUESTBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BAE0E70)
#define FOUNDATION_ASSETREQUESTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE2C80)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestBase_TypeDefinitionIndex = 8221;

	class AssetRequestBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestDestroyDel*>*>* destroyCallbackDict; // 0x10
		::Foundation::AssetPath _Url_k__BackingField; // 0x18
		::UnityEngine::Object* _Asset_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestCompleteDelWithUserData*>*>* completeCallbackWithUserDataDict; // 0x30
		::System::Type* _AssetType_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::System::Object*>*>* completeCallbackUserDataDict; // 0x40
		::System::String* _Error_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestCompleteDel*>*>* completeCallbackDict; // 0x50
		::System::Int32 _RefCount_k__BackingField; // 0x58
		::Foundation::Coroutine::CoroutineHandle destroyCallbackHandle; // 0x5C
		::Foundation::Coroutine::CoroutineHandle completeCallbackHandle; // 0x60
		::System::Boolean _DestroyImmediately_k__BackingField; // 0x64
		::Foundation::AssetRequestStatus statusCode; // 0x68
		::System::Int32 _Version_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE__CTOR_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_UNLOAD_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUnused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ONUNUSED_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_UPDATE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetRequestBase*>* GetDependencies()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetRequestBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETDEPENDENCIES_OFFSET))(this);
		}

		::System::Boolean get_DestroyImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_DESTROYIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_DestroyImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_DESTROYIMMEDIATELY_OFFSET))(this, value);
		}

		::UnityEngine::Object* get_Asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ASSET_OFFSET))(this);
		}

		::System::Void set_Asset(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_ASSET_OFFSET))(this, value);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_ASSETTYPE_OFFSET))(this, value);
		}

		::Foundation::AssetPath get_Url()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::Foundation::AssetPath value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_URL_OFFSET))(this, value);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_VERSION_OFFSET))(this, value);
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_PROGRESS_OFFSET))(this);
		}

		::Foundation::AssetRequestStatus get_Status()
		{
			return ((::Foundation::AssetRequestStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Foundation::AssetRequestStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestStatus))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_STATUS_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_ERROR_OFFSET))(this, value);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void AddCompleteCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void AddCompleteCallbackWithUserData(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestCompleteDelWithUserData* callback, ::System::Object* inUserData)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestCompleteDelWithUserData*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACKWITHUSERDATA_OFFSET))(this, requestHandle, callback, inUserData);
		}

		::System::Void RemoveAllCompleteCallback(::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_REMOVEALLCOMPLETECALLBACK_OFFSET))(this, requestHandle);
		}

		::System::Void RemoveCompleteCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_REMOVECOMPLETECALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void InvokeCompleteCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_INVOKECOMPLETECALLBACK_OFFSET))(this);
		}

		::System::Void AddDestroyCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestDestroyDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestDestroyDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDDESTROYCALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void RemoveDestroyCallback(::Foundation::AssetRequestHandle requestHandle, ::Foundation::AssetRequestDestroyDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::Foundation::AssetRequestDestroyDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_REMOVEDESTROYCALLBACK_OFFSET))(this, requestHandle, callback);
		}

		::System::Void InvokeDestroyCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_INVOKEDESTROYCALLBACK_OFFSET))(this);
		}

		::System::Int32 get_RefCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_REFCOUNT_OFFSET))(this);
		}

		::System::Void set_RefCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_SET_REFCOUNT_OFFSET))(this, value);
		}

		::System::Void Retain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_RETAIN_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_RELEASE_OFFSET))(this);
		}

		::System::Boolean IsUnused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ISUNUSED_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_RESET_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GET_CURRENT_OFFSET))(this);
		}

		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETINSTANCE_OFFSET))(this, param);
		}

		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Int32 CheckUsedInstances(::System::Boolean deepCheck)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_CHECKUSEDINSTANCES_OFFSET))(this, deepCheck);
		}

		::System::Void AddPoolInstance(::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_ADDPOOLINSTANCE_OFFSET))(this, go);
		}

		::System::Void ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTBASE_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}
	};
}
