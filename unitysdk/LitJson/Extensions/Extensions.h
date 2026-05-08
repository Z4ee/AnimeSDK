#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class JsonWriter; }
namespace System { class String; }
namespace System { class Type; }

#define LITJSON_EXTENSIONS_EXTENSIONS_HASIMPLEMENTEDRAWGENERIC_OFFSET UNITYSDK_OFFSET(0x19DB4EB0)
#define LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x19DB4E10)
#define LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_2_OFFSET UNITYSDK_OFFSET(0x19DB4E40)
#define LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_3_OFFSET UNITYSDK_OFFSET(0x19DB4E70)
#define LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19DB4DE0)

namespace LitJson::Extensions
{
	inline static constexpr unsigned int Extensions_TypeDefinitionIndex = 7899;

	class Extensions : public ::System::Object
	{
	public:
		static ::System::Void WriteProperty(::LitJson::JsonWriter* w, ::System::String* name, ::System::Int64 value)
		{
			return ((::System::Void(*)(::LitJson::JsonWriter*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_OFFSET))(w, name, value);
		}

		static ::System::Void WriteProperty_1(::LitJson::JsonWriter* w, ::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::LitJson::JsonWriter*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_1_OFFSET))(w, name, value);
		}

		static ::System::Void WriteProperty_2(::LitJson::JsonWriter* w, ::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::LitJson::JsonWriter*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_2_OFFSET))(w, name, value);
		}

		static ::System::Void WriteProperty_3(::LitJson::JsonWriter* w, ::System::String* name, ::System::Double value)
		{
			return ((::System::Void(*)(::LitJson::JsonWriter*, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + LITJSON_EXTENSIONS_EXTENSIONS_WRITEPROPERTY_3_OFFSET))(w, name, value);
		}

		static ::System::Boolean HasImplementedRawGeneric(::System::Type* type, ::System::Type* generic)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_EXTENSIONS_EXTENSIONS_HASIMPLEMENTEDRAWGENERIC_OFFSET))(type, generic);
		}
	};
}
