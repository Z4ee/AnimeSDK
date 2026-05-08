#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"
#include "unitysdk/Sirenix/OdinInspector/SdfIconType.h"
#include "unitysdk/Sirenix/OdinInspector/TabLayouting.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1C0214F0)
#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_SIRENIX_ODININSPECTOR_INTERNAL_ISUBGROUPPROVIDERATTRIBUTE_GETSUBGROUPATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C0216D0)
#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_SIRENIX_ODININSPECTOR_INTERNAL_ISUBGROUPPROVIDERATTRIBUTE_REPATHMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C021A40)
#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0213B0)
#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C0214C0)
#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021350)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TabGroupAttribute_TypeDefinitionIndex = 7231;

	class TabGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		// static const ::System::String* DEFAULT_NAME; // 0x0
		::System::Collections::Generic::List_1<::Sirenix::OdinInspector::TabGroupAttribute*>* Tabs; // 0x30
		::System::String* TextColor; // 0x38
		::System::String* TabName; // 0x40
		::System::String* TabId; // 0x48
		::Sirenix::OdinInspector::SdfIconType Icon; // 0x50
		::Sirenix::OdinInspector::TabLayouting TabLayouting; // 0x54
		::System::Boolean UseFixedHeight; // 0x58
		::System::Boolean Paddingless; // 0x59
		::System::Boolean HideTabGroupIfTabGroupOnlyHasOneTab; // 0x5A

		::System::Void _ctor(::System::String* tab, ::System::Boolean useFixedHeight, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE__CTOR_OFFSET))(this, tab, useFixedHeight, order);
		}

		::System::Void _ctor_1(::System::String* group, ::System::String* tab, ::System::Boolean useFixedHeight, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE__CTOR_1_OFFSET))(this, group, tab, useFixedHeight, order);
		}

		::System::Void _ctor_2(::System::String* group, ::System::String* tab, ::Sirenix::OdinInspector::SdfIconType icon, ::System::Boolean useFixedHeight, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::SdfIconType, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE__CTOR_2_OFFSET))(this, group, tab, icon, useFixedHeight, order);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}

		::System::Collections::Generic::IList_1<::Sirenix::OdinInspector::PropertyGroupAttribute*>* Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_GetSubGroupAttributes()
		{
			return ((::System::Collections::Generic::IList_1<::Sirenix::OdinInspector::PropertyGroupAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_SIRENIX_ODININSPECTOR_INTERNAL_ISUBGROUPPROVIDERATTRIBUTE_GETSUBGROUPATTRIBUTES_OFFSET))(this);
		}

		::System::String* Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_RepathMemberAttribute(::Sirenix::OdinInspector::PropertyGroupAttribute* attr)
		{
			return ((::System::String*(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_SIRENIX_ODININSPECTOR_INTERNAL_ISUBGROUPPROVIDERATTRIBUTE_REPATHMEMBERATTRIBUTE_OFFSET))(this, attr);
		}
	};
}
