#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetLineup; }

#define CLASS_1_835674ABDEA6EB80_METHOD_1_27258F2D8B1148A3_OFFSET UNITYSDK_OFFSET(0x11FEE900)
#define CLASS_1_835674ABDEA6EB80_METHOD_1_62152561BE47EE3F_OFFSET UNITYSDK_OFFSET(0x11FEE9B0)

inline static constexpr unsigned int Class_1_835674ABDEA6EB80_TypeDefinitionIndex = 75655;

class Class_1_835674ABDEA6EB80 : public ::System::Object
{
public:
	static ::RPG::Client::Pet::IPetInstance* Method_1_27258F2D8B1148A3(::RPG::Client::Pet::IPetLineup* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Pet::IPetInstance*(*)(::RPG::Client::Pet::IPetLineup*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_835674ABDEA6EB80_METHOD_1_27258F2D8B1148A3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_62152561BE47EE3F(::RPG::Client::Pet::IPetLineup* a1, ::RPG::Client::Pet::PetInstanceIdentifier a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::Pet::IPetLineup*, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_835674ABDEA6EB80_METHOD_1_62152561BE47EE3F_OFFSET))(a1, a2);
	}
};
