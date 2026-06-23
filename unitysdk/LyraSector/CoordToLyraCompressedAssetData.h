#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/UnityEngine/Rendering/SerializedDictionary_2.h"

namespace LyraSector { class LyraPackedAssetSectorData; }

#define LYRASECTOR_COORDTOLYRACOMPRESSEDASSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0669F0)

namespace LyraSector
{
	inline static constexpr unsigned int CoordToLyraCompressedAssetData_TypeDefinitionIndex = 26737;

	class CoordToLyraCompressedAssetData : public ::UnityEngine::Rendering::SerializedDictionary_2<::LyraSector::LyraSectorCoord, ::LyraSector::LyraPackedAssetSectorData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_COORDTOLYRACOMPRESSEDASSETDATA__CTOR_OFFSET))(this);
		}
	};
}
