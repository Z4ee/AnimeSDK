#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_MESHGENERATORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B44FA0)
#define SPINE_UNITY_MESHGENERATORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B45010)
#define SPINE_UNITY_MESHGENERATORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B44AE0)
#define SPINE_UNITY_MESHGENERATORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B44AD0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGeneratorDelegate_TypeDefinitionIndex = 37876;

	class MeshGeneratorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::MeshGeneratorBuffers buffers)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_INVOKE_OFFSET))(this, buffers);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::MeshGeneratorBuffers buffers, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_BEGININVOKE_OFFSET))(this, buffers, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
