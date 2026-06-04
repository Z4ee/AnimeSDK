#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0xA22F5D0)
#define MIHOYOSDKJSON_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA22F430)
#define MIHOYOSDKJSON_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA22F5F0)
#define MIHOYOSDKJSON_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA22F4C0)
#define MIHOYOSDKJSON_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0xA22F420)
#define MIHOYOSDKJSON_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA22F410)
#define MIHOYOSDKJSON_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA22F450)
#define MIHOYOSDKJSON_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xA22F4D0)
#define MIHOYOSDKJSON_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA22F470)
#define MIHOYOSDKJSON_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA22F590)
#define MIHOYOSDKJSON_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA22F510)
#define MIHOYOSDKJSON_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xA22F4E0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 43467;

	class JSONBool : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYoSDKJSON::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
