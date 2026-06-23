#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D691EF0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE_GET_TYPESORT_OFFSET UNITYSDK_OFFSET(0x1D691ED0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE_SET_TYPESORT_OFFSET UNITYSDK_OFFSET(0x1D691EE0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D690060)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTAttribute_TypeDefinitionIndex = 28311;

	class DTAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 Space; // 0x10
		::System::Int32 Sort; // 0x14
		::System::Boolean ShowBelowProperty; // 0x18
		::System::Int32 _TypeSort_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Int32 sortOrder, ::System::Boolean showBelow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE__CTOR_OFFSET))(this, sortOrder, showBelow);
		}

		::System::Int32 get_TypeSort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE_GET_TYPESORT_OFFSET))(this);
		}

		::System::Void set_TypeSort(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE_SET_TYPESORT_OFFSET))(this, value);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTATTRIBUTE_COMPARETO_OFFSET))(this, obj);
		}
	};
}
