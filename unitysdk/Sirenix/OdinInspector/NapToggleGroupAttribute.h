#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1E1AA770)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_GET_TITLESTRINGMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1E1AA750)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_GET_TOGGLEMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1E1AA740)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_SET_TITLESTRINGMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1E1AA760)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AA640)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E1AA6C0)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA5C0)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE___BASE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1E1AA850)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int NapToggleGroupAttribute_TypeDefinitionIndex = 7897;

	class NapToggleGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* _TitleStringMemberName_k__BackingField; // 0x30
		::System::String* LineBackgroundColorGetter; // 0x38
		::System::String* ToggleGroupTitle; // 0x40
		::System::String* LineHeightGetter; // 0x48
		::System::Boolean CollapseOthersOnExpand; // 0x50

		::System::Void _ctor(::System::String* toggleMemberName, ::System::Single order, ::System::String* groupTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_OFFSET))(this, toggleMemberName, order, groupTitle);
		}

		::System::Void _ctor_1(::System::String* toggleMemberName, ::System::String* groupTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_1_OFFSET))(this, toggleMemberName, groupTitle);
		}

		::System::Void _ctor_2(::System::String* toggleMemberName, ::System::Single order, ::System::String* groupTitle, ::System::String* titleStringMemberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_2_OFFSET))(this, toggleMemberName, order, groupTitle, titleStringMemberName);
		}

		::System::String* get_ToggleMemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_GET_TOGGLEMEMBERNAME_OFFSET))(this);
		}

		::System::String* get_TitleStringMemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_GET_TITLESTRINGMEMBERNAME_OFFSET))(this);
		}

		::System::Void set_TitleStringMemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_SET_TITLESTRINGMEMBERNAME_OFFSET))(this, value);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}

		::System::Void __base_CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE___BASE_COMBINEVALUESWITH_OFFSET))(this, P0);
		}
	};
}
