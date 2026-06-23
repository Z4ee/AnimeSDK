#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_DefaultMeshAssignCustomizer.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace UnityEngine { class Mesh; }

#define DIGITALOPUS_MB_CORE_CUSTOMIZERPUTSLICEINDEXINUV0_Z_MESHASSIGN_UV0_OFFSET UNITYSDK_OFFSET(0x1DE81CD0)
#define DIGITALOPUS_MB_CORE_CUSTOMIZERPUTSLICEINDEXINUV0_Z__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE81F20)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int CustomizerPutSliceIndexInUV0_z_TypeDefinitionIndex = 90561;

	class CustomizerPutSliceIndexInUV0_z : public ::DigitalOpus::MB::Core::MB_DefaultMeshAssignCustomizer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_CUSTOMIZERPUTSLICEINDEXINUV0_Z__CTOR_OFFSET))(this);
		}

		::System::Void meshAssign_UV0(::System::Int32 channel, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::MB2_TextureBakeResults* textureBakeResults, ::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Single>* sliceIndexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::MB2_TextureBakeResults*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_CUSTOMIZERPUTSLICEINDEXINUV0_Z_MESHASSIGN_UV0_OFFSET))(this, channel, settings, textureBakeResults, mesh, uvs, sliceIndexes);
		}
	};
}
