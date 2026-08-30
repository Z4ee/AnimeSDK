#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONNULL_CREATEORGET_OFFSET UNITYSDK_OFFSET(0xB2CAFA0)
#define MIHOYOSDKJSON_JSONNULL_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2D0700)
#define MIHOYOSDKJSON_JSONNULL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB2D06A0)
#define MIHOYOSDKJSON_JSONNULL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2D0760)
#define MIHOYOSDKJSON_JSONNULL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xB2D06E0)
#define MIHOYOSDKJSON_JSONNULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0xB2D0690)
#define MIHOYOSDKJSON_JSONNULL_GET_TAG_OFFSET UNITYSDK_OFFSET(0xB2D0680)
#define MIHOYOSDKJSON_JSONNULL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB2D06C0)
#define MIHOYOSDKJSON_JSONNULL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0xB2D06F0)
#define MIHOYOSDKJSON_JSONNULL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB2D06D0)
#define MIHOYOSDKJSON_JSONNULL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xB2D0770)
#define MIHOYOSDKJSON_JSONNULL__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2D07A0)
#define MIHOYOSDKJSON_JSONNULL__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D0660)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNull_TypeDefinitionIndex = 46511;

	class JSONNull : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		static ::MiHoYoSDKJSON::JSONNull** StaticGet_m_StaticInstance()
		{
			return (::MiHoYoSDKJSON::JSONNull**)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x5CB90);
		}
		static ::System::Boolean* StaticGet_reuseSameInstance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x13140);
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

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYoSDKJSON::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNULL_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
