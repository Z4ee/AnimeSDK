#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace LyraSector { class CoordToLyraCompressedAssetData; }
namespace LyraSector { class LyraPackedAssetSectorData; }

#define LYRASECTOR_LYRAPACKEDASSET_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B859FF0)
#define LYRASECTOR_LYRAPACKEDASSET_GETCOORDTOLYRACOMPRESSEDASSETDATA_OFFSET UNITYSDK_OFFSET(0x1B859F90)
#define LYRASECTOR_LYRAPACKEDASSET_GETLYRAPACKEDASSETSECTORDATAWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x1B85A0D0)
#define LYRASECTOR_LYRAPACKEDASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B859E70)

namespace LyraSector
{
	inline static constexpr unsigned int LyraPackedAsset_TypeDefinitionIndex = 26582;

	class LyraPackedAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::LyraSector::CoordToLyraCompressedAssetData* m_DistanceFieldCoordToData; // 0x18
		::LyraSector::CoordToLyraCompressedAssetData* m_SceneVoxelCoordToData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSET__CTOR_OFFSET))(this);
		}

		::LyraSector::CoordToLyraCompressedAssetData* GetCoordToLyraCompressedAssetData(::System::Boolean isForDistanceField)
		{
			return ((::LyraSector::CoordToLyraCompressedAssetData*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSET_GETCOORDTOLYRACOMPRESSEDASSETDATA_OFFSET))(this, isForDistanceField);
		}

		::System::Boolean Contains(::LyraSector::LyraSectorCoord coord, ::System::Boolean isForDistanceField)
		{
			return ((::System::Boolean(*)(::PVOID, ::LyraSector::LyraSectorCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSET_CONTAINS_OFFSET))(this, coord, isForDistanceField);
		}

		::LyraSector::LyraPackedAssetSectorData* GetLyraPackedAssetSectorDataWithoutCheck(::LyraSector::LyraSectorCoord coord, ::System::Boolean isForDistanceField)
		{
			return ((::LyraSector::LyraPackedAssetSectorData*(*)(::PVOID, ::LyraSector::LyraSectorCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSET_GETLYRAPACKEDASSETSECTORDATAWITHOUTCHECK_OFFSET))(this, coord, isForDistanceField);
		}
	};
}
