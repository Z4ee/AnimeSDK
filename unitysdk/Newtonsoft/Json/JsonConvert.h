#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DateFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/DateTimeZoneHandling.h"
#include "unitysdk/Newtonsoft/Json/FloatFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System { struct Enum; }
namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1E468CC0)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1E468D20)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1E468D90)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_4_OFFSET UNITYSDK_OFFSET(0x1E468A00)
#define NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E4689A0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET UNITYSDK_OFFSET(0x1E4668C0)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET UNITYSDK_OFFSET(0x1E466470)
#define NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET UNITYSDK_OFFSET(0x1E4665F0)
#define NEWTONSOFT_JSON_JSONCONVERT_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E465B20)
#define NEWTONSOFT_JSON_JSONCONVERT_POPULATEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1E468F00)
#define NEWTONSOFT_JSON_JSONCONVERT_POPULATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E468E90)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E4686D0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1E468110)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1E468270)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET UNITYSDK_OFFSET(0x1E4683D0)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET UNITYSDK_OFFSET(0x1E468600)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_5_OFFSET UNITYSDK_OFFSET(0x1E468080)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_6_OFFSET UNITYSDK_OFFSET(0x1E468170)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_7_OFFSET UNITYSDK_OFFSET(0x1E468550)
#define NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E467FE0)
#define NEWTONSOFT_JSON_JSONCONVERT_SET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E465B80)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_10_OFFSET UNITYSDK_OFFSET(0x1E466350)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_11_OFFSET UNITYSDK_OFFSET(0x1E466380)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_12_OFFSET UNITYSDK_OFFSET(0x1E4663B0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_13_OFFSET UNITYSDK_OFFSET(0x1E4663E0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_14_OFFSET UNITYSDK_OFFSET(0x1E466540)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_15_OFFSET UNITYSDK_OFFSET(0x1E466790)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_16_OFFSET UNITYSDK_OFFSET(0x1E466810)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_17_OFFSET UNITYSDK_OFFSET(0x1E466930)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_18_OFFSET UNITYSDK_OFFSET(0x1E466960)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_19_OFFSET UNITYSDK_OFFSET(0x1E466990)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E465C40)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_20_OFFSET UNITYSDK_OFFSET(0x1E466A70)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_21_OFFSET UNITYSDK_OFFSET(0x1E466BC0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_22_OFFSET UNITYSDK_OFFSET(0x1E466C90)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_23_OFFSET UNITYSDK_OFFSET(0x1E466CF0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_24_OFFSET UNITYSDK_OFFSET(0x1E466E60)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_25_OFFSET UNITYSDK_OFFSET(0x1E466F10)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_26_OFFSET UNITYSDK_OFFSET(0x1E466160)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_27_OFFSET UNITYSDK_OFFSET(0x1E466E00)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_28_OFFSET UNITYSDK_OFFSET(0x1E466FD0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_29_OFFSET UNITYSDK_OFFSET(0x1E467080)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1E465E70)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1E465ED0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1E466020)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1E466090)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1E466270)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1E4662C0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_8_OFFSET UNITYSDK_OFFSET(0x1E4662F0)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_9_OFFSET UNITYSDK_OFFSET(0x1E466320)
#define NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E465BE0)
#define NEWTONSOFT_JSON_JSONCONVERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4691D0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConvert_TypeDefinitionIndex = 6991;

	class JsonConvert : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NegativeInfinity()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5DD0);
		}
		static ::System::String** StaticGet_False()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5DD8);
		}
		static ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>** StaticGet__DefaultSettings_k__BackingField()
		{
			return (::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5DE0);
		}
		static ::System::String** StaticGet_PositiveInfinity()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5DE8);
		}
		static ::System::String** StaticGet_NaN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5DF0);
		}
		static ::System::String** StaticGet_Null()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5DF8);
		}
		static ::System::String** StaticGet_True()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5E00);
		}
		static ::System::String** StaticGet_Undefined()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JsonConvert_TypeDefinitionIndex)->GetStaticField(0x5E08);
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

		static ::System::String* ToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_OFFSET))(value);
		}

		static ::System::String* ToString_1(::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling)
		{
			return ((::System::String*(*)(::System::DateTime, ::Newtonsoft::Json::DateFormatHandling, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_1_OFFSET))(value, format, timeZoneHandling);
		}

		static ::System::String* ToString_2(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_2_OFFSET))(value);
		}

		static ::System::String* ToString_3(::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format)
		{
			return ((::System::String*(*)(::System::DateTimeOffset, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_3_OFFSET))(value, format);
		}

		static ::System::String* ToString_4(::System::Boolean value)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_4_OFFSET))(value);
		}

		static ::System::String* ToString_5(::System::Char value)
		{
			return ((::System::String*(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_5_OFFSET))(value);
		}

		static ::System::String* ToString_6(::System::Enum* value)
		{
			return ((::System::String*(*)(::System::Enum*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_6_OFFSET))(value);
		}

		static ::System::String* ToString_7(::System::Int32 value)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_7_OFFSET))(value);
		}

		static ::System::String* ToString_8(::System::Int16 value)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_8_OFFSET))(value);
		}

		static ::System::String* ToString_9(::System::UInt16 value)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_9_OFFSET))(value);
		}

		static ::System::String* ToString_10(::System::UInt32 value)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_10_OFFSET))(value);
		}

		static ::System::String* ToString_11(::System::Int64 value)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_11_OFFSET))(value);
		}

		static ::System::String* ToString_12(::System::UInt64 value)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_12_OFFSET))(value);
		}

		static ::System::String* ToString_13(::System::Single value)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_13_OFFSET))(value);
		}

		static ::System::String* ToString_14(::System::Single value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, ::System::Char quoteChar, ::System::Boolean nullable)
		{
			return ((::System::String*(*)(::System::Single, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_14_OFFSET))(value, floatFormatHandling, quoteChar, nullable);
		}

		static ::System::String* EnsureFloatFormat(::System::Double value, ::System::String* text, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, ::System::Char quoteChar, ::System::Boolean nullable)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREFLOATFORMAT_OFFSET))(value, text, floatFormatHandling, quoteChar, nullable);
		}

		static ::System::String* ToString_15(::System::Double value)
		{
			return ((::System::String*(*)(::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_15_OFFSET))(value);
		}

		static ::System::String* ToString_16(::System::Double value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, ::System::Char quoteChar, ::System::Boolean nullable)
		{
			return ((::System::String*(*)(::System::Double, ::Newtonsoft::Json::FloatFormatHandling, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_16_OFFSET))(value, floatFormatHandling, quoteChar, nullable);
		}

		static ::System::String* EnsureDecimalPlace(::System::Double value, ::System::String* text)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_OFFSET))(value, text);
		}

		static ::System::String* EnsureDecimalPlace_1(::System::String* text)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_ENSUREDECIMALPLACE_1_OFFSET))(text);
		}

		static ::System::String* ToString_17(::System::Byte value)
		{
			return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_17_OFFSET))(value);
		}

		static ::System::String* ToString_18(::System::SByte value)
		{
			return ((::System::String*(*)(::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_18_OFFSET))(value);
		}

		static ::System::String* ToString_19(::System::Decimal value)
		{
			return ((::System::String*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_19_OFFSET))(value);
		}

		static ::System::String* ToString_20(::System::Guid value)
		{
			return ((::System::String*(*)(::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_20_OFFSET))(value);
		}

		static ::System::String* ToString_21(::System::Guid value, ::System::Char quoteChar)
		{
			return ((::System::String*(*)(::System::Guid, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_21_OFFSET))(value, quoteChar);
		}

		static ::System::String* ToString_22(::System::TimeSpan value)
		{
			return ((::System::String*(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_22_OFFSET))(value);
		}

		static ::System::String* ToString_23(::System::TimeSpan value, ::System::Char quoteChar)
		{
			return ((::System::String*(*)(::System::TimeSpan, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_23_OFFSET))(value, quoteChar);
		}

		static ::System::String* ToString_24(::System::Uri* value)
		{
			return ((::System::String*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_24_OFFSET))(value);
		}

		static ::System::String* ToString_25(::System::Uri* value, ::System::Char quoteChar)
		{
			return ((::System::String*(*)(::System::Uri*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_25_OFFSET))(value, quoteChar);
		}

		static ::System::String* ToString_26(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_26_OFFSET))(value);
		}

		static ::System::String* ToString_27(::System::String* value, ::System::Char delimiter)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_27_OFFSET))(value, delimiter);
		}

		static ::System::String* ToString_28(::System::String* value, ::System::Char delimiter, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_28_OFFSET))(value, delimiter, stringEscapeHandling);
		}

		static ::System::String* ToString_29(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_TOSTRING_29_OFFSET))(value);
		}

		static ::System::String* SerializeObject(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_OFFSET))(value);
		}

		static ::System::String* SerializeObject_1(::System::Object* value, ::Newtonsoft::Json::Formatting formatting)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_1_OFFSET))(value, formatting);
		}

		static ::System::String* SerializeObject_2(::System::Object* value, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::String*(*)(::System::Object*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_2_OFFSET))(value, converters);
		}

		static ::System::String* SerializeObject_3(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_3_OFFSET))(value, formatting, converters);
		}

		static ::System::String* SerializeObject_4(::System::Object* value, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_4_OFFSET))(value, settings);
		}

		static ::System::String* SerializeObject_5(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_5_OFFSET))(value, type, settings);
		}

		static ::System::String* SerializeObject_6(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::String*(*)(::System::Object*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_6_OFFSET))(value, formatting, settings);
		}

		static ::System::String* SerializeObject_7(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::Formatting, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECT_7_OFFSET))(value, type, formatting, settings);
		}

		static ::System::String* SerializeObjectInternal(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Type*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_SERIALIZEOBJECTINTERNAL_OFFSET))(value, type, jsonSerializer);
		}

		static ::System::Object* DeserializeObject(::System::String* value)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_OFFSET))(value);
		}

		static ::System::Object* DeserializeObject_1(::System::String* value, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::Object*(*)(::System::String*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_1_OFFSET))(value, settings);
		}

		static ::System::Object* DeserializeObject_2(::System::String* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_2_OFFSET))(value, type);
		}

		static ::System::Object* DeserializeObject_3(::System::String* value, ::System::Type* type, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_3_OFFSET))(value, type, converters);
		}

		static ::System::Object* DeserializeObject_4(::System::String* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_DESERIALIZEOBJECT_4_OFFSET))(value, type, settings);
		}

		static ::System::Void PopulateObject(::System::String* value, ::System::Object* target)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_POPULATEOBJECT_OFFSET))(value, target);
		}

		static ::System::Void PopulateObject_1(::System::String* value, ::System::Object* target, ::Newtonsoft::Json::JsonSerializerSettings* settings)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::Newtonsoft::Json::JsonSerializerSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERT_POPULATEOBJECT_1_OFFSET))(value, target, settings);
		}
	};
}
