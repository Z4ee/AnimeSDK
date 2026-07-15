#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1D306640)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3065D0)
#define SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D306560)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PropertyGroupAttribute_TypeDefinitionIndex = 9636;

	class PropertyGroupAttribute : public ::System::Attribute
	{
	public:
		::System::String* GroupName; // 0x10
		::System::String* GroupID; // 0x18
		::System::Boolean AnimateVisibility; // 0x20
		::System::Boolean HideWhenChildrenAreInvisible; // 0x21
		::System::Single Order; // 0x24

		::System::Void _ctor(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYGROUPATTRIBUTE_COMBINEVALUESWITH_OFFSET))(this, a1);
		}
	};
}
