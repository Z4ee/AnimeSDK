#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetPoolRunMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_INSTANCETRACKER_ADDREQUEST_OFFSET UNITYSDK_OFFSET(0x1B85C5B0)
#define FOUNDATION_INSTANCETRACKER_CANFORCEDROP_OFFSET UNITYSDK_OFFSET(0x1B85B4E0)
#define FOUNDATION_INSTANCETRACKER_CHECKALIVE_OFFSET UNITYSDK_OFFSET(0x1B85B000)
#define FOUNDATION_INSTANCETRACKER_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B85C360)
#define FOUNDATION_INSTANCETRACKER_COMPOSEINSTANCETRACKER_OFFSET UNITYSDK_OFFSET(0x1B85ACF0)
#define FOUNDATION_INSTANCETRACKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B85CB20)
#define FOUNDATION_INSTANCETRACKER_DROP_OFFSET UNITYSDK_OFFSET(0x1B85B350)
#define FOUNDATION_INSTANCETRACKER_FORCEDROP_OFFSET UNITYSDK_OFFSET(0x1B85B6F0)
#define FOUNDATION_INSTANCETRACKER_GETMISSINFOSTRING_OFFSET UNITYSDK_OFFSET(0x1B85B790)
#define FOUNDATION_INSTANCETRACKER_GET_CAPCITY_OFFSET UNITYSDK_OFFSET(0x1B85AC60)
#define FOUNDATION_INSTANCETRACKER_GET_DISPOSETICK_OFFSET UNITYSDK_OFFSET(0x1B85AC30)
#define FOUNDATION_INSTANCETRACKER_GET_MAXREFCOUNT_OFFSET UNITYSDK_OFFSET(0x1B85ACC0)
#define FOUNDATION_INSTANCETRACKER_GET_MISSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B85ACE0)
#define FOUNDATION_INSTANCETRACKER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1B85ACB0)
#define FOUNDATION_INSTANCETRACKER_GET_POOLCOUNT_OFFSET UNITYSDK_OFFSET(0x1B85AC00)
#define FOUNDATION_INSTANCETRACKER_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1B85AC80)
#define FOUNDATION_INSTANCETRACKER_GET_TIMEOUTTICK_OFFSET UNITYSDK_OFFSET(0x1B85AC20)
#define FOUNDATION_INSTANCETRACKER_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B85AC40)
#define FOUNDATION_INSTANCETRACKER_GET_TOTALTAKECOUNT_OFFSET UNITYSDK_OFFSET(0x1B85ACD0)
#define FOUNDATION_INSTANCETRACKER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B85C7C0)
#define FOUNDATION_INSTANCETRACKER_RESETMISSCOUNTER_OFFSET UNITYSDK_OFFSET(0x1B85CAD0)
#define FOUNDATION_INSTANCETRACKER_SETPERMANENTLY_OFFSET UNITYSDK_OFFSET(0x1B85C2B0)
#define FOUNDATION_INSTANCETRACKER_SET_CAPCITY_OFFSET UNITYSDK_OFFSET(0x1B85AC70)
#define FOUNDATION_INSTANCETRACKER_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1B85ACA0)
#define FOUNDATION_INSTANCETRACKER_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B85AC50)
#define FOUNDATION_INSTANCETRACKER_TAKEOUT_OFFSET UNITYSDK_OFFSET(0x1B85B8B0)
#define FOUNDATION_INSTANCETRACKER_TRACK_OFFSET UNITYSDK_OFFSET(0x1B85C020)
#define FOUNDATION_INSTANCETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85CE00)

namespace Foundation
{
	inline static constexpr unsigned int InstanceTracker_TypeDefinitionIndex = 7862;

	class InstanceTracker : public ::System::Object
	{
	public:
		::Foundation::AssetPoolRunMode* pool; // 0x10
		::UnityEngine::GameObject* originPrefab; // 0x18
		::Foundation::AssetRequestHandle _request_k__BackingField; // 0x20
		::System::Collections::Generic::LinkedList_1<::UnityEngine::GameObject*>* objectsPool; // 0x40
		::System::String* path; // 0x48
		::System::Int32 _missCount; // 0x50
		::System::Int32 _maxRefCount; // 0x54
		::System::Single timeoutTick; // 0x58
		::System::Int32 _Timeout_k__BackingField; // 0x5C
		::System::Single disposeTick; // 0x60
		::System::Boolean forceDrop; // 0x64
		::System::Boolean dontTickAlive; // 0x65
		::System::Int32 _takeCount; // 0x68
		::System::Int32 refCount; // 0x6C
		::System::Int32 _Capcity_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_poolCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_POOLCOUNT_OFFSET))(this);
		}

		::System::Single get_TimeoutTick()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_TIMEOUTTICK_OFFSET))(this);
		}

		::System::Single get_DisposeTick()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_DISPOSETICK_OFFSET))(this);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_Capcity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_CAPCITY_OFFSET))(this);
		}

		::System::Void set_Capcity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_SET_CAPCITY_OFFSET))(this, value);
		}

		::Foundation::AssetRequestHandle get_request()
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_REQUEST_OFFSET))(this);
		}

		::System::Void set_request(::Foundation::AssetRequestHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_SET_REQUEST_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_PATH_OFFSET))(this);
		}

		::System::Int32 get_MaxRefCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_MAXREFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TotalTakeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_TOTALTAKECOUNT_OFFSET))(this);
		}

		::System::Int32 get_MissCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GET_MISSCOUNT_OFFSET))(this);
		}

		static ::Foundation::InstanceTracker* ComposeInstanceTracker(::Foundation::InstanceTracker* tracker, ::Foundation::AssetPoolRunMode* pool, ::System::String* path, ::UnityEngine::GameObject* originPrefab, ::System::Int32 timeout, ::System::Int32 capcity)
		{
			return ((::Foundation::InstanceTracker*(*)(::Foundation::InstanceTracker*, ::Foundation::AssetPoolRunMode*, ::System::String*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_COMPOSEINSTANCETRACKER_OFFSET))(tracker, pool, path, originPrefab, timeout, capcity);
		}

		::System::Boolean CheckAlive(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_CHECKALIVE_OFFSET))(this, deltaTime);
		}

		::System::Boolean CanForceDrop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_CANFORCEDROP_OFFSET))(this);
		}

		::System::Void ForceDrop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_FORCEDROP_OFFSET))(this);
		}

		::System::String* GetMissInfoString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_GETMISSINFOSTRING_OFFSET))(this);
		}

		::UnityEngine::GameObject* Takeout(::UnityEngine::Transform* parent, ::System::Boolean activeState, ::System::Boolean countMissing)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_TAKEOUT_OFFSET))(this, parent, activeState, countMissing);
		}

		::System::Void Track(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_TRACK_OFFSET))(this, go);
		}

		::System::Void SetPermanently(::System::Boolean isPermanently)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_SETPERMANENTLY_OFFSET))(this, isPermanently);
		}

		::System::Void Drop(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_DROP_OFFSET))(this, go);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Void AddRequest(::Foundation::AssetRequestHandle request)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_ADDREQUEST_OFFSET))(this, request);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_RELEASE_OFFSET))(this);
		}

		::System::Void ResetMissCounter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_RESETMISSCOUNTER_OFFSET))(this);
		}

		static ::System::Void Dispose(::Foundation::InstanceTracker* target)
		{
			return ((::System::Void(*)(::Foundation::InstanceTracker*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCETRACKER_DISPOSE_OFFSET))(target);
		}
	};
}
