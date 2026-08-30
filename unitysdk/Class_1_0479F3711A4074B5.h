#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesTradingCardFriendsItem; }

#define CLASS_1_0479F3711A4074B5_COMPARE_OFFSET UNITYSDK_OFFSET(0xB8D9A50)
#define CLASS_1_0479F3711A4074B5__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D9E20)

inline static constexpr unsigned int Class_1_0479F3711A4074B5_TypeDefinitionIndex = 66625;

class Class_1_0479F3711A4074B5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0479F3711A4074B5__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::Client::PlanetFesTradingCardFriendsItem* a1, ::RPG::Client::PlanetFesTradingCardFriendsItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardFriendsItem*, ::RPG::Client::PlanetFesTradingCardFriendsItem*))((::PBYTE)hIl2Cpp + CLASS_1_0479F3711A4074B5_COMPARE_OFFSET))(this, a1, a2);
	}
};
