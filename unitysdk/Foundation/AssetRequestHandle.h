#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class AssetRequestBase; }
namespace Foundation { class AssetRequestCompleteDel; }
namespace Foundation { class AssetRequestCompleteDelWithUserData; }
namespace Foundation { class AssetRequestDestroyDel; }
namespace Foundation { class AssetRequestHandle_AssetRequestHandleChecker; }
namespace Foundation { class AssetRequestHandle_AssetRequestHandleNull; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETREQUESTHANDLE_ADDCOMPLETECALLBACKWITHUSERDATA_OFFSET UNITYSDK_OFFSET(0x950C70)
#define FOUNDATION_ASSETREQUESTHANDLE_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x950BF0)
#define FOUNDATION_ASSETREQUESTHANDLE_ADDDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x950DF0)
#define FOUNDATION_ASSETREQUESTHANDLE_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x951400)
#define FOUNDATION_ASSETREQUESTHANDLE_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x951710)
#define FOUNDATION_ASSETREQUESTHANDLE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x951320)
#define FOUNDATION_ASSETREQUESTHANDLE_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x951480)
#define FOUNDATION_ASSETREQUESTHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9509B0)
#define FOUNDATION_ASSETREQUESTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9508D0)
#define FOUNDATION_ASSETREQUESTHANDLE_ERROR_OFFSET UNITYSDK_OFFSET(0x950F60)
#define FOUNDATION_ASSETREQUESTHANDLE_GENERATE_OFFSET UNITYSDK_OFFSET(0x1BFD7DF0)
#define FOUNDATION_ASSETREQUESTHANDLE_GETASSETINSTANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x950BE0)
#define FOUNDATION_ASSETREQUESTHANDLE_GETASSETREQUEST_OFFSET UNITYSDK_OFFSET(0x950BD0)
#define FOUNDATION_ASSETREQUESTHANDLE_GETASSET_OFFSET UNITYSDK_OFFSET(0x950FC0)
#define FOUNDATION_ASSETREQUESTHANDLE_GETCHECKERLOADSTACK_OFFSET UNITYSDK_OFFSET(0x9516D0)
#define FOUNDATION_ASSETREQUESTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x950880)
#define FOUNDATION_ASSETREQUESTHANDLE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x951240)
#define FOUNDATION_ASSETREQUESTHANDLE_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x951390)
#define FOUNDATION_ASSETREQUESTHANDLE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x951160)
#define FOUNDATION_ASSETREQUESTHANDLE_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x9514F0)
#define FOUNDATION_ASSETREQUESTHANDLE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x951090)
#define FOUNDATION_ASSETREQUESTHANDLE_ISDONE_OFFSET UNITYSDK_OFFSET(0x951020)
#define FOUNDATION_ASSETREQUESTHANDLE_ISUNUSED_OFFSET UNITYSDK_OFFSET(0x951650)
#define FOUNDATION_ASSETREQUESTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x950AA0)
#define FOUNDATION_ASSETREQUESTHANDLE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x9510F0)
#define FOUNDATION_ASSETREQUESTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BFD80B0)
#define FOUNDATION_ASSETREQUESTHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BFD8470)
#define FOUNDATION_ASSETREQUESTHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BFD8120)
#define FOUNDATION_ASSETREQUESTHANDLE_RELEASECALLBACKNOTUNLOAD_OFFSET UNITYSDK_OFFSET(0x950AC0)
#define FOUNDATION_ASSETREQUESTHANDLE_REMOVECOMPLETECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x950D80)
#define FOUNDATION_ASSETREQUESTHANDLE_REMOVECOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x950D00)
#define FOUNDATION_ASSETREQUESTHANDLE_REMOVEDESTROYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x950EF0)
#define FOUNDATION_ASSETREQUESTHANDLE_REMOVEDESTROYCALLBACK_OFFSET UNITYSDK_OFFSET(0x950E70)
#define FOUNDATION_ASSETREQUESTHANDLE_SCENENAME_OFFSET UNITYSDK_OFFSET(0x9516C0)
#define FOUNDATION_ASSETREQUESTHANDLE_SETUNLOADSCENECOMPLETED_OFFSET UNITYSDK_OFFSET(0x951560)
#define FOUNDATION_ASSETREQUESTHANDLE_SUBREFERENCE_OFFSET UNITYSDK_OFFSET(0x951730)
#define FOUNDATION_ASSETREQUESTHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x950A40)
#define FOUNDATION_ASSETREQUESTHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x950A50)
#define FOUNDATION_ASSETREQUESTHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x950A60)
#define FOUNDATION_ASSETREQUESTHANDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x950A30)
#define FOUNDATION_ASSETREQUESTHANDLE_TRYGETASSETREQUEST_OFFSET UNITYSDK_OFFSET(0x950B60)
#define FOUNDATION_ASSETREQUESTHANDLE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x950AB0)
#define FOUNDATION_ASSETREQUESTHANDLE_URL_OFFSET UNITYSDK_OFFSET(0x951570)
#define FOUNDATION_ASSETREQUESTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFD99C0)
#define FOUNDATION_ASSETREQUESTHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9516E0)
#define FOUNDATION_ASSETREQUESTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x950850)
#define FOUNDATION_ASSETREQUESTHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x951740)
#define FOUNDATION_ASSETREQUESTHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9517B0)
#define FOUNDATION_ASSETREQUESTHANDLE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x951820)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestHandle_TypeDefinitionIndex = 8237;

	struct alignas(8) AssetRequestHandle
	{
		static ::Foundation::AssetRequestHandle* StaticGet_None()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_TypeDefinitionIndex)->GetStaticField(0x67D0);
		}
		static ::System::UInt32* StaticGet_gHandle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		::System::UInt32 handle; // 0x10
		::Foundation::AssetRequestBase* assetRequest; // 0x18
		::System::Int32 version; // 0x20
		::Foundation::AssetRequestHandle_AssetRequestHandleChecker* _Checker; // 0x28

		::System::Void _ctor(::System::UInt32 handle, ::Foundation::AssetRequestBase* assetRequest)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE__CTOR_OFFSET))(this, handle, assetRequest);
		}

		::System::Void _ctor_1(::System::UInt32 handle, ::Foundation::AssetRequestBase* assetRequest, ::Foundation::AssetRequestHandle_AssetRequestHandleChecker* checker)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::AssetRequestBase*, ::Foundation::AssetRequestHandle_AssetRequestHandleChecker*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE__CTOR_1_OFFSET))(this, handle, assetRequest, checker);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE__CCTOR_OFFSET))();
		}

		static ::Foundation::AssetRequestHandle Generate(::Foundation::AssetRequestBase* assetRequest)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GENERATE_OFFSET))(assetRequest);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Foundation::AssetRequestHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::Foundation::AssetRequestHandle left, ::Foundation::AssetRequestHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::AssetRequestHandle left, ::Foundation::AssetRequestHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_TOSTRING_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		static ::Foundation::AssetRequestHandle op_Implicit(::Foundation::AssetRequestHandle_AssetRequestHandleNull* _)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetRequestHandle_AssetRequestHandleNull*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_OP_IMPLICIT_OFFSET))(_);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ISVALID_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_UNLOAD_OFFSET))(this);
		}

		::System::Void ReleaseCallbackNotUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_RELEASECALLBACKNOTUNLOAD_OFFSET))(this);
		}

		::System::Boolean TryGetAssetRequest(::Foundation::AssetRequestBase*& req)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetRequestBase*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_TRYGETASSETREQUEST_OFFSET))(this, req);
		}

		::Foundation::AssetRequestBase* GetAssetRequest()
		{
			return ((::Foundation::AssetRequestBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETASSETREQUEST_OFFSET))(this);
		}

		::Foundation::AssetRequestBase* GetAssetInstanceRequest(::System::Boolean withNew)
		{
			return ((::Foundation::AssetRequestBase*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETASSETINSTANCEREQUEST_OFFSET))(this, withNew);
		}

		::Foundation::AssetRequestCompleteDel* AddCompleteCallback(::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::Foundation::AssetRequestCompleteDel*(*)(::PVOID, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ADDCOMPLETECALLBACK_OFFSET))(this, callback);
		}

		::Foundation::AssetRequestCompleteDelWithUserData* AddCompleteCallbackWithUserData(::Foundation::AssetRequestCompleteDelWithUserData* callback, ::System::Object* inUserData)
		{
			return ((::Foundation::AssetRequestCompleteDelWithUserData*(*)(::PVOID, ::Foundation::AssetRequestCompleteDelWithUserData*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ADDCOMPLETECALLBACKWITHUSERDATA_OFFSET))(this, callback, inUserData);
		}

		::System::Void RemoveCompleteCallback(::Foundation::AssetRequestCompleteDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestCompleteDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_REMOVECOMPLETECALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveCompleteCallback_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_REMOVECOMPLETECALLBACK_1_OFFSET))(this);
		}

		::Foundation::AssetRequestDestroyDel* AddDestroyCallback(::Foundation::AssetRequestDestroyDel* callback)
		{
			return ((::Foundation::AssetRequestDestroyDel*(*)(::PVOID, ::Foundation::AssetRequestDestroyDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ADDDESTROYCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveDestroyCallback(::Foundation::AssetRequestDestroyDel* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestDestroyDel*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_REMOVEDESTROYCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveDestroyCallback_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_REMOVEDESTROYCALLBACK_1_OFFSET))(this);
		}

		::System::String* Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ERROR_OFFSET))(this);
		}

		::UnityEngine::Object* GetAsset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETASSET_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ISDONE_OFFSET))(this);
		}

		::Foundation::AssetRequestStatus GetStatus()
		{
			return ((::Foundation::AssetRequestStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETSTATUS_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_LOADIMMEDIATE_OFFSET))(this);
		}

		/*
		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETINSTANCE_OFFSET))(this, param);
		}
		*/

		/*
		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}
		*/

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Void AddPoolInstance(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ADDPOOLINSTANCE_OFFSET))(this, go);
		}

		::System::Void ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Void SetUnloadSceneCompleted(::System::Action* unloadCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_SETUNLOADSCENECOMPLETED_OFFSET))(this, unloadCompleted);
		}

		/*
		::Foundation::AssetPath Url()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_URL_OFFSET))(this);
		}
		*/

		::System::Boolean IsUnused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ISUNUSED_OFFSET))(this);
		}

		::System::String* SceneName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_SCENENAME_OFFSET))(this);
		}

		::System::String* GetCheckerLoadStack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_GETCHECKERLOADSTACK_OFFSET))(this);
		}

		::Foundation::AssetRequestHandle AddReference()
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ADDREFERENCE_OFFSET))(this);
		}

		::System::Void SubReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_SUBREFERENCE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
