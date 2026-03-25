#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18416140)
#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18416170)
#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18411D50)
#define SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183FE0F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_SkeletonRendererDelegate_TypeDefinitionIndex = 34767;

	class SkeletonGraphic_SkeletonRendererDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonGraphic* skeletonGraphic)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_INVOKE_OFFSET))(this, skeletonGraphic);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonGraphic* skeletonGraphic, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_BEGININVOKE_OFFSET))(this, skeletonGraphic, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SKELETONRENDERERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
