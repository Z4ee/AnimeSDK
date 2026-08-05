#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONNULL_CREATEORGET_OFFSET UNITYSDK_OFFSET(0x1D92DC90)
#define CODABLE_JSONNULL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D92DDE0)
#define CODABLE_JSONNULL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D92DD50)
#define CODABLE_JSONNULL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D92DE50)
#define CODABLE_JSONNULL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1D92DDC0)
#define CODABLE_JSONNULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1D92DD40)
#define CODABLE_JSONNULL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1D92DD30)
#define CODABLE_JSONNULL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D92DD70)
#define CODABLE_JSONNULL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1D92DDD0)
#define CODABLE_JSONNULL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D92DDB0)
#define CODABLE_JSONNULL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1D92DE60)
#define CODABLE_JSONNULL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D92DEB0)
#define CODABLE_JSONNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D92DD20)

namespace Codable
{
	inline static constexpr unsigned int JSONNull_TypeDefinitionIndex = 37127;

	class JSONNull : public ::Codable::JSONNode
	{
	public:
		static ::Codable::JSONNull** StaticGet_m_StaticInstance()
		{
			return (::Codable::JSONNull**)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x29A10);
		}
		static ::System::Boolean* StaticGet_reuseSameInstance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x8850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNULL__CCTOR_OFFSET))();
		}

		static ::Codable::JSONNull* CreateOrGet()
		{
			return ((::Codable::JSONNull*(*)())((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_CREATEORGET_OFFSET))();
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_ISNULL_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONNULL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
