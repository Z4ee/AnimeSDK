#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE34870)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombiner_MBBlendShapeValue_TypeDefinitionIndex = 94558;

	class MB3_MeshCombiner_MBBlendShapeValue : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* combinedMeshGameObject; // 0x10
		::System::Int32 blendShapeIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEVALUE__CTOR_OFFSET))(this);
		}
	};
}
