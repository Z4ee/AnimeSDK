#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1F013880)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x1F013860)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1F013850)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x1F013840)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1F013890)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x1F013870)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSNAME_OFFSET UNITYSDK_OFFSET(0x1F013820)
#define ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSPATH_OFFSET UNITYSDK_OFFSET(0x1F0137C0)
#define ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F013780)
#define ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F0137E0)
#define ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F013760)

namespace OdinExt
{
	inline static constexpr unsigned int SubclassPathAttribute_TypeDefinitionIndex = 43976;

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

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::String* get_SubClassPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSPATH_OFFSET))(this);
		}

		::System::Void set_SubClassPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSPATH_OFFSET))(this, a1);
		}

		::System::String* get_SubClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_SUBCLASSNAME_OFFSET))(this);
		}

		::System::Void set_SubClassName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_SUBCLASSNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSubClassPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSPATH_OFFSET))(this);
		}

		::System::Void set_HasSubClassPath(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSubClassName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_GET_HASSUBCLASSNAME_OFFSET))(this);
		}

		::System::Void set_HasSubClassName(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSPATHATTRIBUTE_SET_HASSUBCLASSNAME_OFFSET))(this, a1);
		}
	};
}
