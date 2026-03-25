#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/FloatFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1643FD20)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1643FCE0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET UNITYSDK_OFFSET(0x1643F3D0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET UNITYSDK_OFFSET(0x1643F0F0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET UNITYSDK_OFFSET(0x1643F1C0)
#define NEWTONSOFT_JSON_JSONCONVERT_GETDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1643EE60)
#define NEWTONSOFT_JSON_JSONCONVERT_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1643EBF0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1643F810)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1643F6B0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1643F650)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1643F740)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET UNITYSDK_OFFSET(0x1643FAC0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1643F5F0)
#define NEWTONSOFT_JSON_JSONCONVERT_SET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1643EC20)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1643EED0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1643F060)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1643F340)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1643F440)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1643EFD0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1643F500)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1643F540)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1643EE90)
#define NEWTONSOFT_JSON_JSONCONVERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1643EC60)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConvert_TypeDefinitionIndex = 8220;

	class JsonConvert : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NegativeInfinity()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x17FD0);
		}
		static ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>** StaticGet__DefaultSettings_k__BackingField()
		{
			return (::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x17FD8);
		}
		static ::System::String** StaticGet_False()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x17FE0);
		}
		static ::System::String** StaticGet_Undefined()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x17FE8);
		}
		static ::System::String** StaticGet_NaN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x17FF0);
		}
		static ::System::String** StaticGet_Null()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x17FF8);
		}
		static ::Newtonsoft::Json::JsonSerializerSettings** StaticGet_InitialSerializerSettings()
		{
			return (::Newtonsoft::Json::JsonSerializerSettings**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x18000);
		}
		static ::System::String** StaticGet_True()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x18008);
		}
		static ::System::String** StaticGet_PositiveInfinity()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x18010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT__CCTOR_OFFSET))();
		}

		static ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings()
		{
			return ((::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_GET_DEFAULTSETTINGS_OFFSET))();
		}

		static ::System::Void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value)
		{
			return ((::System::Void(*)(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SET_DEFAULTSETTINGS_OFFSET))(value);
		}

		static ::Newtonsoft::Json::JsonSerializerSettings* GetDefaultSettings()
		{
			return ((::Newtonsoft::Json::JsonSerializerSettings*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_GETDEFAULTSETTINGS_OFFSET))();
		}

		static ::System::String* ToString(::System::Boolean value)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET))(value);
		}

		static ::System::String* ToString_1(::System::Char value)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET))(value);
		}

		static ::System::String* ToString_2(::System::Single value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, ::System::Char quoteChar, ::System::Boolean nullable)
		{
			return ((::System::String*(*)(::System::Single, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET))(value, floatFormatHandling, quoteChar, nullable);
		}

		static ::System::String* EnsureFloatFormat(::System::Double value, ::System::String* text, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, ::System::Char quoteChar, ::System::Boolean nullable)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET))(value, text, floatFormatHandling, quoteChar, nullable);
		}

		static ::System::String* ToString_3(::System::Double value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, ::System::Char quoteChar, ::System::Boolean nullable)
		{
			return ((::System::String*(*)(::System::Double, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET))(value, floatFormatHandling, quoteChar, nullable);
		}

		static ::System::String* EnsureDecimalPlace(::System::Double value, ::System::String* text)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET))(value, text);
		}

		static ::System::String* EnsureDecimalPlace_1(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET))(text);
		}

		static ::System::String* ToString_4(::System::Decimal value)
		{
			return ((::System::String*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET))(value);
		}

		static ::System::String* ToString_6(::System::String* value, ::System::Char delimiter)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET))(value, delimiter);
		}

		static ::System::String* ToString_7(::System::String* value, ::System::Char delimiter, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET))(value, delimiter, stringEscapeHandling);
		}

		static ::System::String* SerializeObject(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET))(value);
		}

		static ::System::String* SerializeObject_1(::System::Object* value, ::Newtonsoft::Json::Formatting formatting)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET))(value, formatting);
		}

		static ::System::String* SerializeObject_2(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET))(value, type, settings);
		}

		static ::System::String* SerializeObject_3(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET))(value, formatting, settings);
		}

		static ::System::String* SerializeObject_4(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET))(value, type, formatting, settings);
		}

		static ::System::String* SerializeObjectInternal(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET))(value, type, jsonSerializer);
		}

		static ::System::Object* DeserializeObject(::System::String* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET))(value, type);
		}

		static ::System::Object* DeserializeObject_1(::System::String* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_1_OFFSET))(value, type, settings);
		}
	};
}
