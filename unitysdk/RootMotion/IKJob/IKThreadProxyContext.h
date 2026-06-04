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

#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA276940)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA276B80)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xA277450)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPARENT_OFFSET UNITYSDK_OFFSET(0xA276B00)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA276B30)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETROTATION_OFFSET UNITYSDK_OFFSET(0xA2773C0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMINDEX_OFFSET UNITYSDK_OFFSET(0xA276970)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMREF_OFFSET UNITYSDK_OFFSET(0xA276A00)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0xA276AB0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_NOTIFYTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA276E10)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xA2779B0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA277320)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xA277750)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA277890)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA276BB0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETROTATION_OFFSET UNITYSDK_OFFSET(0xA277490)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNCROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA277920)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNC_OFFSET UNITYSDK_OFFSET(0xA278390)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0xA2780C0)
#define ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA278650)

namespace RootMotion::IKJob
{
	inline static constexpr unsigned int IKThreadProxyContext_TypeDefinitionIndex = 41802;

	class IKThreadProxyContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TransformIDs; // 0x10
		::Il2CppArray<::System::Int32>* Parents; // 0x18
		::System::Boolean bModify; // 0x20
		::Unity::Collections::NativeArray_1<::RootMotion::IKJob::IKTransform> Transforms; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Int32 GetTransformIndex(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMINDEX_OFFSET))(this, a1);
		}

		::RootMotion::IKJob::IKTransformRef GetTransformRef(::UnityEngine::Transform* a1)
		{
			return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETTRANSFORMREF_OFFSET))(this, a1);
		}

		::System::Boolean IsChildOf(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_ISCHILDOF_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetParent(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPARENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLocalPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalPosition(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion GetRotation(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetLocalRotation(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_GETLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Void SetRotation(::System::Int32 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalRotation(::System::Int32 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalScale(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SETLOCALSCALE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncRootTransform(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNCROOTTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Reset(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_RESET_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_SYNC_OFFSET))(this, a1);
		}

		::System::Void NotifyTransformChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_IKJOB_IKTHREADPROXYCONTEXT_NOTIFYTRANSFORMCHANGED_OFFSET))(this, a1);
		}
	};
}
