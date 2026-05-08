#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1073;

#define CLASS_1_F20CE690DF16F031_CLASS_1_9E704A21AE856BF1_METHOD_1_58D0CBD885BBA17E_OFFSET UNITYSDK_OFFSET(0x1C0C54F0)
#define CLASS_1_F20CE690DF16F031_CLASS_1_9E704A21AE856BF1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C54E0)

inline static constexpr unsigned int Class_1_F20CE690DF16F031_Class_1_9E704A21AE856BF1_TypeDefinitionIndex = 83968;

class Class_1_F20CE690DF16F031_Class_1_9E704A21AE856BF1 : public ::System::Object
{
public:
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_CLASS_1_9E704A21AE856BF1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_58D0CBD885BBA17E(::Class_2_208CC9941471731A_1073* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1073*))((::PBYTE)hIl2Cpp + CLASS_1_F20CE690DF16F031_CLASS_1_9E704A21AE856BF1_METHOD_1_58D0CBD885BBA17E_OFFSET))(this, a1);
	}
};
