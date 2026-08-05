#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MBBlendShapeFrame; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MBBLENDSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF6610)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MBBlendShape_TypeDefinitionIndex = 94572;

	class MB3_MeshCombinerSingle_MBBlendShape : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::System::String* name; // 0x18
		::System::Int32 indexInSource; // 0x20
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShapeFrame*>* frames; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MBBLENDSHAPE__CTOR_OFFSET))(this);
		}
	};
}
