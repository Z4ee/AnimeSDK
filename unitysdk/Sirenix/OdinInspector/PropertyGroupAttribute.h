#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1E32A010)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINE_OFFSET UNITYSDK_OFFSET(0x1E329E60)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E329040)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328520)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PropertyGroupAttribute_TypeDefinitionIndex = 7340;

	class PropertyGroupAttribute : public ::System::Attribute
	{
	public:
		::System::String* VisibleIf; // 0x10
		::System::String* GroupName; // 0x18
		::System::String* GroupID; // 0x20
		::System::Boolean HideWhenChildrenAreInvisible; // 0x28
		::System::Boolean AnimateVisibility; // 0x29
		::System::Single Order; // 0x2C

		::System::Void _ctor(::System::String* groupId, ::System::Single order)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_OFFSET))(this, groupId, order);
		}

		::System::Void _ctor_1(::System::String* groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_1_OFFSET))(this, groupId);
		}

		::Sirenix::OdinInspector::PropertyGroupAttribute* Combine(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::Sirenix::OdinInspector::PropertyGroupAttribute*(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINE_OFFSET))(this, other);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* other)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, other);
		}
	};
}
