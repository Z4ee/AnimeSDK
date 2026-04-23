#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesTradingCardFriendsItem; }

#define CLASS_1_AB028FC8D10740D2_COMPARE_OFFSET UNITYSDK_OFFSET(0x91216A0)
#define CLASS_1_AB028FC8D10740D2__CTOR_OFFSET UNITYSDK_OFFSET(0x91219D0)

inline static constexpr unsigned int Class_1_AB028FC8D10740D2_TypeDefinitionIndex = 61350;

class Class_1_AB028FC8D10740D2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB028FC8D10740D2__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::Client::PlanetFesTradingCardFriendsItem* a1, ::RPG::Client::PlanetFesTradingCardFriendsItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardFriendsItem*, ::RPG::Client::PlanetFesTradingCardFriendsItem*))((::PBYTE)hIl2Cpp + CLASS_1_AB028FC8D10740D2_COMPARE_OFFSET))(this, a1, a2);
	}
};
