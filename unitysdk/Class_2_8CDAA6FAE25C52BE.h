#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B523573B0FEEC688.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_8CDAA6FAE25C52BE_METHOD_2_EAA76DD2AE71C42F_OFFSET UNITYSDK_OFFSET(0x1098A380)
#define CLASS_2_8CDAA6FAE25C52BE_METHOD_2_FFE6AFE1CAAF2BB6_OFFSET UNITYSDK_OFFSET(0x1098A220)
#define CLASS_2_8CDAA6FAE25C52BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1098A370)

inline static constexpr unsigned int Class_2_8CDAA6FAE25C52BE_TypeDefinitionIndex = 44117;

class Class_2_8CDAA6FAE25C52BE : public ::Class_1_B523573B0FEEC688
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CDAA6FAE25C52BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FFE6AFE1CAAF2BB6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8CDAA6FAE25C52BE_METHOD_2_FFE6AFE1CAAF2BB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAA76DD2AE71C42F(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8CDAA6FAE25C52BE_METHOD_2_EAA76DD2AE71C42F_OFFSET))(this, P0);
	}
};
