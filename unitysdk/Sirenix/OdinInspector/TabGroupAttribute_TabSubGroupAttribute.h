#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace Sirenix::OdinInspector { class TabGroupAttribute; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_TABSUBGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1C021AC0)
#define SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_TABSUBGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0219D0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TabGroupAttribute_TabSubGroupAttribute_TypeDefinitionIndex = 7232;

	class TabGroupAttribute_TabSubGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::Sirenix::OdinInspector::TabGroupAttribute* Tab; // 0x30

		::System::Void _ctor(::Sirenix::OdinInspector::TabGroupAttribute* tab, ::System::String* groupId, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::TabGroupAttribute*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_TABSUBGROUPATTRIBUTE__CTOR_OFFSET))(this, tab, groupId, order);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABGROUPATTRIBUTE_TABSUBGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
