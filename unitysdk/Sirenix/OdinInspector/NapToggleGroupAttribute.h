#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1BE5BEF0)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_GET_TITLESTRINGMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1BE5BED0)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_GET_TOGGLEMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1BE5BEC0)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE_SET_TITLESTRINGMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1BE5BEE0)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE5BDC0)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BE5BE40)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5BD40)
#define SIRENIX_ODININSPECTOR_NAPTOGGLEGROUPATTRIBUTE___BASE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1BE5BFD0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int NapToggleGroupAttribute_TypeDefinitionIndex = 7763;

	class NapToggleGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* LineHeightGetter; // 0x30
		::System::String* LineBackgroundColorGetter; // 0x38
		::System::String* _TitleStringMemberName_k__BackingField; // 0x40
		::System::String* ToggleGroupTitle; // 0x48
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
