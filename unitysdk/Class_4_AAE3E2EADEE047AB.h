#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseRspMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_3F2088DC1442FBF8_1;
class Class_1_91EE8F68DA682B2E;

#define CLASS_4_AAE3E2EADEE047AB_METHOD_4_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA448120)
#define CLASS_4_AAE3E2EADEE047AB_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0xA448130)
#define CLASS_4_AAE3E2EADEE047AB_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0xA448110)
#define CLASS_4_AAE3E2EADEE047AB__CTOR_OFFSET UNITYSDK_OFFSET(0xA4481E0)

inline static constexpr unsigned int Class_4_AAE3E2EADEE047AB_TypeDefinitionIndex = 63507;

class Class_4_AAE3E2EADEE047AB : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseRspMessage_1<::Class_1_91EE8F68DA682B2E*>
{
public:
	::System::Void _ctor(::Class_1_3F2088DC1442FBF8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F2088DC1442FBF8_1*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::Class_1_91EE8F68DA682B2E* Method_4_24748FC20F375725()
	{
		return ((::Class_1_91EE8F68DA682B2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_METHOD_4_24748FC20F375725_OFFSET))(this);
	}

	static ::Class_4_AAE3E2EADEE047AB* Method_4_416B12CFEB291691(::Class_1_3F2088DC1442FBF8_1* a1)
	{
		return ((::Class_4_AAE3E2EADEE047AB*(*)(::Class_1_3F2088DC1442FBF8_1*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
