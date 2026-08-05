#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MBBLENDSHAPEFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5582A0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MBBlendShapeFrame_TypeDefinitionIndex = 94571;

	class MB3_MeshCombinerSingle_MBBlendShapeFrame : public ::System::Object
	{
	public:
		::System::Single frameWeight; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* normals; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* tangents; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MBBLENDSHAPEFRAME__CTOR_OFFSET))(this);
		}
	};
}
