#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGWeightedItem.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDSGROUPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB091D0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGBoundsGroupItem_TypeDefinitionIndex = 39035;

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
