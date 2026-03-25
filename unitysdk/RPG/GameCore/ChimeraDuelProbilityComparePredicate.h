#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE_METHOD_2_EEC130A68813D901_OFFSET UNITYSDK_OFFSET(0x170A30F0)
#define RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A3220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelProbilityComparePredicate_TypeDefinitionIndex = 14672;

	class ChimeraDuelProbilityComparePredicate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* ValueGetter; // 0x10
		::System::Boolean IsStationaryProbabilities; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EEC130A68813D901(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE_METHOD_2_EEC130A68813D901_OFFSET))(a1, a2);
		}
	};
}
