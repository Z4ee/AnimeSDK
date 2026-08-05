#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JToken.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/TypeCode.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }

#define NEWTONSOFT_JSON_LINQ_JVALUE_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x1F7FE740)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPAREFLOAT_OFFSET UNITYSDK_OFFSET(0x1F7FE410)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1F7FF620)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F7FDD50)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x1F7FE7F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATENULL_OFFSET UNITYSDK_OFFSET(0x1F7FE910)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x1F7FE880)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1F7FE9A0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x1F7FDC60)
#define NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7FF320)
#define NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7FF2D0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7FF290)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7FF3C0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETSTRINGVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1F7FEA30)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1F7FD9B0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_HASVALUES_OFFSET UNITYSDK_OFFSET(0x1F7FDD40)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F7FEA60)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F7FEA70)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F7FEA80)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1F7FF5A0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1F7FF640)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1F7FF730)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1F7FF850)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1F7FF790)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1F7FFC20)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1F7FFBB0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1F7FFB50)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x1F7FF8B0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x1F7FF970)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x1F7FFA30)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1F7FF7F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1F7FFAF0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x1F7FFC80)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1F7FF910)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1F7FF9D0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1F7FFA90)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1F7FF420)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1F7FF590)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1F7FF450)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7FF3F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_VALUESEQUALS_OFFSET UNITYSDK_OFFSET(0x1F7FDCF0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7FEB00)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1F7FD680)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_11_OFFSET UNITYSDK_OFFSET(0x1F7FD720)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_12_OFFSET UNITYSDK_OFFSET(0x1F7FD780)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_13_OFFSET UNITYSDK_OFFSET(0x1F7FD800)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_14_OFFSET UNITYSDK_OFFSET(0x1F7FD8C0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_15_OFFSET UNITYSDK_OFFSET(0x1F7FD940)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7FD170)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F7FD1E0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F7FD280)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F7FD320)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F7FD3A0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1F7FD440)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1F7FD4C0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1F7FD560)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1F7FD5E0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FD110)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JValue_TypeDefinitionIndex = 7199;

	class JValue : public ::Newtonsoft::Json::Linq::JToken
	{
	public:
		::System::Object* _value; // 0x30
		::Newtonsoft::Json::Linq::JTokenType _valueType; // 0x38

		::System::Void _ctor(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JTokenType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_OFFSET))(this, value, type);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_5_OFFSET))(this, value);
		}

		::System::Void _ctor_6(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_6_OFFSET))(this, value);
		}

		::System::Void _ctor_7(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_7_OFFSET))(this, value);
		}

		::System::Void _ctor_8(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_8_OFFSET))(this, value);
		}

		::System::Void _ctor_9(::System::DateTimeOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_9_OFFSET))(this, value);
		}

		::System::Void _ctor_10(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_10_OFFSET))(this, value);
		}

		::System::Void _ctor_11(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_11_OFFSET))(this, value);
		}

		::System::Void _ctor_12(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_12_OFFSET))(this, value);
		}

		::System::Void _ctor_13(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_13_OFFSET))(this, value);
		}

		::System::Void _ctor_14(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_14_OFFSET))(this, value);
		}

		::System::Void _ctor_15(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_15_OFFSET))(this, value);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_DEEPEQUALS_OFFSET))(this, node);
		}

		::System::Boolean get_HasValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_HASVALUES_OFFSET))(this);
		}

		static ::System::Int32 Compare(::Newtonsoft::Json::Linq::JTokenType valueType, ::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Linq::JTokenType, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPARE_OFFSET))(valueType, objA, objB);
		}

		static ::System::Int32 CompareFloat(::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPAREFLOAT_OFFSET))(objA, objB);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CLONETOKEN_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateComment(::System::String* value)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATECOMMENT_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateString(::System::String* value)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATESTRING_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateNull()
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATENULL_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateUndefined()
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATEUNDEFINED_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current, ::System::Object* value)
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETVALUETYPE_OFFSET))(current, value);
		}

		static ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current)
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETSTRINGVALUETYPE_OFFSET))(current);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_TYPE_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_WRITETO_OFFSET))(this, writer, converters);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean ValuesEquals(::Newtonsoft::Json::Linq::JValue* v1, ::Newtonsoft::Json::Linq::JValue* v2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_VALUESEQUALS_OFFSET))(v1, v2);
		}

		::System::Boolean Equals(::Newtonsoft::Json::Linq::JValue* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_2_OFFSET))(this, formatProvider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_3_OFFSET))(this, format, formatProvider);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 CompareTo(::Newtonsoft::Json::Linq::JValue* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPARETO_OFFSET))(this, obj);
		}

		::System::TypeCode System_IConvertible_GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, provider);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, provider);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, provider);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, provider);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, provider);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, provider);
		}

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, provider);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* conversionType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, conversionType, provider);
		}
	};
}
