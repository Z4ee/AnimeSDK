#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE_GET_HASDEFINEDEXPANDED_OFFSET UNITYSDK_OFFSET(0x1ED9C4A0)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE_SET_HASDEFINEDEXPANDED_OFFSET UNITYSDK_OFFSET(0x1ED9C4B0)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED9C490)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED9C480)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int FoldoutGroupNapAttribute_TypeDefinitionIndex = 8412;

	class FoldoutGroupNapAttribute : public ::System::Attribute
	{
	public:
		::System::String* MethodName; // 0x10
		::System::Boolean Expanded; // 0x18
		::System::Boolean _HasDefinedExpanded_k__BackingField; // 0x19

		::System::Void _ctor(::System::String* groupName, ::System::Boolean expanded)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE__CTOR_OFFSET))(this, groupName, expanded);
		}

		::System::Void _ctor_1(::System::String* groupName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE__CTOR_1_OFFSET))(this, groupName);
		}

		::System::Boolean get_HasDefinedExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE_GET_HASDEFINEDEXPANDED_OFFSET))(this);
		}

		::System::Void set_HasDefinedExpanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPNAPATTRIBUTE_SET_HASDEFINEDEXPANDED_OFFSET))(this, value);
		}
	};
}
