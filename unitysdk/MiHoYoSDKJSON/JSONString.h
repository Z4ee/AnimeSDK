#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0xA235770)
#define MIHOYOSDKJSON_JSONSTRING_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA2355D0)
#define MIHOYOSDKJSON_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA235910)
#define MIHOYOSDKJSON_JSONSTRING_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0xA2355C0)
#define MIHOYOSDKJSON_JSONSTRING_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA2355B0)
#define MIHOYOSDKJSON_JSONSTRING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA2355F0)
#define MIHOYOSDKJSON_JSONSTRING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA235600)
#define MIHOYOSDKJSON_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xA235610)
#define MIHOYOSDKJSON_JSONSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0xA230590)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONString_TypeDefinitionIndex = 43465;

	class JSONString : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::String* m_Data; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING__CTOR_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GET_ISSTRING_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYoSDKJSON::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
