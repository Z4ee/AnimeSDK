#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFFE550)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1EFFE7B0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x1EFFE860)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFFE520)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1EFFE910)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFFE5E0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETNONRANDOMIZEDHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFFE700)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1EFFE4B0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1EFFE9D0)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFFEA20)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFFE500)
#define COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFFE4E0)

namespace Collections::Pooled
{
	inline static constexpr unsigned int NonRandomizedStringEqualityComparer_TypeDefinitionIndex = 5091;

	class NonRandomizedStringEqualityComparer : public ::System::Collections::Generic::EqualityComparer_1<::System::String*>
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::String*>** StaticGet__Default_k__BackingField()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NonRandomizedStringEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x230);
		}
		static ::System::Int32* StaticGet_s_empyStringHashCode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NonRandomizedStringEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x1A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::System::String*>* get_Default()
		{
			return ((::System::Collections::Generic::IEqualityComparer_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_1(::System::ReadOnlySpan_1<::System::Char> a1, ::System::ReadOnlySpan_1<::System::Char> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::String* a1, ::System::ReadOnlySpan_1<::System::Char> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_3(::System::ReadOnlySpan_1<::System::Char> a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>, ::System::String*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_EQUALS_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode_1(::System::ReadOnlySpan_1<::System::Char> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETHASHCODE_1_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 GetNonRandomizedHashCode(::System::ReadOnlySpan_1<::System::Char> a1)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_NONRANDOMIZEDSTRINGEQUALITYCOMPARER_GETNONRANDOMIZEDHASHCODE_OFFSET))(a1);
		}
	};
}
