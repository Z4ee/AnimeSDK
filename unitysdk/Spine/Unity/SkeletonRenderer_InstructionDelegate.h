#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x168C8960)
#define SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x168C8990)
#define SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x168C7980)
#define SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x168C8870)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer_InstructionDelegate_TypeDefinitionIndex = 42244;

	class SkeletonRenderer_InstructionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRendererInstruction* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
