#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PET_PETINSTANCEIDENTIFIEREXTENSIONS_ISINVALID_OFFSET UNITYSDK_OFFSET(0xDAAD770)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetInstanceIdentifierExtensions_TypeDefinitionIndex = 75682;

	class PetInstanceIdentifierExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsInvalid(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEIDENTIFIEREXTENSIONS_ISINVALID_OFFSET))(a1);
		}
	};
}
