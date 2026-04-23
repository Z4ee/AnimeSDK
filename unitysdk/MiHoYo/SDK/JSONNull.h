#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONNULL_CREATEORGET_OFFSET UNITYSDK_OFFSET(0x1755F890)
#define MIHOYO_SDK_JSONNULL_EQUALS_OFFSET UNITYSDK_OFFSET(0x17564690)
#define MIHOYO_SDK_JSONNULL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17564630)
#define MIHOYO_SDK_JSONNULL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175646D0)
#define MIHOYO_SDK_JSONNULL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x17564670)
#define MIHOYO_SDK_JSONNULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x17564620)
#define MIHOYO_SDK_JSONNULL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x17564610)
#define MIHOYO_SDK_JSONNULL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17564650)
#define MIHOYO_SDK_JSONNULL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x17564680)
#define MIHOYO_SDK_JSONNULL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17564660)
#define MIHOYO_SDK_JSONNULL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x175646E0)
#define MIHOYO_SDK_JSONNULL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17564710)
#define MIHOYO_SDK_JSONNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x175645F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNull_TypeDefinitionIndex = 7179;

	class JSONNull : public ::MiHoYo::SDK::JSONNode
	{
	public:
		static ::MiHoYo::SDK::JSONNull** StaticGet_m_StaticInstance()
		{
			return (::MiHoYo::SDK::JSONNull**)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x198A0);
		}
		static ::System::Boolean* StaticGet_reuseSameInstance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNull_TypeDefinitionIndex)->GetStaticField(0x6CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::JSONNull* CreateOrGet()
		{
			return ((::MiHoYo::SDK::JSONNull*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_CREATEORGET_OFFSET))();
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_GET_ISNULL_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYo::SDK::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONNULL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
