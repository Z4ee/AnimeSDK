#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E50C00)
#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E50C30)
#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E4A560)
#define SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E50BE0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_InstructionDelegate_TypeDefinitionIndex = 40587;

	class SkeletonGraphic_InstructionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::SkeletonRendererInstruction* instruction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_INVOKE_OFFSET))(this, instruction);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::SkeletonRendererInstruction* instruction, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_BEGININVOKE_OFFSET))(this, instruction, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INSTRUCTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
