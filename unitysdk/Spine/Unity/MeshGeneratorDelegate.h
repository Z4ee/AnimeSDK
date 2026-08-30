#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_MESHGENERATORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E647410)
#define SPINE_UNITY_MESHGENERATORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E647480)
#define SPINE_UNITY_MESHGENERATORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6473D0)
#define SPINE_UNITY_MESHGENERATORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E647360)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGeneratorDelegate_TypeDefinitionIndex = 43887;

	class MeshGeneratorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::MeshGeneratorBuffers a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::MeshGeneratorBuffers a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
