#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CompressionType.h"

#define LYRASECTOR_LYRAPACKEDASSETSECTORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EB430)

namespace LyraSector
{
	inline static constexpr unsigned int LyraPackedAssetSectorData_TypeDefinitionIndex = 29676;

	class LyraPackedAssetSectorData : public ::System::Object
	{
	public:
		::UnityEngine::CompressionType m_CompressType; // 0x10
		::Il2CppArray<::System::Byte>* m_CompressedData; // 0x18
		::System::Int32 m_DecompressedDataSize; // 0x20
		::System::Int32 m_DistanceFieldBlockNum; // 0x24
		::System::Int32 m_EmissionNodeArrayOffset; // 0x28
		::System::Int32 m_EmissionPlatteOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETSECTORDATA__CTOR_OFFSET))(this);
		}
	};
}
