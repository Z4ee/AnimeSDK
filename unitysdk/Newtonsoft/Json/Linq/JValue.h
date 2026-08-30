#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JToken.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TypeCode.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_LINQ_JVALUE_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x172D2F10)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPAREFLOAT_OFFSET UNITYSDK_OFFSET(0x172D2D40)
#define NEWTONSOFT_JSON_LINQ_JVALUE_COMPARE_OFFSET UNITYSDK_OFFSET(0x172D2600)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x172CE720)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATENULL_OFFSET UNITYSDK_OFFSET(0x172CE780)
#define NEWTONSOFT_JSON_LINQ_JVALUE_CREATEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x172CE7E0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x172D2500)
#define NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x172D40F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x172D40A0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x172D4000)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x172D4190)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETSTRINGVALUETYPE_OFFSET UNITYSDK_OFFSET(0x172D2F90)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x172D2260)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_HASVALUES_OFFSET UNITYSDK_OFFSET(0x172D25F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x172D2FC0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x172D2FD0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x172D44D0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x172D4550)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x172D4670)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x172D4700)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x172D46A0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x172D4900)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x172D48B0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x172D4880)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x172D4730)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x172D4790)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x172D47F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x172D46D0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x172D4850)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x172D4930)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x172D4760)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x172D47C0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x172D4820)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x172D42E0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x172D42F0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x172D4230)
#define NEWTONSOFT_JSON_LINQ_JVALUE_VALUESEQUALS_OFFSET UNITYSDK_OFFSET(0x172D25A0)
#define NEWTONSOFT_JSON_LINQ_JVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x172D2FE0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x172C6CB0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x172CC310)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x172CE3C0)
#define NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x172C6D40)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JValue_TypeDefinitionIndex = 9733;

	class JValue : public ::Newtonsoft::Json::Linq::JToken
	{
	public:
		::System::Object* _value; // 0x30
		::Newtonsoft::Json::Linq::JTokenType _valueType; // 0x38

		::System::Void _ctor(::System::Object* a1, ::Newtonsoft::Json::Linq::JTokenType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JTokenType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE__CTOR_3_OFFSET))(this, a1);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_DEEPEQUALS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_HASVALUES_OFFSET))(this);
		}

		static ::System::Int32 Compare(::Newtonsoft::Json::Linq::JTokenType a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Linq::JTokenType, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPARE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareFloat(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_COMPAREFLOAT_OFFSET))(a1, a2);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CLONETOKEN_OFFSET))(this);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateComment(::System::String* a1)
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATECOMMENT_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateNull()
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATENULL_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JValue* CreateUndefined()
		{
			return ((::Newtonsoft::Json::Linq::JValue*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_CREATEUNDEFINED_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> a1, ::System::Object* a2)
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETVALUETYPE_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> a1)
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETSTRINGVALUETYPE_OFFSET))(a1);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_TYPE_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* a1, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_WRITETO_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETDEEPHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean ValuesEquals(::Newtonsoft::Json::Linq::JValue* a1, ::Newtonsoft::Json::Linq::JValue* a2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_VALUESEQUALS_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::Newtonsoft::Json::Linq::JValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JValue*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_TOSTRING_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, a1);
		}

		::System::TypeCode System_IConvertible_GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, a1);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, a1);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, a1);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, a1);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, a1);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, a1);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, a1);
		}

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, a1);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JVALUE_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, a1, a2);
		}
	};
}
