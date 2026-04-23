#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransform.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E4B740)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x8E4B9B0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x8E4C2F0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPARENT_OFFSET UNITYSDK_OFFSET(0x8E4B920)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x8E4B960)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETROTATION_OFFSET UNITYSDK_OFFSET(0x8E4C260)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMINDEX_OFFSET UNITYSDK_OFFSET(0x8E4B770)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMREF_OFFSET UNITYSDK_OFFSET(0x8E4B800)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x8E4B8C0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_NOTIFYTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x8E4BC50)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0x8E4C860)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x8E4C1B0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x8E4C5F0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x8E4C740)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x8E4B9E0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETROTATION_OFFSET UNITYSDK_OFFSET(0x8E4C330)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNCROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8E4C7D0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNC_OFFSET UNITYSDK_OFFSET(0x8E4D210)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x8E4CF60)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x8E4D490)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKThreadProxyContext_TypeDefinitionIndex = 40999;

	class IKThreadProxyContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TransformIDs; // 0x10
		::Il2CppArray<::System::Int32>* Parents; // 0x18
		::Unity::Collections::NativeArray_1<::RootMotion::IKJob::IKTransform> Transforms; // 0x20
		::System::Boolean bModify; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Int32 GetTransformIndex(::UnityEngine::Transform* transform)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMINDEX_OFFSET))(this, transform);
		}

		::RootMotion::IKJob::IKTransformRef GetTransformRef(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMREF_OFFSET))(this, transform);
		}

		::System::Boolean IsChildOf(::System::Int32 index, ::System::Int32 parentIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_ISCHILDOF_OFFSET))(this, index, parentIndex);
		}

		::System::Int32 GetParent(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPARENT_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPOSITION_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetLocalPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALPOSITION_OFFSET))(this, index);
		}

		::System::Void SetPosition(::System::Int32 index, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETPOSITION_OFFSET))(this, index, position);
		}

		::System::Void SetLocalPosition(::System::Int32 index, ::UnityEngine::Vector3 localPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALPOSITION_OFFSET))(this, index, localPosition);
		}

		::UnityEngine::Quaternion GetRotation(::System::Int32 index)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETROTATION_OFFSET))(this, index);
		}

		::UnityEngine::Quaternion GetLocalRotation(::System::Int32 index)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALROTATION_OFFSET))(this, index);
		}

		::System::Void SetRotation(::System::Int32 index, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETROTATION_OFFSET))(this, index, rotation);
		}

		::System::Void SetLocalRotation(::System::Int32 index, ::UnityEngine::Quaternion localRotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALROTATION_OFFSET))(this, index, localRotation);
		}

		::System::Void SetLocalScale(::System::Int32 index, ::UnityEngine::Vector3 localScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALSCALE_OFFSET))(this, index, localScale);
		}

		::System::Void SyncRootTransform(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNCROOTTRANSFORM_OFFSET))(this, localPosition, localRotation);
		}

		::System::Void Reset(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_RESET_OFFSET))(this, transforms);
		}

		::System::Void Update(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_UPDATE_OFFSET))(this, transforms);
		}

		::System::Void Sync(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNC_OFFSET))(this, transforms);
		}

		::System::Void NotifyTransformChanged(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_NOTIFYTRANSFORMCHANGED_OFFSET))(this, index);
		}
	};
}
