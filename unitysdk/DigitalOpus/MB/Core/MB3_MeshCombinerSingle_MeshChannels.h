#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MBBlendShape; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B6E3F30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6E3F00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1B6E3F20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E3F70)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MeshChannels_TypeDefinitionIndex = 85063;

	class MB3_MeshCombinerSingle_MeshChannels : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* uv2raw; // 0x10
		::Il2CppArray<::UnityEngine::Vector2>* uv8; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindPoses; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* uv7; // 0x30
		::Il2CppArray<::UnityEngine::Vector2>* uv3; // 0x38
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MBBlendShape*>* blendShapes; // 0x40
		::Il2CppArray<::System::Int32>* triangles; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* normals; // 0x50
		::Il2CppArray<::UnityEngine::Vector2>* uv6; // 0x58
		::Il2CppArray<::UnityEngine::Vector2>* uv5; // 0x60
		::Il2CppArray<::UnityEngine::Vector2>* uv4; // 0x68
		::Il2CppArray<::UnityEngine::Vector4>* tangents; // 0x70
		::Il2CppArray<::UnityEngine::BoneWeight>* boneWeights; // 0x78
		::Il2CppArray<::UnityEngine::Vector2>* uv0raw; // 0x80
		::Il2CppArray<::UnityEngine::Vector2>* uv0modified; // 0x88
		::Il2CppArray<::UnityEngine::Color>* colors; // 0x90
		::Il2CppArray<::UnityEngine::Vector2>* uv2modified; // 0x98
		::System::Boolean _disposed; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS_ISDISPOSED_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MESHCHANNELS_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
