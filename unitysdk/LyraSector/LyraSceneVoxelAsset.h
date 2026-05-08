#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraAssetData.h"

#define LYRASECTOR_LYRASCENEVOXELASSET_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x1AB811A0)
#define LYRASECTOR_LYRASCENEVOXELASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB81140)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSceneVoxelAsset_TypeDefinitionIndex = 29681;

	class LyraSceneVoxelAsset : public ::LyraSector::LyraAssetData
	{
	public:
		::System::Int32 m_EmissionNodeArrayOffset; // 0x30
		::System::Int32 m_EmissionPlatteOffset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASCENEVOXELASSET__CTOR_OFFSET))(this);
		}

		::System::Void SetOffset(::System::Int32 emissionNodeArrayOffset, ::System::Int32 emissionPlatteOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASCENEVOXELASSET_SETOFFSET_OFFSET))(this, emissionNodeArrayOffset, emissionPlatteOffset);
		}
	};
}
