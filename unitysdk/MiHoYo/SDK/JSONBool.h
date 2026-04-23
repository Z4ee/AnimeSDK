#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x175607C0)
#define MIHOYO_SDK_JSONBOOL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17560620)
#define MIHOYO_SDK_JSONBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x175607E0)
#define MIHOYO_SDK_JSONBOOL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x175606B0)
#define MIHOYO_SDK_JSONBOOL_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x17560610)
#define MIHOYO_SDK_JSONBOOL_GET_TAG_OFFSET UNITYSDK_OFFSET(0x17560600)
#define MIHOYO_SDK_JSONBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17560640)
#define MIHOYO_SDK_JSONBOOL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x175606C0)
#define MIHOYO_SDK_JSONBOOL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17560660)
#define MIHOYO_SDK_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x17560780)
#define MIHOYO_SDK_JSONBOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17560700)
#define MIHOYO_SDK_JSONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x175606D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONBool_TypeDefinitionIndex = 7178;

	class JSONBool : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::Boolean m_Data; // 0x10

		::System::Void _ctor(::System::Boolean aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL__CTOR_OFFSET))(this, aData);
		}

		::System::Void _ctor_1(::System::String* aData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL__CTOR_1_OFFSET))(this, aData);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_ISBOOLEAN_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYo::SDK::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONBOOL_GETHASHCODE_OFFSET))(this);
		}
	};
}
