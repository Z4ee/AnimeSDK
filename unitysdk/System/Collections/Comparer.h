#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_COMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B89DE90)
#define SYSTEM_COLLECTIONS_COMPARER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1B89E0C0)
#define SYSTEM_COLLECTIONS_COMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B89E160)
#define SYSTEM_COLLECTIONS_COMPARER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B89DC30)
#define SYSTEM_COLLECTIONS_COMPARER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B89DCB0)
#define SYSTEM_COLLECTIONS_COMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89DC20)

namespace System::Collections
{
	inline static constexpr unsigned int Comparer_TypeDefinitionIndex = 1455;

	class Comparer : public ::System::Object
	{
	public:
		static ::System::Collections::Comparer** StaticGet_Default()
		{
			return (::System::Collections::Comparer**)Il2CppClass::FromTypeDefinitionIndex(Comparer_TypeDefinitionIndex)->GetStaticField(0x610);
		}
		static ::System::Collections::Comparer** StaticGet_DefaultInvariant()
		{
			return (::System::Collections::Comparer**)Il2CppClass::FromTypeDefinitionIndex(Comparer_TypeDefinitionIndex)->GetStaticField(0x618);
		}
		::System::Globalization::CompareInfo* m_compareInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER__CTOR_1_OFFSET))(this, culture);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER__CTOR_2_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER_COMPARE_OFFSET))(this, a, b);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
