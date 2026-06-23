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

#define FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACKWITHUSERDATA_OFFSET UNITYSDK_OFFSET(0x1DDA60C0)
#define FOUNDATION_ASSETREQUESTBASE_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDA5DC0)
#define FOUNDATION_ASSETREQUESTBASE_ADDDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDA6D50)
#define FOUNDATION_ASSETREQUESTBASE_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DDA7690)
#define FOUNDATION_ASSETREQUESTBASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1DDA59D0)
#define FOUNDATION_ASSETREQUESTBASE_CHECKUSEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1DDA7640)
#define FOUNDATION_ASSETREQUESTBASE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1DDA75C0)
#define FOUNDATION_ASSETREQUESTBASE_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x1DDA76E0)
#define FOUNDATION_ASSETREQUESTBASE_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1DDA5C10)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1DDA7510)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1DDA7600)
#define FOUNDATION_ASSETREQUESTBASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DDA74B0)
#define FOUNDATION_ASSETREQUESTBASE_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x1DDA7720)
#define FOUNDATION_ASSETREQUESTBASE_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1DDA5C90)
#define FOUNDATION_ASSETREQUESTBASE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1DDA5C70)
#define FOUNDATION_ASSETREQUESTBASE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DDA74A0)
#define FOUNDATION_ASSETREQUESTBASE_GET_DESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1DDA5C50)
#define FOUNDATION_ASSETREQUESTBASE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1DDA5D80)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1DDA5DB0)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1DDA5960)
#define FOUNDATION_ASSETREQUESTBASE_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1DDA5DA0)
#define FOUNDATION_ASSETREQUESTBASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1DDA5CF0)
#define FOUNDATION_ASSETREQUESTBASE_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1DDA5D00)
#define FOUNDATION_ASSETREQUESTBASE_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1DDA72A0)
#define FOUNDATION_ASSETREQUESTBASE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1DDA5D70)
#define FOUNDATION_ASSETREQUESTBASE_GET_URL_OFFSET UNITYSDK_OFFSET(0x1DDA5CB0)
#define FOUNDATION_ASSETREQUESTBASE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1DDA5CD0)
#define FOUNDATION_ASSETREQUESTBASE_INVOKECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDA4880)
#define FOUNDATION_ASSETREQUESTBASE_INVOKEDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDA3F10)
#define FOUNDATION_ASSETREQUESTBASE_ISUNUSED_OFFSET UNITYSDK_OFFSET(0x1DDA73C0)
#define FOUNDATION_ASSETREQUESTBASE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DDA7410)
#define FOUNDATION_ASSETREQUESTBASE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DDA4830)
#define FOUNDATION_ASSETREQUESTBASE_ONUNUSED_OFFSET UNITYSDK_OFFSET(0x1DDA5820)
#define FOUNDATION_ASSETREQUESTBASE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DDA7320)
#define FOUNDATION_ASSETREQUESTBASE_REMOVEALLCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDA6580)
#define FOUNDATION_ASSETREQUESTBASE_REMOVECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDA6B00)
#define FOUNDATION_ASSETREQUESTBASE_REMOVEDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDA7090)
#define FOUNDATION_ASSETREQUESTBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1DDA7460)
#define FOUNDATION_ASSETREQUESTBASE_RETAIN_OFFSET UNITYSDK_OFFSET(0x1DDA72C0)
#define FOUNDATION_ASSETREQUESTBASE_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1DDA5CA0)
#define FOUNDATION_ASSETREQUESTBASE_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x1DDA5C80)
#define FOUNDATION_ASSETREQUESTBASE_SET_DESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1DDA5C60)
#define FOUNDATION_ASSETREQUESTBASE_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1DDA5D90)
#define FOUNDATION_ASSETREQUESTBASE_SET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1DDA72B0)
#define FOUNDATION_ASSETREQUESTBASE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1DDA4730)
#define FOUNDATION_ASSETREQUESTBASE_SET_URL_OFFSET UNITYSDK_OFFSET(0x1DDA5CC0)
#define FOUNDATION_ASSETREQUESTBASE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1DDA5CE0)
#define FOUNDATION_ASSETREQUESTBASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1DDA3B10)
#define FOUNDATION_ASSETREQUESTBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DDA5970)
#define FOUNDATION_ASSETREQUESTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA7760)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestBase_TypeDefinitionIndex = 7910;

	class AssetRequestBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestCompleteDel*>*>* completeCallbackDict; // 0x10
		::UnityEngine::Object* _Asset_k__BackingField; // 0x18
		::System::Type* _AssetType_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::System::Object*>*>* completeCallbackUserDataDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestCompleteDelWithUserData*>*>* completeCallbackWithUserDataDict; // 0x30
		::Foundation::AssetPath _Url_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::Collections::Generic::List_1<::Foundation::AssetRequestDestroyDel*>*>* destroyCallbackDict; // 0x48
		::System::String* _Error_k__BackingField; // 0x50
		::System::Boolean _DestroyImmediately_k__BackingField; // 0x58
		::System::Int32 _Version_k__BackingField; // 0x5C
		::Foundation::AssetRequestStatus statusCode; // 0x60
		::System::Int32 _RefCount_k__BackingField; // 0x64
		::Foundation::Coroutine::CoroutineHandle destroyCallbackHandle; // 0x68
		::Foundation::Coroutine::CoroutineHandle completeCallbackHandle; // 0x6C

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
