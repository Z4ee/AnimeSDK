#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization::Utilities { template <typename T> class Cache_1; }
namespace System::IO { class MemoryStream; }

#define SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_CLAIM_1_OFFSET UNITYSDK_OFFSET(0x1F44E370)
#define SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_CLAIM_OFFSET UNITYSDK_OFFSET(0x1F44E160)
#define SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_GET_MEMORYSTREAM_OFFSET UNITYSDK_OFFSET(0x1F44DE90)
#define SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_ONCLAIMED_OFFSET UNITYSDK_OFFSET(0x1F44E0F0)
#define SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_ONFREED_OFFSET UNITYSDK_OFFSET(0x1F44DFA0)
#define SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F44E5B0)
#define SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F44DF20)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CachedMemoryStream_TypeDefinitionIndex = 7499;

	class CachedMemoryStream : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_InitialCapacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CachedMemoryStream_TypeDefinitionIndex)->GetStaticField(0x3340);
		}
		static ::System::Int32* StaticGet_MaxCapacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CachedMemoryStream_TypeDefinitionIndex)->GetStaticField(0x3344);
		}
		::System::IO::MemoryStream* memoryStream; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM__CCTOR_OFFSET))();
		}

		::System::IO::MemoryStream* get_MemoryStream()
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_GET_MEMORYSTREAM_OFFSET))(this);
		}

		::System::Void OnFreed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_ONFREED_OFFSET))(this);
		}

		::System::Void OnClaimed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_ONCLAIMED_OFFSET))(this);
		}

		static ::Sirenix::Serialization::Utilities::Cache_1<::Sirenix::Serialization::CachedMemoryStream*>* Claim(::System::Int32 minCapacity)
		{
			return ((::Sirenix::Serialization::Utilities::Cache_1<::Sirenix::Serialization::CachedMemoryStream*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_CLAIM_OFFSET))(minCapacity);
		}

		static ::Sirenix::Serialization::Utilities::Cache_1<::Sirenix::Serialization::CachedMemoryStream*>* Claim_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::Sirenix::Serialization::Utilities::Cache_1<::Sirenix::Serialization::CachedMemoryStream*>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CACHEDMEMORYSTREAM_CLAIM_1_OFFSET))(bytes);
		}
	};
}
