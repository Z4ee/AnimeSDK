#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGWEIGHTEDITEM_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E569610)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGWEIGHTEDITEM_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E569620)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGWEIGHTEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E569650)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGWeightedItem_TypeDefinitionIndex = 39509;

	class CGWeightedItem : public ::System::Object
	{
	public:
		::System::Single m_Weight; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGWEIGHTEDITEM__CTOR_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGWEIGHTEDITEM_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGWEIGHTEDITEM_SET_WEIGHT_OFFSET))(this, value);
		}
	};
}
