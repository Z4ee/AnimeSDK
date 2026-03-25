#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONNUMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0x85B1800)
#define MIHOYOSDKJSON_JSONNUMBER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85B15B0)
#define MIHOYOSDKJSON_JSONNUMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x85B1990)
#define MIHOYOSDKJSON_JSONNUMBER_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x85B1670)
#define MIHOYOSDKJSON_JSONNUMBER_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x85B1690)
#define MIHOYOSDKJSON_JSONNUMBER_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x85B15A0)
#define MIHOYOSDKJSON_JSONNUMBER_GET_TAG_OFFSET UNITYSDK_OFFSET(0x85B1590)
#define MIHOYOSDKJSON_JSONNUMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x85B15D0)
#define MIHOYOSDKJSON_JSONNUMBER_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x85B1780)
#define MIHOYOSDKJSON_JSONNUMBER_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x85B1680)
#define MIHOYOSDKJSON_JSONNUMBER_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x85B16A0)
#define MIHOYOSDKJSON_JSONNUMBER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x85B1610)
#define MIHOYOSDKJSON_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x85B1720)
#define MIHOYOSDKJSON_JSONNUMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x85B16B0)
#define MIHOYOSDKJSON_JSONNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x85ADF00)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNumber_TypeDefinitionIndex = 36837;

	class JSONNumber : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::Double m_Data; // 0x10

		::System::Void _ctor(::System::Double aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER__CTOR_1_OFFSET))(this, aData);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GET_ISNUMBER_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_SET_ASLONG_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		static ::System::Boolean IsNumeric(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_ISNUMERIC_OFFSET))(value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GETHASHCODE_OFFSET))(this);
		}
	};
}
