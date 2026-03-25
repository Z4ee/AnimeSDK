#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ALLOWDUPLICATES_OFFSET UNITYSDK_OFFSET(0x164A9E60)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_CUSTOMTYPEFILTER_OFFSET UNITYSDK_OFFSET(0x164A9F40)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWBOXFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x164A9EC0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWCLASSFOLDOUT_OFFSET UNITYSDK_OFFSET(0x164A9F20)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x164A9EA0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASCUSTOMTYPEFILTER_OFFSET UNITYSDK_OFFSET(0x164A9F70)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASONTYPESSELECTED_OFFSET UNITYSDK_OFFSET(0x164A9FB0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x164A9F00)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECLASSLABEL_OFFSET UNITYSDK_OFFSET(0x164A9EE0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDEREFERENCEPICKER_OFFSET UNITYSDK_OFFSET(0x164A9E80)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ONTYPESSELECTED_OFFSET UNITYSDK_OFFSET(0x164A9F80)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ALLOWDUPLICATES_OFFSET UNITYSDK_OFFSET(0x164A9E70)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_CUSTOMTYPEFILTER_OFFSET UNITYSDK_OFFSET(0x164A9F50)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWBOXFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x164A9ED0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWCLASSFOLDOUT_OFFSET UNITYSDK_OFFSET(0x164A9F30)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET UNITYSDK_OFFSET(0x164A9EB0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECHILDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x164A9F10)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECLASSLABEL_OFFSET UNITYSDK_OFFSET(0x164A9EF0)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDEREFERENCEPICKER_OFFSET UNITYSDK_OFFSET(0x164A9E90)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ONTYPESSELECTED_OFFSET UNITYSDK_OFFSET(0x164A9F90)
#define ODINEXT_SUBCLASSSELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x164A9E40)

namespace OdinExt
{
	inline static constexpr unsigned int SubclassSelectorAttribute_TypeDefinitionIndex = 34905;

	class SubclassSelectorAttribute : public ::System::Attribute
	{
	public:
		::System::String* _onTypesSelected; // 0x10
		::System::String* _customTypeFilter; // 0x18
		::System::Boolean _hasOnTypesSelected; // 0x20
		::System::Boolean _HideClassLabel_k__BackingField; // 0x21
		::System::Boolean _DrawClassFoldout_k__BackingField; // 0x22
		::System::Boolean _DrawDropdownForListElements_k__BackingField; // 0x23
		::System::Boolean _HideChildProperties_k__BackingField; // 0x24
		::System::Boolean _AllowDuplicates_k__BackingField; // 0x25
		::System::Boolean _DrawBoxForListElements_k__BackingField; // 0x26
		::System::Boolean _HideReferencePicker_k__BackingField; // 0x27
		::System::Boolean _hasCustomTypeFilter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowDuplicates()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ALLOWDUPLICATES_OFFSET))(this);
		}

		::System::Void set_AllowDuplicates(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ALLOWDUPLICATES_OFFSET))(this, value);
		}

		::System::Boolean get_HideReferencePicker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDEREFERENCEPICKER_OFFSET))(this);
		}

		::System::Void set_HideReferencePicker(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDEREFERENCEPICKER_OFFSET))(this, value);
		}

		::System::Boolean get_DrawDropdownForListElements()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET))(this);
		}

		::System::Void set_DrawDropdownForListElements(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWDROPDOWNFORLISTELEMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_DrawBoxForListElements()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWBOXFORLISTELEMENTS_OFFSET))(this);
		}

		::System::Void set_DrawBoxForListElements(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWBOXFORLISTELEMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_HideClassLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECLASSLABEL_OFFSET))(this);
		}

		::System::Void set_HideClassLabel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECLASSLABEL_OFFSET))(this, value);
		}

		::System::Boolean get_HideChildProperties()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HIDECHILDPROPERTIES_OFFSET))(this);
		}

		::System::Void set_HideChildProperties(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_HIDECHILDPROPERTIES_OFFSET))(this, value);
		}

		::System::Boolean get_DrawClassFoldout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_DRAWCLASSFOLDOUT_OFFSET))(this);
		}

		::System::Void set_DrawClassFoldout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_DRAWCLASSFOLDOUT_OFFSET))(this, value);
		}

		::System::String* get_CustomTypeFilter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_CUSTOMTYPEFILTER_OFFSET))(this);
		}

		::System::Void set_CustomTypeFilter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_CUSTOMTYPEFILTER_OFFSET))(this, value);
		}

		::System::Boolean get_HasCustomTypeFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASCUSTOMTYPEFILTER_OFFSET))(this);
		}

		::System::String* get_OnTypesSelected()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_ONTYPESSELECTED_OFFSET))(this);
		}

		::System::Void set_OnTypesSelected(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_SET_ONTYPESSELECTED_OFFSET))(this, value);
		}

		::System::Boolean get_HasOnTypesSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODINEXT_SUBCLASSSELECTORATTRIBUTE_GET_HASONTYPESSELECTED_OFFSET))(this);
		}
	};
}
