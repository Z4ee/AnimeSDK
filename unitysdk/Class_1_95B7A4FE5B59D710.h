#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_95B7A4FE5B59D710_METHOD_1_DC65D8808C338D98_OFFSET UNITYSDK_OFFSET(0x16503210)

inline static constexpr unsigned int Class_1_95B7A4FE5B59D710_TypeDefinitionIndex = 75704;

class Class_1_95B7A4FE5B59D710 : public ::System::Object
{
public:
	static ::RPG::Client::Pet::PetRarity Method_1_DC65D8808C338D98(::RPG::GameCore::ItemRarity a1)
	{
		return ((::RPG::Client::Pet::PetRarity(*)(::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + CLASS_1_95B7A4FE5B59D710_METHOD_1_DC65D8808C338D98_OFFSET))(a1);
	}
};
