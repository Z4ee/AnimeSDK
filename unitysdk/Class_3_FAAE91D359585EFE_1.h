#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BAACDA6D506721D1_5.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_FAAE91D359585EFE_1_METHOD_3_36089B41D6EFA71A_OFFSET UNITYSDK_OFFSET(0x14012130)
#define CLASS_3_FAAE91D359585EFE_1_METHOD_3_9290AE8E25BF3CE2_OFFSET UNITYSDK_OFFSET(0x14011F00)
#define CLASS_3_FAAE91D359585EFE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14012110)

inline static constexpr unsigned int Class_3_FAAE91D359585EFE_1_TypeDefinitionIndex = 71565;

class Class_3_FAAE91D359585EFE_1 : public ::Class_2_BAACDA6D506721D1_5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAAE91D359585EFE_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9290AE8E25BF3CE2(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_FAAE91D359585EFE_1_METHOD_3_9290AE8E25BF3CE2_OFFSET))(this, a1);
	}

	::System::Void Method_3_36089B41D6EFA71A(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_FAAE91D359585EFE_1_METHOD_3_36089B41D6EFA71A_OFFSET))(this, a1);
	}
};
