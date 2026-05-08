#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CompressionType.h"

namespace LyraSector { class LyraSparseTreeBakedData; }

#define LYRASECTOR_LYRASECTORCOMPRESSION_DECODEDISTANCEFIELDBLOCKS_1_OFFSET UNITYSDK_OFFSET(0x19A9CC40)
#define LYRASECTOR_LYRASECTORCOMPRESSION_DECODEDISTANCEFIELDBLOCKS_OFFSET UNITYSDK_OFFSET(0x19A9CB50)
#define LYRASECTOR_LYRASECTORCOMPRESSION_DECOMPRESSMEMORY_OFFSET UNITYSDK_OFFSET(0x19A9C8A0)
#define LYRASECTOR_LYRASECTORCOMPRESSION_DECOMPRESSSECTOR_OFFSET UNITYSDK_OFFSET(0x19A9C950)
#define LYRASECTOR_LYRASECTORCOMPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9CD20)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorCompression_TypeDefinitionIndex = 29694;

	class LyraSectorCompression : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOMPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Boolean DecompressMemory(::UnityEngine::CompressionType type, ::Il2CppArray<::System::Byte>* compressed, ::System::Int64 compressedSize, ::Il2CppArray<::System::Byte>* uncompressed, ::System::Int64 uncompressedSize)
		{
			return ((::System::Boolean(*)(::UnityEngine::CompressionType, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOMPRESSION_DECOMPRESSMEMORY_OFFSET))(type, compressed, compressedSize, uncompressed, uncompressedSize);
		}

		static ::System::Boolean DecompressSector(::UnityEngine::CompressionType type, ::System::Int32 decompressedDataSize, ::System::Int32 distanceFieldBlockNum, ::Il2CppArray<::System::Byte>* compressedData, ::LyraSector::LyraSparseTreeBakedData*& bakedData)
		{
			return ((::System::Boolean(*)(::UnityEngine::CompressionType, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::LyraSector::LyraSparseTreeBakedData*&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOMPRESSION_DECOMPRESSSECTOR_OFFSET))(type, decompressedDataSize, distanceFieldBlockNum, compressedData, bakedData);
		}

		static ::System::Void DecodeDistanceFieldBlocks(::Il2CppArray<::System::Byte>* encodedDistanceFieldData, ::Il2CppArray<::System::Byte>* decodedDistanceFieldData)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOMPRESSION_DECODEDISTANCEFIELDBLOCKS_OFFSET))(encodedDistanceFieldData, decodedDistanceFieldData);
		}

		static ::System::Void DecodeDistanceFieldBlocks_1(::Il2CppArray<::System::Byte>* encodedDistanceFieldData, ::System::Int32 encodedDataOffset, ::Il2CppArray<::System::Byte>* decodedDistanceFieldData, ::System::Int32 decodedDataOffset, ::System::Int32 blockNum, ::System::Boolean withCheck, ::System::Boolean& result)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOMPRESSION_DECODEDISTANCEFIELDBLOCKS_1_OFFSET))(encodedDistanceFieldData, encodedDataOffset, decodedDistanceFieldData, decodedDataOffset, blockNum, withCheck, result);
		}
	};
}
