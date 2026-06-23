#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D620D60)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D620D20)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D620E20)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D620DA0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x1D620D80)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D620E50)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1D620E80)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1D620EC0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D620E00)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D620DE0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x1D620DC0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D620D40)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D620D70)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D620D30)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D620E40)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D620DB0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x1D620D90)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D620E70)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1D620EA0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1D620EE0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D620E10)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D620DF0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x1D620DD0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D620D50)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D620F10)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D620F00)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonContainerAttribute_TypeDefinitionIndex = 6990;

	class JsonContainerAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Object*>* _namingStrategyParameters; // 0x10
		::Il2CppArray<::System::Object*>* _ItemConverterParameters_k__BackingField; // 0x18
		::System::String* _Description_k__BackingField; // 0x20
		::Newtonsoft::Json::Serialization::NamingStrategy* _NamingStrategyInstance_k__BackingField; // 0x28
		::System::Type* _ItemConverterType_k__BackingField; // 0x30
		::System::Type* _namingStrategyType; // 0x38
		::System::String* _Title_k__BackingField; // 0x40
		::System::String* _Id_k__BackingField; // 0x48
		::System::Nullable_1<::System::Boolean> _isReference; // 0x50
		::System::Nullable_1<::System::Boolean> _itemIsReference; // 0x52
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling; // 0x54
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE__CTOR_1_OFFSET))(this, id);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::Type* get_ItemConverterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET))(this);
		}

		::System::Void set_ItemConverterType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Object*>* get_ItemConverterParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET))(this);
		}

		::System::Void set_ItemConverterParameters(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMCONVERTERPARAMETERS_OFFSET))(this, value);
		}

		::System::Type* get_NamingStrategyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYTYPE_OFFSET))(this);
		}

		::System::Void set_NamingStrategyType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Object*>* get_NamingStrategyParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYPARAMETERS_OFFSET))(this);
		}

		::System::Void set_NamingStrategyParameters(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYPARAMETERS_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategyInstance()
		{
			return ((::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_NAMINGSTRATEGYINSTANCE_OFFSET))(this);
		}

		::System::Void set_NamingStrategyInstance(::Newtonsoft::Json::Serialization::NamingStrategy* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::NamingStrategy*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_NAMINGSTRATEGYINSTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_IsReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ISREFERENCE_OFFSET))(this);
		}

		::System::Void set_IsReference(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ISREFERENCE_OFFSET))(this, value);
		}

		::System::Boolean get_ItemIsReference()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMISREFERENCE_OFFSET))(this);
		}

		::System::Void set_ItemIsReference(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMISREFERENCE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling()
		{
			return ((::Newtonsoft::Json::ReferenceLoopHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::ReferenceLoopHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling()
		{
			return ((::Newtonsoft::Json::TypeNameHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMTYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_SET_ITEMTYPENAMEHANDLING_OFFSET))(this, value);
		}
	};
}
