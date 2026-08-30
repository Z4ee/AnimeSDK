#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseRspMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_CE89E018B1132F67_1;
class Class_1_D17272E82AE804C2_367;

#define CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x16231EE0)
#define CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x16231ED0)
#define CLASS_4_AAE3E2EADEE047AB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16231F90)

inline static constexpr unsigned int Class_4_AAE3E2EADEE047AB_1_TypeDefinitionIndex = 77586;

class Class_4_AAE3E2EADEE047AB_1 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseRspMessage_1<::Class_1_D17272E82AE804C2_367*>
{
public:
	::System::Void _ctor(::Class_1_CE89E018B1132F67_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE89E018B1132F67_1*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	static ::Class_4_AAE3E2EADEE047AB_1* Method_4_416B12CFEB291691(::Class_1_CE89E018B1132F67_1* a1)
	{
		return ((::Class_4_AAE3E2EADEE047AB_1*(*)(::Class_1_CE89E018B1132F67_1*))((::PBYTE)hIl2Cpp + CLASS_4_AAE3E2EADEE047AB_1_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
