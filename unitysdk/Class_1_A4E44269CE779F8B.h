#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A4E44269CE779F8B_METHOD_1_AB06A1CAAF2FB12A_OFFSET UNITYSDK_OFFSET(0x17E9DF40)

inline static constexpr unsigned int Class_1_A4E44269CE779F8B_TypeDefinitionIndex = 39387;

class Class_1_A4E44269CE779F8B : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0

	static ::System::Boolean Method_1_AB06A1CAAF2FB12A(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_1_A4E44269CE779F8B_METHOD_1_AB06A1CAAF2FB12A_OFFSET))(a1);
	}
};
