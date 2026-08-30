#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_19E469E08181BF26_OFFSET UNITYSDK_OFFSET(0x1BBB0050)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_5D6892F9C578FD25_OFFSET UNITYSDK_OFFSET(0x1BBB0010)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_BB0A119386B612D1_OFFSET UNITYSDK_OFFSET(0x1BBB01C0)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_F9E71D60F252DCB0_OFFSET UNITYSDK_OFFSET(0x1BBB0190)
#define RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB0040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropFastDeliverCheckSimplifiedMode_TypeDefinitionIndex = 21904;

	class ByComparePropFastDeliverCheckSimplifiedMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5D6892F9C578FD25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_5D6892F9C578FD25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19E469E08181BF26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_19E469E08181BF26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F9E71D60F252DCB0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_F9E71D60F252DCB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB0A119386B612D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPFASTDELIVERCHECKSIMPLIFIEDMODE_METHOD_4_BB0A119386B612D1_OFFSET))(a1, a2);
		}
	};
}
