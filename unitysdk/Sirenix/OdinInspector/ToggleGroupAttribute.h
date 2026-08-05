#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1F772820)
#define SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_GET_TITLESTRINGMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1F772800)
#define SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_GET_TOGGLEMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1F7727F0)
#define SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_SET_TITLESTRINGMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1F772810)
#define SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7726F0)
#define SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F772770)
#define SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F772670)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ToggleGroupAttribute_TypeDefinitionIndex = 7376;

	class ToggleGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* ToggleGroupTitle; // 0x30
		::System::String* _TitleStringMemberName_k__BackingField; // 0x38
		::System::Boolean CollapseOthersOnExpand; // 0x40

		::System::Void _ctor(::System::String* toggleMemberName, ::System::Single order, ::System::String* groupTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE__CTOR_OFFSET))(this, toggleMemberName, order, groupTitle);
		}

		::System::Void _ctor_1(::System::String* toggleMemberName, ::System::String* groupTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE__CTOR_1_OFFSET))(this, toggleMemberName, groupTitle);
		}

		::System::Void _ctor_2(::System::String* toggleMemberName, ::System::Single order, ::System::String* groupTitle, ::System::String* titleStringMemberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE__CTOR_2_OFFSET))(this, toggleMemberName, order, groupTitle, titleStringMemberName);
		}

		::System::String* get_ToggleMemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_GET_TOGGLEMEMBERNAME_OFFSET))(this);
		}

		::System::String* get_TitleStringMemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_GET_TITLESTRINGMEMBERNAME_OFFSET))(this);
		}

		::System::Void set_TitleStringMemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_SET_TITLESTRINGMEMBERNAME_OFFSET))(this, value);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
