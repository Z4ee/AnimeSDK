#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Internal/ByteArrayStringHashTable_Entry.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D05B510)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1D05AD80)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_BYTEARRAYGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D05BDC0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_CALCULATECAPACITY_OFFSET UNITYSDK_OFFSET(0x1D05AD40)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D05BF90)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D05BFE0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D05AEF0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUESLOW_OFFSET UNITYSDK_OFFSET(0x1D05BBF0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D05B9A0)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D05B770)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D05C030)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D05AC90)
#define MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05ABE0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ByteArrayStringHashTable_TypeDefinitionIndex = 30240;

	class ByteArrayStringHashTable : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Is32Bit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ByteArrayStringHashTable_TypeDefinitionIndex)->GetStaticField(0x7AB0);
		}
		::Il2CppArray<::Il2CppArray<::MessagePack::Internal::ByteArrayStringHashTable_Entry>*>* buckets; // 0x10
		::System::UInt64 indexFor; // 0x18

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_OFFSET))(this, capacity);
		}

		::System::Void _ctor_1(::System::Int32 capacity, ::System::Single loadFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CTOR_1_OFFSET))(this, capacity, loadFactor);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE__CCTOR_OFFSET))();
		}

		::System::Void Add(::System::String* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_OFFSET))(this, key, value);
		}

		::System::Void Add_1(::Il2CppArray<::System::Byte>* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_ADD_1_OFFSET))(this, key, value);
		}

		::System::Boolean TryAddInternal(::Il2CppArray<::System::Byte>* key, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYADDINTERNAL_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetValue(::System::Buffers::ReadOnlySequence_1<::System::Byte>& key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetValue_1(::System::ReadOnlySpan_1<::System::Byte> key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUE_1_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetValueSlow(::System::ReadOnlySpan_1<::System::Byte> key, ::Il2CppArray<::MessagePack::Internal::ByteArrayStringHashTable_Entry>* entry, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>, ::Il2CppArray<::MessagePack::Internal::ByteArrayStringHashTable_Entry>*, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_TRYGETVALUESLOW_OFFSET))(this, key, entry, value);
		}

		static ::System::UInt64 ByteArrayGetHashCode(::System::ReadOnlySpan_1<::System::Byte> x)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_BYTEARRAYGETHASHCODE_OFFSET))(x);
		}

		static ::System::Int32 CalculateCapacity(::System::Int32 collectionSize, ::System::Single loadFactor)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_CALCULATECAPACITY_OFFSET))(collectionSize, loadFactor);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BYTEARRAYSTRINGHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
