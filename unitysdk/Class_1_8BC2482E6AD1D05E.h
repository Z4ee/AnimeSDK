#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesTradingCardExchangeCardItem; }

#define CLASS_1_8BC2482E6AD1D05E_COMPARE_OFFSET UNITYSDK_OFFSET(0x8D1E480)
#define CLASS_1_8BC2482E6AD1D05E__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1E530)

inline static constexpr unsigned int Class_1_8BC2482E6AD1D05E_TypeDefinitionIndex = 54189;

class Class_1_8BC2482E6AD1D05E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BC2482E6AD1D05E__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::Client::PlanetFesTradingCardExchangeCardItem* a1, ::RPG::Client::PlanetFesTradingCardExchangeCardItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*))((::PBYTE)hIl2Cpp + CLASS_1_8BC2482E6AD1D05E_COMPARE_OFFSET))(this, a1, a2);
	}
};
