#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F1CE991A39DFDC5B.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_7917F1BDFBEAE045_METHOD_3_9290AE8E25BF3CE2_OFFSET UNITYSDK_OFFSET(0x16113980)
#define CLASS_3_7917F1BDFBEAE045__CTOR_OFFSET UNITYSDK_OFFSET(0x16113B90)

inline static constexpr unsigned int Class_3_7917F1BDFBEAE045_TypeDefinitionIndex = 76568;

class Class_3_7917F1BDFBEAE045 : public ::Class_2_F1CE991A39DFDC5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7917F1BDFBEAE045__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9290AE8E25BF3CE2(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_7917F1BDFBEAE045_METHOD_3_9290AE8E25BF3CE2_OFFSET))(this, a1);
	}
};
