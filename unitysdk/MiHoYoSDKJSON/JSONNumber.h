#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONNUMBER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA233BE0)
#define MIHOYOSDKJSON_JSONNUMBER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA233990)
#define MIHOYOSDKJSON_JSONNUMBER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA233D80)
#define MIHOYOSDKJSON_JSONNUMBER_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA233A50)
#define MIHOYOSDKJSON_JSONNUMBER_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0xA233A70)
#define MIHOYOSDKJSON_JSONNUMBER_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0xA233980)
#define MIHOYOSDKJSON_JSONNUMBER_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA233970)
#define MIHOYOSDKJSON_JSONNUMBER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2339B0)
#define MIHOYOSDKJSON_JSONNUMBER_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0xA233B60)
#define MIHOYOSDKJSON_JSONNUMBER_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0xA233A60)
#define MIHOYOSDKJSON_JSONNUMBER_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0xA233A80)
#define MIHOYOSDKJSON_JSONNUMBER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2339F0)
#define MIHOYOSDKJSON_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA233B00)
#define MIHOYOSDKJSON_JSONNUMBER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA233A90)
#define MIHOYOSDKJSON_JSONNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0xA230070)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNumber_TypeDefinitionIndex = 43466;

	class JSONNumber : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::Double m_Data; // 0x10

		::System::Void _ctor(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_SET_ASLONG_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYoSDKJSON::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean IsNumeric(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_ISNUMERIC_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNUMBER_GETHASHCODE_OFFSET))(this);
		}
	};
}
