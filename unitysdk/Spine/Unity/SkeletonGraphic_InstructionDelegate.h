#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E6537A0)
#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6537D0)
#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E64DF70)
#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6536B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_InstructionDelegate_TypeDefinitionIndex = 43840;

	class SkeletonGraphic_InstructionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRendererInstruction* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
