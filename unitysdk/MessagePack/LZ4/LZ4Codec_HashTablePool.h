#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_LZ4_LZ4CODEC_HASHTABLEPOOL_GETUINTHASHTABLEPOOL_OFFSET UNITYSDK_OFFSET(0x15D64600)
#define MESSAGEPACK_LZ4_LZ4CODEC_HASHTABLEPOOL_GETUSHORTHASHTABLEPOOL_OFFSET UNITYSDK_OFFSET(0x15D63690)

namespace MessagePack::LZ4
{
	inline static constexpr unsigned int LZ4Codec_HashTablePool_TypeDefinitionIndex = 9134;

	class LZ4Codec_HashTablePool : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_uintPool()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_HashTablePool_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::UInt16>** StaticGet_ushortPool()
		{
			return (::Il2CppArray<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_HashTablePool_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::Il2CppArray<::System::UInt16>* GetUShortHashTablePool()
		{
			return ((::Il2CppArray<::System::UInt16>*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_HASHTABLEPOOL_GETUSHORTHASHTABLEPOOL_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* GetUIntHashTablePool()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_HASHTABLEPOOL_GETUINTHASHTABLEPOOL_OFFSET))();
		}
	};
}
