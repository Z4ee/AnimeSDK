#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"

namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define SIMPLEJSON_JSONDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E375C80)
#define SIMPLEJSON_JSONDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3765D0)
#define SIMPLEJSON_JSONDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E375C90)
#define SIMPLEJSON_JSONDATA_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E376270)
#define SIMPLEJSON_JSONDATA_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1E376430)
#define SIMPLEJSON_JSONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3760D0)
#define SIMPLEJSON_JSONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E375D00)
#define SIMPLEJSON_JSONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E375D90)
#define SIMPLEJSON_JSONDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E375E20)
#define SIMPLEJSON_JSONDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E375ED0)
#define SIMPLEJSON_JSONDATA__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1E375F50)
#define SIMPLEJSON_JSONDATA__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1E375FD0)
#define SIMPLEJSON_JSONDATA__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1E376050)
#define SIMPLEJSON_JSONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E375CA0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONData_TypeDefinitionIndex = 8254;

	class JSONData : public ::SimpleJSON::JSONNode
	{
	public:
		::System::String* m_Data; // 0x18

		::System::Void _ctor(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::Single aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_1_OFFSET))(this, aData);
		}

		::System::Void _ctor_2(::System::Double aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_2_OFFSET))(this, aData);
		}

		::System::Void _ctor_3(::System::Boolean aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_3_OFFSET))(this, aData);
		}

		::System::Void _ctor_4(::System::Int32 aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_4_OFFSET))(this, aData);
		}

		::System::Void _ctor_5(::System::UInt32 aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_5_OFFSET))(this, aData);
		}

		::System::Void _ctor_6(::System::Int64 aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_6_OFFSET))(this, aData);
		}

		::System::Void _ctor_7(::System::UInt64 aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA__CTOR_7_OFFSET))(this, aData);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA_SET_VALUE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* aPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA_TOSTRING_1_OFFSET))(this, aPrefix);
		}

		::System::String* ToString_2(::System::Boolean escape)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA_TOSTRING_2_OFFSET))(this, escape);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* aWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONDATA_SERIALIZE_OFFSET))(this, aWriter);
		}
	};
}
