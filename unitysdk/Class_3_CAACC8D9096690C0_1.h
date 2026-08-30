#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_637AE238D4A35C0D.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_CE89E018B1132F67_1;

#define CLASS_3_CAACC8D9096690C0_1_METHOD_3_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x18746EB0)
#define CLASS_3_CAACC8D9096690C0_1_METHOD_3_EEF493A950D075E1_OFFSET UNITYSDK_OFFSET(0x18746EC0)
#define CLASS_3_CAACC8D9096690C0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18746F40)

inline static constexpr unsigned int Class_3_CAACC8D9096690C0_1_TypeDefinitionIndex = 77597;

class Class_3_CAACC8D9096690C0_1 : public ::Class_2_637AE238D4A35C0D
{
public:
	::System::Void _ctor(::Class_1_CE89E018B1132F67_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE89E018B1132F67_1*))((::PBYTE)hIl2Cpp + CLASS_3_CAACC8D9096690C0_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_3_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAACC8D9096690C0_1_METHOD_3_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	static ::Class_3_CAACC8D9096690C0_1* Method_3_EEF493A950D075E1(::Class_1_CE89E018B1132F67_1* a1)
	{
		return ((::Class_3_CAACC8D9096690C0_1*(*)(::Class_1_CE89E018B1132F67_1*))((::PBYTE)hIl2Cpp + CLASS_3_CAACC8D9096690C0_1_METHOD_3_EEF493A950D075E1_OFFSET))(a1);
	}
};
