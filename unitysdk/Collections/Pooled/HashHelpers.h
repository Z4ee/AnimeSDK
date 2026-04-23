#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define COLLECTIONS_POOLED_HASHHELPERS_EXPANDPRIME_OFFSET UNITYSDK_OFFSET(0x17AD5E70)
#define COLLECTIONS_POOLED_HASHHELPERS_GETPRIME_OFFSET UNITYSDK_OFFSET(0x17AD5D40)
#define COLLECTIONS_POOLED_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x17AD5C00)
#define COLLECTIONS_POOLED_HASHHELPERS_ISPRIME_OFFSET UNITYSDK_OFFSET(0x17AD5CC0)
#define COLLECTIONS_POOLED_HASHHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AD5E90)

namespace Collections::Pooled
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 5315;

	class HashHelpers : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet_s_serializationInfoTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x3B0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_Primes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x3B8);
		}
		// static const ::System::Int32 HashCollisionThreshold = 0x64; // 0x0
		// static const ::System::Int32 MaxPrimeArrayLength = 0x7FEFFFFD; // 0x0
		// static const ::System::Int32 HashPrime = 0x65; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable()
		{
			return ((::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET))();
		}

		static ::System::Boolean IsPrime(::System::Int32 candidate)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_ISPRIME_OFFSET))(candidate);
		}

		static ::System::Int32 GetPrime(::System::Int32 min)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_GETPRIME_OFFSET))(min);
		}

		static ::System::Int32 ExpandPrime(::System::Int32 oldSize)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_EXPANDPRIME_OFFSET))(oldSize);
		}
	};
}
