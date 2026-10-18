#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D019640AABA5E1A8.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"

class Class_1_21C7581DFE99F091_135;
namespace RPG::Client { class SwordTrainingGameInstance; }

#define CLASS_2_FB50CDBDDEDBBCC8_2_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x157674D0)
#define CLASS_2_FB50CDBDDEDBBCC8_2_METHOD_2_8E23425F959FF044_OFFSET UNITYSDK_OFFSET(0x157673C0)
#define CLASS_2_FB50CDBDDEDBBCC8_2_METHOD_2_9E16668DCD80C475_OFFSET UNITYSDK_OFFSET(0x15767410)
#define CLASS_2_FB50CDBDDEDBBCC8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x157673B0)

inline static constexpr unsigned int Class_2_FB50CDBDDEDBBCC8_2_TypeDefinitionIndex = 75049;

class Class_2_FB50CDBDDEDBBCC8_2 : public ::Class_1_D019640AABA5E1A8
{
public:
	::Class_1_21C7581DFE99F091_135* HCCBPCJNJMH; // 0x28

	::System::Void _ctor(::Class_1_21C7581DFE99F091_135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_135*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::SwordTraining::SwordTrainingGameStateType Method_2_8E23425F959FF044()
	{
		return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2_METHOD_2_8E23425F959FF044_OFFSET))(this);
	}

	::System::Void Method_2_9E16668DCD80C475(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2_METHOD_2_9E16668DCD80C475_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB50CDBDDEDBBCC8_2_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}
};
