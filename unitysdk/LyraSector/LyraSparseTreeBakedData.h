#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LyraSector { class LyraDistanceFieldAsset; }
namespace LyraSector { class LyraPackedAssetSectorData; }
namespace LyraSector { class LyraSceneVoxelAsset; }
namespace UnityEngine { class ComputeBuffer; }

#define LYRASECTOR_LYRASPARSETREEBAKEDDATA_EMPTY_OFFSET UNITYSDK_OFFSET(0x1C4C7830)
#define LYRASECTOR_LYRASPARSETREEBAKEDDATA_INITOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1C4C7970)
#define LYRASECTOR_LYRASPARSETREEBAKEDDATA_INITOFFSET_2_OFFSET UNITYSDK_OFFSET(0x1C4C79D0)
#define LYRASECTOR_LYRASPARSETREEBAKEDDATA_INITOFFSET_OFFSET UNITYSDK_OFFSET(0x1C4C7920)
#define LYRASECTOR_LYRASPARSETREEBAKEDDATA_SETBUFFERDATA_OFFSET UNITYSDK_OFFSET(0x1C4C7880)
#define LYRASECTOR_LYRASPARSETREEBAKEDDATA_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x1C4C7A40)
#define LYRASECTOR_LYRASPARSETREEBAKEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C7AA0)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSparseTreeBakedData_TypeDefinitionIndex = 27281;

	class LyraSparseTreeBakedData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* m_PackedData; // 0x10
		::System::Int32 m_NodeArraySize; // 0x18
		::System::Int32 m_EntityBufferStart; // 0x1C
		::System::Int32 m_NodeArrayStart; // 0x20
		::System::Int32 m_EntityBufferSize; // 0x24
		::System::Int32 m_EmissionPaletteOffset; // 0x28
		::System::Int32 m_EmissionNodeArrayOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKEDDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKEDDATA_EMPTY_OFFSET))(this);
		}

		::System::Void SetBufferData(::UnityEngine::ComputeBuffer* nodeArrayBuffer, ::UnityEngine::ComputeBuffer* entityBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKEDDATA_SETBUFFERDATA_OFFSET))(this, nodeArrayBuffer, entityBuffer);
		}

		::System::Void InitOffset(::LyraSector::LyraDistanceFieldAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraDistanceFieldAsset*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKEDDATA_INITOFFSET_OFFSET))(this, asset);
		}

		::System::Void InitOffset_1(::LyraSector::LyraSceneVoxelAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSceneVoxelAsset*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKEDDATA_INITOFFSET_1_OFFSET))(this, asset);
		}

		::System::Boolean InitOffset_2(::LyraSector::LyraPackedAssetSectorData* sectorData)
		{
			return ((::System::Boolean(*)(::PVOID, ::LyraSector::LyraPackedAssetSectorData*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKEDDATA_INITOFFSET_2_OFFSET))(this, sectorData);
		}

		::System::Void SetOffset(::System::Int32 emissionNodeArrayOffset, ::System::Int32 emissionPlatteOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKEDDATA_SETOFFSET_OFFSET))(this, emissionNodeArrayOffset, emissionPlatteOffset);
		}
	};
}
