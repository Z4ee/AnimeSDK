#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_59.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOCLIENT_OFFSET UNITYSDK_OFFSET(0xDAB0DF0)
#define RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOPROTO_OFFSET UNITYSDK_OFFSET(0xDAB0E40)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetLineupShapeExtensions_TypeDefinitionIndex = 75688;

	class PetLineupShapeExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::PetLineupShape ToClient(::Enum_3_0A3761FE34514D6C_59 a1)
		{
			return ((::RPG::Client::Pet::PetLineupShape(*)(::Enum_3_0A3761FE34514D6C_59))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOCLIENT_OFFSET))(a1);
		}

		static ::Enum_3_0A3761FE34514D6C_59 ToProto(::RPG::Client::Pet::PetLineupShape a1)
		{
			return ((::Enum_3_0A3761FE34514D6C_59(*)(::RPG::Client::Pet::PetLineupShape))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOPROTO_OFFSET))(a1);
		}
	};
}
