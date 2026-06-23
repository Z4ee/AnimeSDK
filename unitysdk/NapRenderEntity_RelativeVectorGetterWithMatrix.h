#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C428490)
#define NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C428500)
#define NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C428150)
#define NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C428130)

inline static constexpr unsigned int NapRenderEntity_RelativeVectorGetterWithMatrix_TypeDefinitionIndex = 27264;

class NapRenderEntity_RelativeVectorGetterWithMatrix : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::UnityEngine::Vector3& middlePoint, ::UnityEngine::Matrix4x4& headBoneLocalToWorldMatrix)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX_INVOKE_OFFSET))(this, middlePoint, headBoneLocalToWorldMatrix);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3& middlePoint, ::UnityEngine::Matrix4x4& headBoneLocalToWorldMatrix, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX_BEGININVOKE_OFFSET))(this, middlePoint, headBoneLocalToWorldMatrix, callback, object);
	}

	::System::Void EndInvoke(::UnityEngine::Vector3& middlePoint, ::UnityEngine::Matrix4x4& headBoneLocalToWorldMatrix, ::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTERWITHMATRIX_ENDINVOKE_OFFSET))(this, middlePoint, headBoneLocalToWorldMatrix, result);
	}
};
