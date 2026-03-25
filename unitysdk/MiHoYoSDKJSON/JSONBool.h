#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x85AD460)
#define MIHOYOSDKJSON_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85AD2C0)
#define MIHOYOSDKJSON_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x85AD480)
#define MIHOYOSDKJSON_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x85AD350)
#define MIHOYOSDKJSON_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x85AD2B0)
#define MIHOYOSDKJSON_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x85AD2A0)
#define MIHOYOSDKJSON_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x85AD2E0)
#define MIHOYOSDKJSON_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x85AD360)
#define MIHOYOSDKJSON_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x85AD300)
#define MIHOYOSDKJSON_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x85AD420)
#define MIHOYOSDKJSON_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x85AD3A0)
#define MIHOYOSDKJSON_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x85AD370)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 36838;

	class JSONBool : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL__CTOR_1_OFFSET))(this, aData);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
