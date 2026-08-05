#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_BOXGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1F76F9C0)
#define SIRENIX_ODININSPECTOR_BOXGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F76F930)
#define SIRENIX_ODININSPECTOR_BOXGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76F840)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int BoxGroupAttribute_TypeDefinitionIndex = 7266;

	class BoxGroupAttribute : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* LabelText; // 0x30
		::System::Boolean ShowLabel; // 0x38
		::System::Boolean CenterLabel; // 0x39

		::System::Void _ctor(::System::String* group, ::System::Boolean showLabel, ::System::Boolean centerLabel, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BOXGROUPATTRIBUTE__CTOR_OFFSET))(this, group, showLabel, centerLabel, order);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BOXGROUPATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BOXGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
