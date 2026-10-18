#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1362;
namespace RPG::Client::BlindBox::Pool { class IPoolContents; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetRepository; }

#define CLASS_1_3FB9028405005242_METHOD_1_A7D25390C563219C_OFFSET UNITYSDK_OFFSET(0x15775750)
#define CLASS_1_3FB9028405005242__CTOR_OFFSET UNITYSDK_OFFSET(0x157756F0)

inline static constexpr unsigned int Class_1_3FB9028405005242_TypeDefinitionIndex = 74938;

class Class_1_3FB9028405005242 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1362* ABOFCNEHLKK; // 0x10

	::System::Void _ctor(::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository*))((::PBYTE)hIl2Cpp + CLASS_1_3FB9028405005242__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::BlindBox::Pool::IPoolContents* Method_1_A7D25390C563219C(::System::UInt32 a1)
	{
		return ((::RPG::Client::BlindBox::Pool::IPoolContents*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3FB9028405005242_METHOD_1_A7D25390C563219C_OFFSET))(this, a1);
	}
};
