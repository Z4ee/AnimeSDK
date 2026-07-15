#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x168BC2A0)
#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x168BC2D0)
#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x168B8A90)
#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x168BC1B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_SkeletonRendererDelegate_TypeDefinitionIndex = 42228;

	class SkeletonGraphic_SkeletonRendererDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonGraphic* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
