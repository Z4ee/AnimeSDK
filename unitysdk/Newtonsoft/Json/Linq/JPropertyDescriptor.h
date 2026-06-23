#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1D9BD5C0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_CASTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D9BD550)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1D9BD5D0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D9BD850)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D9BD880)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_NAMEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9BD8C0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1D9BD890)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1D9BD680)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1D9BD690)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1D9BD840)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BD540)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JPropertyDescriptor_TypeDefinitionIndex = 7179;

	class JPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, name);
		}

		static ::Newtonsoft::Json::Linq::JObject* CastInstance(::System::Object* instance)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_CASTINSTANCE_OFFSET))(instance);
		}

		::System::Boolean CanResetValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(this, component);
		}

		::System::Object* GetValue(::System::Object* component)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(this, component);
		}

		::System::Void ResetValue(::System::Object* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(this, component);
		}

		::System::Void SetValue(::System::Object* component, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(this, component, value);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(this, component);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Int32 get_NameHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_NAMEHASHCODE_OFFSET))(this);
		}
	};
}
