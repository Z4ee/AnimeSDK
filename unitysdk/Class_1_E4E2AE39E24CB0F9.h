#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_1_97E659ED8D5D259C_19;
class Class_3_FA020C2C23A72B3F;

#define CLASS_1_E4E2AE39E24CB0F9_METHOD_1_8560242B3E999847_OFFSET UNITYSDK_OFFSET(0x13A6A500)
#define CLASS_1_E4E2AE39E24CB0F9_METHOD_1_CDCC06C4E7F19251_OFFSET UNITYSDK_OFFSET(0x13A6A7F0)
#define CLASS_1_E4E2AE39E24CB0F9_METHOD_1_FAA5A8C9487986E1_OFFSET UNITYSDK_OFFSET(0x13A6A640)
#define CLASS_1_E4E2AE39E24CB0F9__CTOR_OFFSET UNITYSDK_OFFSET(0x13A6A4F0)

inline static constexpr unsigned int Class_1_E4E2AE39E24CB0F9_TypeDefinitionIndex = 70981;

class Class_1_E4E2AE39E24CB0F9 : public ::System::Object
{
public:
	::Class_1_97E659ED8D5D259C_19* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_97E659ED8D5D259C_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_19*))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8560242B3E999847(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9_METHOD_1_8560242B3E999847_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAA5A8C9487986E1(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9_METHOD_1_FAA5A8C9487986E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CDCC06C4E7F19251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9_METHOD_1_CDCC06C4E7F19251_OFFSET))(this);
	}
};
