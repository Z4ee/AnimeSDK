#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1E328E30)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_DEFAULTEXPANDGETTER_OFFSET UNITYSDK_OFFSET(0x1E328CA0)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1E328C60)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_HASDEFINEDEXPANDED_OFFSET UNITYSDK_OFFSET(0x1E328C80)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_ONEXPANDCHANGED_OFFSET UNITYSDK_OFFSET(0x1E328CB0)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1E328C70)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_SET_HASDEFINEDEXPANDED_OFFSET UNITYSDK_OFFSET(0x1E328C90)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_SET_ONEXPANDCHANGED_OFFSET UNITYSDK_OFFSET(0x1E328CC0)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E328D40)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E328DB0)
#define SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328CD0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int FoldoutGroupAttribute_TypeDefinitionIndex = 7298;

	class FoldoutGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* _DefaultExpandGetter_k__BackingField; // 0x30
		::System::String* _OnExpandChanged_k__BackingField; // 0x38
		::System::Boolean _HasDefinedExpanded_k__BackingField; // 0x40
		::System::Boolean expanded; // 0x41

		::System::Void _ctor(::System::String* groupName, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE__CTOR_OFFSET))(this, groupName, order);
		}

		::System::Void _ctor_1(::System::String* groupName, ::System::Boolean expanded, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE__CTOR_1_OFFSET))(this, groupName, expanded, order);
		}

		::System::Void _ctor_2(::System::String* groupName, ::System::String* defaultExpandGetter, ::System::String* onExpandChanged, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE__CTOR_2_OFFSET))(this, groupName, defaultExpandGetter, onExpandChanged, order);
		}

		::System::Boolean get_Expanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_EXPANDED_OFFSET))(this);
		}

		::System::Void set_Expanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_SET_EXPANDED_OFFSET))(this, value);
		}

		::System::Boolean get_HasDefinedExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_HASDEFINEDEXPANDED_OFFSET))(this);
		}

		::System::Void set_HasDefinedExpanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_SET_HASDEFINEDEXPANDED_OFFSET))(this, value);
		}

		::System::String* get_DefaultExpandGetter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_DEFAULTEXPANDGETTER_OFFSET))(this);
		}

		::System::String* get_OnExpandChanged()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_GET_ONEXPANDCHANGED_OFFSET))(this);
		}

		::System::Void set_OnExpandChanged(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_SET_ONEXPANDCHANGED_OFFSET))(this, value);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDOUTGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
