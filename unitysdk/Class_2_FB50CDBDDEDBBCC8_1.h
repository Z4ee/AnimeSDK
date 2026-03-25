#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

class Class_1_4CF8088A158DCE25_95;
namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8C24790)
#define CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x8C246B0)
#define CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_9E16668DCD80C475_OFFSET UNITYSDK_OFFSET(0x8C245F0)
#define CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_BA3A3B0992257D00_OFFSET UNITYSDK_OFFSET(0x8C245E0)
#define CLASS_2_FB50CDBDDEDBBCC8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8C245D0)

inline static constexpr unsigned int Class_2_FB50CDBDDEDBBCC8_1_TypeDefinitionIndex = 61596;

class Class_2_FB50CDBDDEDBBCC8_1 : public ::Class_1_D019640AABA5E1A8
{
public:
	::Class_1_4CF8088A158DCE25_95* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_4CF8088A158DCE25_95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_95*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_BA3A3B0992257D00()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_BA3A3B0992257D00_OFFSET))(this);
	}

	::System::Void Method_2_9E16668DCD80C475(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_9E16668DCD80C475_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
