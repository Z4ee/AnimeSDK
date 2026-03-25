#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONNULL_CREATEORGET_OFFSET UNITYSDK_OFFSET(0x84A98B0)
#define HOUDINIENGINEUNITY_JSONNULL_EQUALS_OFFSET UNITYSDK_OFFSET(0x84B0B90)
#define HOUDINIENGINEUNITY_JSONNULL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x84B0B30)
#define HOUDINIENGINEUNITY_JSONNULL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x84B0BD0)
#define HOUDINIENGINEUNITY_JSONNULL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x84B0B70)
#define HOUDINIENGINEUNITY_JSONNULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x84B0B20)
#define HOUDINIENGINEUNITY_JSONNULL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x84B0B10)
#define HOUDINIENGINEUNITY_JSONNULL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x84B0B50)
#define HOUDINIENGINEUNITY_JSONNULL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x84B0B80)
#define HOUDINIENGINEUNITY_JSONNULL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x84B0B60)
#define HOUDINIENGINEUNITY_JSONNULL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x84B0BE0)
#define HOUDINIENGINEUNITY_JSONNULL__CCTOR_OFFSET UNITYSDK_OFFSET(0x84B0C10)
#define HOUDINIENGINEUNITY_JSONNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x84B0B00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNull_TypeDefinitionIndex = 37856;

	class JSONNull : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		static ::HoudiniEngineUnity::JSONNull** StaticGet_m_StaticInstance()
		{
			return (::HoudiniEngineUnity::JSONNull**)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x8410);
		}
		static ::System::Boolean* StaticGet_reuseSameInstance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x4390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL__CCTOR_OFFSET))();
		}

		static ::HoudiniEngineUnity::JSONNull* CreateOrGet()
		{
			return ((::HoudiniEngineUnity::JSONNull*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_CREATEORGET_OFFSET))();
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_GET_ISNULL_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNULL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
