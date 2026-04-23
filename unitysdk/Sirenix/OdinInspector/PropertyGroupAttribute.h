#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x19DAF9C0)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19DAF950)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAF8E0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PropertyGroupAttribute_TypeDefinitionIndex = 9795;

	class PropertyGroupAttribute : public ::System::Attribute
	{
	public:
		::System::String* GroupName; // 0x10
		::System::String* GroupID; // 0x18
		::System::Boolean AnimateVisibility; // 0x20
		::System::Boolean HideWhenChildrenAreInvisible; // 0x21
		::System::Single Order; // 0x24

		::System::Void _ctor(::System::String* groupId, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_OFFSET))(this, groupId, order);
		}

		::System::Void _ctor_1(::System::String* groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_1_OFFSET))(this, groupId);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
