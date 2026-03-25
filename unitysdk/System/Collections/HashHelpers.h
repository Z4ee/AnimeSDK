#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_HASHHELPERS_EXPANDPRIME_OFFSET UNITYSDK_OFFSET(0x161C86C0)
#define SYSTEM_COLLECTIONS_HASHHELPERS_GETPRIME_OFFSET UNITYSDK_OFFSET(0x161C8580)
#define SYSTEM_COLLECTIONS_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x161C8440)
#define SYSTEM_COLLECTIONS_HASHHELPERS_ISPRIME_OFFSET UNITYSDK_OFFSET(0x161C8500)
#define SYSTEM_COLLECTIONS_HASHHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x161C86E0)

namespace System::Collections
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 1467;

	class HashHelpers : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_primes()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x1970);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet_s_SerializationInfoTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)Il2CppClass::FromTypeDefinitionIndex(HashHelpers_TypeDefinitionIndex)->GetStaticField(0x1978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable()
		{
			return ((::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET))();
		}

		static ::System::Boolean IsPrime(::System::Int32 candidate)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_ISPRIME_OFFSET))(candidate);
		}

		static ::System::Int32 GetPrime(::System::Int32 min)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_GETPRIME_OFFSET))(min);
		}

		static ::System::Int32 ExpandPrime(::System::Int32 oldSize)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHHELPERS_EXPANDPRIME_OFFSET))(oldSize);
		}
	};
}
