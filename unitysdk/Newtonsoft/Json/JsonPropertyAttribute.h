#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DefaultValueHandling.h"
#include "unitysdk/Newtonsoft/Json/NullValueHandling.h"
#include "unitysdk/Newtonsoft/Json/ObjectCreationHandling.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239D20)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B239E20)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B239C80)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B239C60)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B239F70)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239EF0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239F30)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B239CC0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x1B239CA0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239CE0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239DA0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B239E50)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B239ED0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239D60)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1B239E90)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239DE0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239D40)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B239E40)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B239C90)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B239C70)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B239F90)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239F10)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239F50)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B239CD0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x1B239CB0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239D00)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239DC0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B239E70)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B239EE0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239D80)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x1B239EB0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B239E00)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B239FB0)
#define NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B239FA0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonPropertyAttribute_TypeDefinitionIndex = 6871;

	class JsonPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _NamingStrategyType_k__BackingField; // 0x10
		::System::String* _PropertyName_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _ItemConverterParameters_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _NamingStrategyParameters_k__BackingField; // 0x28
		::System::Type* _ItemConverterType_k__BackingField; // 0x30
		::System::Nullable_1<::System::Boolean> _itemIsReference; // 0x38
		::System::Nullable_1<::System::Boolean> _isReference; // 0x3A
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling; // 0x3C
		::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling; // 0x44
		::System::Nullable_1<::Newtonsoft::Json::Required> _required; // 0x4C
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling; // 0x54
		::System::Nullable_1<::System::Int32> _order; // 0x5C
		::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling; // 0x64
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x6C
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling; // 0x74
		::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE__CTOR_1_OFFSET))(this, propertyName);
		}

		::System::Type* get_ItemConverterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET))(this);
		}

		::System::Void set_ItemConverterType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Object*>* get_ItemConverterParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET))(this);
		}

		::System::Void set_ItemConverterParameters(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET))(this, value);
		}

		::System::Type* get_NamingStrategyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET))(this);
		}

		::System::Void set_NamingStrategyType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Object*>* get_NamingStrategyParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET))(this);
		}

		::System::Void set_NamingStrategyParameters(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET))(this, value);
		}

		::Newtonsoft::Json::NullValueHandling get_NullValueHandling()
		{
			return ((::Newtonsoft::Json::NullValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_NULLVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::NullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_NULLVALUEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling()
		{
			return ((::Newtonsoft::Json::DefaultValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_DEFAULTVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_DEFAULTVALUEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling()
		{
			return ((::Newtonsoft::Json::ReferenceLoopHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling()
		{
			return ((::Newtonsoft::Json::ObjectCreationHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_OBJECTCREATIONHANDLING_OFFSET))(this);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ObjectCreationHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_OBJECTCREATIONHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling()
		{
			return ((::Newtonsoft::Json::TypeNameHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_TYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_TYPENAMEHANDLING_OFFSET))(this, value);
		}

		::System::Boolean get_IsReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ISREFERENCE_OFFSET))(this);
		}

		::System::Void set_IsReference(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ISREFERENCE_OFFSET))(this, value);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ORDER_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Required get_Required()
		{
			return ((::Newtonsoft::Json::Required(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_REQUIRED_OFFSET))(this);
		}

		::System::Void set_Required(::Newtonsoft::Json::Required value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Required))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_REQUIRED_OFFSET))(this, value);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling()
		{
			return ((::Newtonsoft::Json::ReferenceLoopHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling()
		{
			return ((::Newtonsoft::Json::TypeNameHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET))(this, value);
		}

		::System::Boolean get_ItemIsReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_GET_ITEMISREFERENCE_OFFSET))(this);
		}

		::System::Void set_ItemIsReference(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPROPERTYATTRIBUTE_SET_ITEMISREFERENCE_OFFSET))(this, value);
		}
	};
}
