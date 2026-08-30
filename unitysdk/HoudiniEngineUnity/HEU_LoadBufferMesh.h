#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_LoadBufferBase.h"

namespace HoudiniEngineUnity { class HEU_GenerateGeoCache; }
namespace HoudiniEngineUnity { class HEU_GeoGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x11A66EE0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferMesh_TypeDefinitionIndex = 39311;

	class HEU_LoadBufferMesh : public ::HoudiniEngineUnity::HEU_LoadBufferBase
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* _LODGroupMeshes; // 0x28
		::HoudiniEngineUnity::HEU_GenerateGeoCache* _geoCache; // 0x30
		::System::Boolean _bGenerateTangents; // 0x38
		::System::Boolean _bGenerateUVs; // 0x39
		::System::Boolean _bPartInstanced; // 0x3A
		::System::Boolean _bGenerateNormals; // 0x3B
		::System::Int32 _defaultMaterialKey; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERMESH__CTOR_OFFSET))(this);
		}
	};
}
