#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_19E469E08181BF26_OFFSET UNITYSDK_OFFSET(0x187370D0)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_7B6AD898142B176C_OFFSET UNITYSDK_OFFSET(0x18737000)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18737080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropFastDeliverCheckSimplifiedMode_TypeDefinitionIndex = 21019;

	class ByComparePropFastDeliverCheckSimplifiedMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7B6AD898142B176C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_7B6AD898142B176C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19E469E08181BF26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_19E469E08181BF26_OFFSET))(a1, a2);
		}
	};
}
