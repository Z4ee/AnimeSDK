#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA5E690)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA5E680)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA5E580)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultSerializationBinder_TypeNameKey_TypeDefinitionIndex = 7109;

	struct alignas(8) DefaultSerializationBinder_TypeNameKey
	{
		::System::String* AssemblyName; // 0x10
		::System::String* TypeName; // 0x18

		::System::Void _ctor(::System::String* assemblyName, ::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY__CTOR_OFFSET))(this, assemblyName, typeName);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::DefaultSerializationBinder_TypeNameKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_TYPENAMEKEY_EQUALS_1_OFFSET))(this, other);
		}
	};
}
