#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/FieldInfo.h"
#include "unitysdk/System/RuntimeFieldHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class Module; }

#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1FB1B0C0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FB1B090)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1FB1B120)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_ALIASEDFIELD_OFFSET UNITYSDK_OFFSET(0x1FB1AF20)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FB1B060)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1FB1AFA0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_FIELDHANDLE_OFFSET UNITYSDK_OFFSET(0x1FB1B030)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x1FB1B000)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x1FB1AF60)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1FB1AF30)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FB1AF90)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1FB1AFD0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1FB1B0F0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1FB1B150)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB1AED0)
#define SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB1AE60)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int MemberAliasFieldInfo_TypeDefinitionIndex = 7661;

	class MemberAliasFieldInfo : public ::System::Reflection::FieldInfo
	{
	public:
		// static const ::System::String* FAKE_NAME_SEPARATOR_STRING; // 0x0
		::System::Reflection::FieldInfo* aliasedField; // 0x10
		::System::String* mangledName; // 0x18

		::System::Void _ctor(::System::Reflection::FieldInfo* field, ::System::String* namePrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO__CTOR_OFFSET))(this, field, namePrefix);
		}

		::System::Void _ctor_1(::System::Reflection::FieldInfo* field, ::System::String* namePrefix, ::System::String* separatorString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO__CTOR_1_OFFSET))(this, field, namePrefix, separatorString);
		}

		::System::Reflection::FieldInfo* get_AliasedField()
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_ALIASEDFIELD_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_MODULE_OFFSET))(this);
		}

		::System::Int32 get_MetadataToken()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_METADATATOKEN_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Type* get_FieldType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_FIELDTYPE_OFFSET))(this);
		}

		::System::RuntimeFieldHandle get_FieldHandle()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_FIELDHANDLE_OFFSET))(this);
		}

		::System::Reflection::FieldAttributes get_Attributes()
		{
			return ((::System::Reflection::FieldAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GET_ATTRIBUTES_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::System::Object* GetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_GETVALUE_OFFSET))(this, obj);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_MEMBERALIASFIELDINFO_SETVALUE_OFFSET))(this, obj, value, invokeAttr, binder, culture);
		}
	};
}
