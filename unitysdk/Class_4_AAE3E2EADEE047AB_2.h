#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseRspMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_5B567C8A01BAEDFE_125;
class Class_1_9AD828BA811E7C7A_2;

#define CLASS_4_AAE3E2EADEE047AB_2_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0xA856DE0)
#define CLASS_4_AAE3E2EADEE047AB_2_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0xA856DD0)
#define CLASS_4_AAE3E2EADEE047AB_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA856E90)

inline static constexpr unsigned int Class_4_AAE3E2EADEE047AB_2_TypeDefinitionIndex = 72577;

class Class_4_AAE3E2EADEE047AB_2 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseRspMessage_1<::Class_1_5B567C8A01BAEDFE_125*>
{
public:
	::System::Void _ctor(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_2__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_2_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	static ::Class_4_AAE3E2EADEE047AB_2* Method_4_416B12CFEB291691(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::Class_4_AAE3E2EADEE047AB_2*(*)(::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_2_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
