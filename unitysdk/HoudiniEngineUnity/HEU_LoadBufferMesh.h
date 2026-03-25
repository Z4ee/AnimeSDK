#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_LoadBufferBase.h"

namespace HoudiniEngineUnity { class HEU_GenerateGeoCache; }
namespace HoudiniEngineUnity { class HEU_GeoGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x8469BF0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferMesh_TypeDefinitionIndex = 37791;

	class HEU_LoadBufferMesh : public ::HoudiniEngineUnity::HEU_LoadBufferBase
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* _LODGroupMeshes; // 0x28
		::HoudiniEngineUnity::HEU_GenerateGeoCache* _geoCache; // 0x30
		::System::Int32 _defaultMaterialKey; // 0x38
		::System::Boolean _bGenerateUVs; // 0x3C
		::System::Boolean _bGenerateTangents; // 0x3D
		::System::Boolean _bPartInstanced; // 0x3E
		::System::Boolean _bGenerateNormals; // 0x3F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERMESH__CTOR_OFFSET))(this);
		}
	};
}
