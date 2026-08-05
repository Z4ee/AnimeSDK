#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F88C570)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F88C610)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F88C560)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombiner_MBBlendShapeKey_TypeDefinitionIndex = 94557;

	class MB3_MeshCombiner_MBBlendShapeKey : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::System::Int32 blendShapeIndexInSrc; // 0x18

		::System::Void _ctor(::UnityEngine::GameObject* srcSkinnedMeshRenderGameObject, ::System::Int32 blendShapeIndexInSource)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEKEY__CTOR_OFFSET))(this, srcSkinnedMeshRenderGameObject, blendShapeIndexInSource);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_MBBLENDSHAPEKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
