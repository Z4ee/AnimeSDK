#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class PetModule; }

#define CLASS_1_3EBA9852ABF484B0_METHOD_1_86B2BF6CBAA90C3B_OFFSET UNITYSDK_OFFSET(0xB9BCC50)
#define CLASS_1_3EBA9852ABF484B0_METHOD_1_9A253755BFDE0B8C_OFFSET UNITYSDK_OFFSET(0xB9BCE00)
#define CLASS_1_3EBA9852ABF484B0_METHOD_1_E99F4FE17FA47023_OFFSET UNITYSDK_OFFSET(0xB9BCE80)

inline static constexpr unsigned int Class_1_3EBA9852ABF484B0_TypeDefinitionIndex = 75717;

class Class_1_3EBA9852ABF484B0 : public ::System::Object
{
public:
	static ::RPG::Client::Pet::IPet* Method_1_86B2BF6CBAA90C3B(::RPG::Client::Pet::PetIdentifier a1)
	{
		return ((::RPG::Client::Pet::IPet*(*)(::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_3EBA9852ABF484B0_METHOD_1_86B2BF6CBAA90C3B_OFFSET))(a1);
	}

	static ::RPG::Client::Pet::IPetInstance* Method_1_E99F4FE17FA47023(::RPG::Client::Pet::PetInstanceIdentifier a1)
	{
		return ((::RPG::Client::Pet::IPetInstance*(*)(::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_3EBA9852ABF484B0_METHOD_1_E99F4FE17FA47023_OFFSET))(a1);
	}

	static ::RPG::Client::Pet::PetModule* Method_1_9A253755BFDE0B8C()
	{
		return ((::RPG::Client::Pet::PetModule*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3EBA9852ABF484B0_METHOD_1_9A253755BFDE0B8C_OFFSET))();
	}
};
