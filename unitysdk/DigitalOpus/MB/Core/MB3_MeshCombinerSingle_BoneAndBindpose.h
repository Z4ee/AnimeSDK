#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEANDBINDPOSE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA55C00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEANDBINDPOSE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA55C10)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEANDBINDPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x3E4AA0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_BoneAndBindpose_TypeDefinitionIndex = 90640;

	struct alignas(8) MB3_MeshCombinerSingle_BoneAndBindpose
	{
		::UnityEngine::Transform* bone; // 0x10
		::UnityEngine::Matrix4x4 bindPose; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* t, ::UnityEngine::Matrix4x4 bp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEANDBINDPOSE__CTOR_OFFSET))(this, t, bp);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEANDBINDPOSE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_BONEANDBINDPOSE_GETHASHCODE_OFFSET))(this);
		}
	};
}
