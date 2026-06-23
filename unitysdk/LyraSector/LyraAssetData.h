#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CompressionType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define LYRASECTOR_LYRAASSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C997020)

namespace LyraSector
{
	inline static constexpr unsigned int LyraAssetData_TypeDefinitionIndex = 26720;

	class LyraAssetData : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Byte>* m_CompressedData; // 0x18
		::UnityEngine::CompressionType m_CompressType; // 0x20
		::System::Int32 m_DecompressedDataSize; // 0x24
		::System::Int32 m_DistanceFieldBlockNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAASSETDATA__CTOR_OFFSET))(this);
		}
	};
}
