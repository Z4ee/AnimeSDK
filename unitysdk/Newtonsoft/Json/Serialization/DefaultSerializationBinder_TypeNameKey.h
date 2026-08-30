#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AAA580)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AAA570)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AAA470)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultSerializationBinder_TypeNameKey_TypeDefinitionIndex = 9657;

	struct alignas(8) DefaultSerializationBinder_TypeNameKey
	{
		::System::String* AssemblyName; // 0x10
		::System::String* TypeName; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
