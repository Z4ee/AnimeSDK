#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGWeightedItem.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B727560)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGBoundsGroupItem_TypeDefinitionIndex = 37294;

	class CGBoundsGroupItem : public ::FluffyUnderware::Curvy::Generator::CGWeightedItem
	{
	public:
		::System::Int32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUPITEM__CTOR_OFFSET))(this);
		}
	};
}
