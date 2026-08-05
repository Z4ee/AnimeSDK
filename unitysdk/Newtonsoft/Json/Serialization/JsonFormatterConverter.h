#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x1F6E6D00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x1F6E6BC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1F6E6DE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBYTE_OFFSET UNITYSDK_OFFSET(0x1F6E6DF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1F6E6E00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1F6E6E10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1F6E6E20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1F6E6E50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT16_OFFSET UNITYSDK_OFFSET(0x1F6E6E60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1F6E6E70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1F6E6E80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x1F6E6E90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1F6E6EA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6E6EB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1F6E6EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1F6E6F00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1F6E6F10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E6AD0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonFormatterConverter_TypeDefinitionIndex = 7132;

	class JsonFormatterConverter : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _reader; // 0x10
		::Newtonsoft::Json::Serialization::JsonISerializableContract* _contract; // 0x18
		::Newtonsoft::Json::Serialization::JsonProperty* _member; // 0x20

		::System::Void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER__CTOR_OFFSET))(this, reader, contract, member);
		}

		::System::Object* Convert(::System::Object* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_OFFSET))(this, value, type);
		}

		::System::Object* Convert_1(::System::Object* value, ::System::TypeCode typeCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::TypeCode))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_CONVERT_1_OFFSET))(this, value, typeCode);
		}

		::System::Boolean ToBoolean(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBOOLEAN_OFFSET))(this, value);
		}

		::System::Byte ToByte(::System::Object* value)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOBYTE_OFFSET))(this, value);
		}

		::System::Char ToChar(::System::Object* value)
		{
			return ((::System::Char(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOCHAR_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime(::System::Object* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODATETIME_OFFSET))(this, value);
		}

		::System::Decimal ToDecimal(::System::Object* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODECIMAL_OFFSET))(this, value);
		}

		::System::Double ToDouble(::System::Object* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TODOUBLE_OFFSET))(this, value);
		}

		::System::Int16 ToInt16(::System::Object* value)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT16_OFFSET))(this, value);
		}

		::System::Int32 ToInt32(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT32_OFFSET))(this, value);
		}

		::System::Int64 ToInt64(::System::Object* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOINT64_OFFSET))(this, value);
		}

		::System::SByte ToSByte(::System::Object* value)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSBYTE_OFFSET))(this, value);
		}

		::System::Single ToSingle(::System::Object* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSINGLE_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOSTRING_OFFSET))(this, value);
		}

		::System::UInt16 ToUInt16(::System::Object* value)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT16_OFFSET))(this, value);
		}

		::System::UInt32 ToUInt32(::System::Object* value)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT32_OFFSET))(this, value);
		}

		::System::UInt64 ToUInt64(::System::Object* value)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONFORMATTERCONVERTER_TOUINT64_OFFSET))(this, value);
		}
	};
}
