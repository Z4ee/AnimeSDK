#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

class Class_1_21C7581DFE99F091_130;
namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x16EC63D0)
#define CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0x16EC62C0)
#define CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_9E16668DCD80C475_OFFSET UNITYSDK_OFFSET(0x16EC6310)
#define CLASS_2_FB50CDBDDEDBBCC8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC62B0)

inline static constexpr unsigned int Class_2_FB50CDBDDEDBBCC8_1_TypeDefinitionIndex = 71443;

class Class_2_FB50CDBDDEDBBCC8_1 : public ::Class_1_D019640AABA5E1A8
{
public:
	::Class_1_21C7581DFE99F091_130* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_21C7581DFE99F091_130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_130*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_9E16668DCD80C475(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_9E16668DCD80C475_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_1_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}
};
