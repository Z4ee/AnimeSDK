#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesTradingCardExchangeCardItem; }

#define CLASS_1_E8CBFD3CE3B142C4_COMPARE_OFFSET UNITYSDK_OFFSET(0x16323180)
#define CLASS_1_E8CBFD3CE3B142C4__CTOR_OFFSET UNITYSDK_OFFSET(0x163233B0)

inline static constexpr unsigned int Class_1_E8CBFD3CE3B142C4_TypeDefinitionIndex = 66627;

class Class_1_E8CBFD3CE3B142C4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8CBFD3CE3B142C4__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::Client::PlanetFesTradingCardExchangeCardItem* a1, ::RPG::Client::PlanetFesTradingCardExchangeCardItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*, ::RPG::Client::PlanetFesTradingCardExchangeCardItem*))((::PBYTE)hIl2Cpp + CLASS_1_E8CBFD3CE3B142C4_COMPARE_OFFSET))(this, a1, a2);
	}
};
