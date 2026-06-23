#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEqualityComparer; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_EXPANDPRIME_OFFSET UNITYSDK_OFFSET(0x1DE330B0)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETENTROPY_OFFSET UNITYSDK_OFFSET(0x1DE33500)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETEQUALITYCOMPARERFORSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DE333D0)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETMINPRIME_OFFSET UNITYSDK_OFFSET(0x1DE33000)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETPRIME_OFFSET UNITYSDK_OFFSET(0x1DE32D90)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETRANDOMIZEDEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1DE331F0)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x1DE32B60)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_ISPRIME_OFFSET UNITYSDK_OFFSET(0x1DE32CE0)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS_ISWELLKNOWNEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1DE33150)
#define FOUNDATION_DATASTRUCTURES_HASHHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE337C0)

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 7778;

	class HashHelpers : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x7120);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_data()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x7128);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_primes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x7130);
		}
		static ::System::Object** StaticGet_lockObj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x7138);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet_s_SerializationInfoTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x7140);
		}
		static ::System::Int32* StaticGet_currentIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x3810);
		}
		// static const ::System::Int32 HashCollisionThreshold = 0x64; // 0x0
		// static const ::System::Int32 MaxPrimeArrayLength = 0x7FEFFFFD; // 0x0
		// static const ::System::Int32 bufferSize = 0x400; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable()
		{
			return ((::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET))();
		}

		static ::System::Boolean IsPrime(::System::Int32 candidate)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_ISPRIME_OFFSET))(candidate);
		}

		static ::System::Int32 GetPrime(::System::Int32 min)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETPRIME_OFFSET))(min);
		}

		static ::System::Int32 GetMinPrime()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETMINPRIME_OFFSET))();
		}

		static ::System::Int32 ExpandPrime(::System::Int32 oldSize)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_EXPANDPRIME_OFFSET))(oldSize);
		}

		static ::System::Boolean IsWellKnownEqualityComparer(::System::Object* comparer)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_ISWELLKNOWNEQUALITYCOMPARER_OFFSET))(comparer);
		}

		static ::System::Collections::IEqualityComparer* GetRandomizedEqualityComparer(::System::Object* comparer)
		{
			return ((::System::Collections::IEqualityComparer*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETRANDOMIZEDEQUALITYCOMPARER_OFFSET))(comparer);
		}

		static ::System::Object* GetEqualityComparerForSerialization(::System::Object* comparer)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETEQUALITYCOMPARERFORSERIALIZATION_OFFSET))(comparer);
		}

		static ::System::Int64 GetEntropy()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DATASTRUCTURES_HASHHELPERS_GETENTROPY_OFFSET))();
		}
	};
}
