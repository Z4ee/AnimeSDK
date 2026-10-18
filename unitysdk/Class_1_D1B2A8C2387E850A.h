#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/BlindBoxCostCalculateResult.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/BlindBoxCostExchangeRatio.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1363;

#define CLASS_1_D1B2A8C2387E850A_METHOD_1_22F02C401FEB58A1_OFFSET UNITYSDK_OFFSET(0x154EB730)
#define CLASS_1_D1B2A8C2387E850A_METHOD_1_D96CC6B9699818E2_OFFSET UNITYSDK_OFFSET(0x154EB770)
#define CLASS_1_D1B2A8C2387E850A__CTOR_OFFSET UNITYSDK_OFFSET(0x154EB710)

inline static constexpr unsigned int Class_1_D1B2A8C2387E850A_TypeDefinitionIndex = 74942;

class Class_1_D1B2A8C2387E850A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1363* OJPOMMLGJMI; // 0x10
	::Class_0_16E4307DCC419505_1363* HCBGDLHMMHN; // 0x18
	::Class_0_16E4307DCC419505_1363* KPDHEKMAFOA; // 0x20
	::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio BFPOCEDAOMA; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_1363* a1, ::Class_0_16E4307DCC419505_1363* a2, ::Class_0_16E4307DCC419505_1363* a3, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1363*, ::Class_0_16E4307DCC419505_1363*, ::Class_0_16E4307DCC419505_1363*, ::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio))((::PBYTE)hIl2Cpp + CLASS_1_D1B2A8C2387E850A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio Method_1_22F02C401FEB58A1()
	{
		return ((::RPG::Client::BlindBox::Pool::BlindBoxCostExchangeRatio(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1B2A8C2387E850A_METHOD_1_22F02C401FEB58A1_OFFSET))(this);
	}

	::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult Method_1_D96CC6B9699818E2(::System::UInt32 a1)
	{
		return ((::RPG::Client::BlindBox::Pool::BlindBoxCostCalculateResult(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1B2A8C2387E850A_METHOD_1_D96CC6B9699818E2_OFFSET))(this, a1);
	}
};
