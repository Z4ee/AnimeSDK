#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseRspMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_9AD828BA811E7C7A_2;
class Class_1_D17272E82AE804C2_319;

#define CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x1429F8C0)
#define CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x1429F8B0)
#define CLASS_4_AAE3E2EADEE047AB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1429F970)

inline static constexpr unsigned int Class_4_AAE3E2EADEE047AB_1_TypeDefinitionIndex = 72576;

class Class_4_AAE3E2EADEE047AB_1 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseRspMessage_1<::Class_1_D17272E82AE804C2_319*>
{
public:
	::System::Void _ctor(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	static ::Class_4_AAE3E2EADEE047AB_1* Method_4_416B12CFEB291691(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::Class_4_AAE3E2EADEE047AB_1*(*)(::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
