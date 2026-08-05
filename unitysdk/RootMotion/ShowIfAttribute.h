#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/ShowIfMode.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class Object; }
namespace System { class String; }

#define ROOTMOTION_SHOWIFATTRIBUTE_GET_INDENT_OFFSET UNITYSDK_OFFSET(0x1FACE080)
#define ROOTMOTION_SHOWIFATTRIBUTE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1FACE0A0)
#define ROOTMOTION_SHOWIFATTRIBUTE_GET_OTHERPROPVALUE_OFFSET UNITYSDK_OFFSET(0x1FACE060)
#define ROOTMOTION_SHOWIFATTRIBUTE_GET_PROPNAME_OFFSET UNITYSDK_OFFSET(0x1FACE020)
#define ROOTMOTION_SHOWIFATTRIBUTE_GET_PROPVALUE_OFFSET UNITYSDK_OFFSET(0x1FACE040)
#define ROOTMOTION_SHOWIFATTRIBUTE_SET_INDENT_OFFSET UNITYSDK_OFFSET(0x1FACE090)
#define ROOTMOTION_SHOWIFATTRIBUTE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1FACE0B0)
#define ROOTMOTION_SHOWIFATTRIBUTE_SET_OTHERPROPVALUE_OFFSET UNITYSDK_OFFSET(0x1FACE070)
#define ROOTMOTION_SHOWIFATTRIBUTE_SET_PROPNAME_OFFSET UNITYSDK_OFFSET(0x1FACE030)
#define ROOTMOTION_SHOWIFATTRIBUTE_SET_PROPVALUE_OFFSET UNITYSDK_OFFSET(0x1FACE050)
#define ROOTMOTION_SHOWIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FACE0C0)

namespace RootMotion
{
	inline static constexpr unsigned int ShowIfAttribute_TypeDefinitionIndex = 38922;

	class ShowIfAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* _propName_k__BackingField; // 0x10
		::System::Object* _otherPropValue_k__BackingField; // 0x18
		::System::Object* _propValue_k__BackingField; // 0x20
		::System::Boolean _indent_k__BackingField; // 0x28
		::RootMotion::ShowIfMode _mode_k__BackingField; // 0x2C

		::System::Void _ctor(::System::String* propertyName, ::System::Object* propertyValue, ::System::Object* otherPropertyValue, ::System::Boolean indent, ::RootMotion::ShowIfMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Object*, ::System::Boolean, ::RootMotion::ShowIfMode))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE__CTOR_OFFSET))(this, propertyName, propertyValue, otherPropertyValue, indent, mode);
		}

		::System::String* get_propName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_GET_PROPNAME_OFFSET))(this);
		}

		::System::Void set_propName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_SET_PROPNAME_OFFSET))(this, value);
		}

		::System::Object* get_propValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_GET_PROPVALUE_OFFSET))(this);
		}

		::System::Void set_propValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_SET_PROPVALUE_OFFSET))(this, value);
		}

		::System::Object* get_otherPropValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_GET_OTHERPROPVALUE_OFFSET))(this);
		}

		::System::Void set_otherPropValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_SET_OTHERPROPVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_indent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_GET_INDENT_OFFSET))(this);
		}

		::System::Void set_indent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_SET_INDENT_OFFSET))(this, value);
		}

		::RootMotion::ShowIfMode get_mode()
		{
			return ((::RootMotion::ShowIfMode(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::RootMotion::ShowIfMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::ShowIfMode))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWIFATTRIBUTE_SET_MODE_OFFSET))(this, value);
		}
	};
}
