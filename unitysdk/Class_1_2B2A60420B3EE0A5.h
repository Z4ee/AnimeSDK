#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetKind.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2B2A60420B3EE0A5_METHOD_1_87ACF4AD3DF9B575_1_OFFSET UNITYSDK_OFFSET(0x1645E0D0)
#define CLASS_1_2B2A60420B3EE0A5_METHOD_1_87ACF4AD3DF9B575_OFFSET UNITYSDK_OFFSET(0x1645E080)

inline static constexpr unsigned int Class_1_2B2A60420B3EE0A5_TypeDefinitionIndex = 75730;

class Class_1_2B2A60420B3EE0A5 : public ::System::Object
{
public:
	static ::RPG::Client::Pet::BlindBox::BlindBoxPetKind Method_1_87ACF4AD3DF9B575(::Enum_3_0A3761FE34514D6C_1 a1)
	{
		return ((::RPG::Client::Pet::BlindBox::BlindBoxPetKind(*)(::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + CLASS_1_2B2A60420B3EE0A5_METHOD_1_87ACF4AD3DF9B575_OFFSET))(a1);
	}

	static ::Enum_3_0A3761FE34514D6C_1 Method_1_87ACF4AD3DF9B575_1(::RPG::Client::Pet::BlindBox::BlindBoxPetKind a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_1(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetKind))((::PBYTE)hIl2Cpp + CLASS_1_2B2A60420B3EE0A5_METHOD_1_87ACF4AD3DF9B575_1_OFFSET))(a1);
	}
};
