#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHRECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F42D970)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo_TypeDefinitionIndex = 94662;

	class MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo : public ::System::Object
	{
	public:
		::System::Int32 vertIdx; // 0x10
		::System::Int32 triIdx; // 0x14
		::System::Int32 atlasIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHRECTINFO__CTOR_OFFSET))(this);
		}
	};
}
