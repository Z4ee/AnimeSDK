#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x164A9E20)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x164A9E00)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x164A9DF0)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x164A9DE0)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x164A9E30)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x164A9E10)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x164A9DC0)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x164A9D60)
#define ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x164A9D20)
#define ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x164A9D80)
#define ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x164A9D00)

namespace OdinExt
{
	inline static constexpr unsigned int SubclassPathAttribute_TypeDefinitionIndex = 34904;

	class SubclassPathAttribute : public ::System::Attribute
	{
	public:
		::System::String* _subClassPath; // 0x10
		::System::String* _subClassName; // 0x18
		::System::Boolean _HasSubClassName_k__BackingField; // 0x20
		::System::Boolean _HasSubClassPath_k__BackingField; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_1_OFFSET))(this, path);
		}

		::System::Void _ctor_2(::System::String* path, ::System::String* subclassName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_2_OFFSET))(this, path, subclassName);
		}

		::System::String* get_SubClassPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSPATH_OFFSET))(this);
		}

		::System::Void set_SubClassPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSPATH_OFFSET))(this, value);
		}

		::System::String* get_SubClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSNAME_OFFSET))(this);
		}

		::System::Void set_SubClassName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSNAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasSubClassPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSPATH_OFFSET))(this);
		}

		::System::Void set_HasSubClassPath(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSPATH_OFFSET))(this, value);
		}

		::System::Boolean get_HasSubClassName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSNAME_OFFSET))(this);
		}

		::System::Void set_HasSubClassName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSNAME_OFFSET))(this, value);
		}
	};
}
