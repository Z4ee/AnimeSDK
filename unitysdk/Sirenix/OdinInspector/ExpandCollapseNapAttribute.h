#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_EXPANDCOLLAPSENAPATTRIBUTE_GET_HASEXPANDVALUE_OFFSET UNITYSDK_OFFSET(0x1CC9B090)
#define SIRENIX_ODININSPECTOR_EXPANDCOLLAPSENAPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC9B0B0)
#define SIRENIX_ODININSPECTOR_EXPANDCOLLAPSENAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9B0A0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ExpandCollapseNapAttribute_TypeDefinitionIndex = 8294;

	class ExpandCollapseNapAttribute : public ::System::Attribute
	{
	public:
		::System::String* ExpandIf; // 0x10
		::System::String* OnExpanded; // 0x18
		::System::String* OnCollapsed; // 0x20
		::System::Boolean Expand; // 0x28
		::System::Boolean IsOnType; // 0x29
		::System::Boolean _HasExpandValue_k__BackingField; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXPANDCOLLAPSENAPATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean expand, ::System::String* expandIfMemberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXPANDCOLLAPSENAPATTRIBUTE__CTOR_1_OFFSET))(this, expand, expandIfMemberName);
		}

		::System::Boolean get_HasExpandValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_EXPANDCOLLAPSENAPATTRIBUTE_GET_HASEXPANDVALUE_OFFSET))(this);
		}
	};
}
