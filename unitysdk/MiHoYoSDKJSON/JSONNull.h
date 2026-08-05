#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONNULL_CREATEORGET_OFFSET UNITYSDK_OFFSET(0x1DF6BC20)
#define MIHOYOSDKJSON_JSONNULL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6BDF0)
#define MIHOYOSDKJSON_JSONNULL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DF6BD60)
#define MIHOYOSDKJSON_JSONNULL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6BE60)
#define MIHOYOSDKJSON_JSONNULL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DF6BDD0)
#define MIHOYOSDKJSON_JSONNULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1DF6BD50)
#define MIHOYOSDKJSON_JSONNULL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1DF6BD40)
#define MIHOYOSDKJSON_JSONNULL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DF6BD80)
#define MIHOYOSDKJSON_JSONNULL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DF6BDE0)
#define MIHOYOSDKJSON_JSONNULL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DF6BDC0)
#define MIHOYOSDKJSON_JSONNULL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1DF6BE70)
#define MIHOYOSDKJSON_JSONNULL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6BEC0)
#define MIHOYOSDKJSON_JSONNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6BCF0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNull_TypeDefinitionIndex = 37106;

	class JSONNull : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		static ::MiHoYoSDKJSON::JSONNull** StaticGet_m_StaticInstance()
		{
			return (::MiHoYoSDKJSON::JSONNull**)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x2A320);
		}
		static ::System::Boolean* StaticGet_reuseSameInstance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x8A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL__CCTOR_OFFSET))();
		}

		static ::MiHoYoSDKJSON::JSONNull* CreateOrGet()
		{
			return ((::MiHoYoSDKJSON::JSONNull*(*)())((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_CREATEORGET_OFFSET))();
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GET_ISNULL_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
