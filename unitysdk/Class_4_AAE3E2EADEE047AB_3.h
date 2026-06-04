#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseRspMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_9AD828BA811E7C7A_2;
class Class_1_D17272E82AE804C2_321;

#define CLASS_4_AAE3E2EADEE047AB_3_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0xA970C50)
#define CLASS_4_AAE3E2EADEE047AB_3_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0xA970C40)
#define CLASS_4_AAE3E2EADEE047AB_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA970D00)

inline static constexpr unsigned int Class_4_AAE3E2EADEE047AB_3_TypeDefinitionIndex = 72597;

class Class_4_AAE3E2EADEE047AB_3 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseRspMessage_1<::Class_1_D17272E82AE804C2_321*>
{
public:
	::System::Void _ctor(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_3__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_3_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	static ::Class_4_AAE3E2EADEE047AB_3* Method_4_416B12CFEB291691(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::Class_4_AAE3E2EADEE047AB_3*(*)(::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_3_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
