#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Item; }

#define CLASS_1_47435AA11238CFBE_METHOD_1_36824FE3855A31FF_OFFSET UNITYSDK_OFFSET(0xB72ED30)

inline static constexpr unsigned int Class_1_47435AA11238CFBE_TypeDefinitionIndex = 75665;

class Class_1_47435AA11238CFBE : public ::System::Object
{
public:
	static ::RPG::Client::Pet::PetInstanceIdentifier Method_1_36824FE3855A31FF(::Proto::Item* a1)
	{
		return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::Proto::Item*))((::PBYTE)hIl2Cpp + CLASS_1_47435AA11238CFBE_METHOD_1_36824FE3855A31FF_OFFSET))(a1);
	}
};
