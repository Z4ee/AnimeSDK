#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define COLLECTIONS_POOLED_HASHHELPERS_EXPANDPRIME_OFFSET UNITYSDK_OFFSET(0x1BF12C80)
#define COLLECTIONS_POOLED_HASHHELPERS_GETPRIME_OFFSET UNITYSDK_OFFSET(0x1BF12B50)
#define COLLECTIONS_POOLED_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x1BF12A10)
#define COLLECTIONS_POOLED_HASHHELPERS_ISPRIME_OFFSET UNITYSDK_OFFSET(0x1BF12AD0)
#define COLLECTIONS_POOLED_HASHHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF12CA0)

namespace Collections::Pooled
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 5083;

	class HashHelpers : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet_s_serializationInfoTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x220);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_Primes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x228);
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

		static ::System::Boolean IsPrime(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_ISPRIME_OFFSET))(a1);
		}

		static ::System::Int32 GetPrime(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_GETPRIME_OFFSET))(a1);
		}

		static ::System::Int32 ExpandPrime(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_HASHHELPERS_EXPANDPRIME_OFFSET))(a1);
		}
	};
}
