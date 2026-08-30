#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B523573B0FEEC688.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_0DCCF11290863A0D_METHOD_2_2195E49F2E39FE27_OFFSET UNITYSDK_OFFSET(0x16EE3910)
#define CLASS_2_0DCCF11290863A0D__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE3A60)

inline static constexpr unsigned int Class_2_0DCCF11290863A0D_TypeDefinitionIndex = 55331;

class Class_2_0DCCF11290863A0D : public ::Class_1_B523573B0FEEC688
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DCCF11290863A0D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2195E49F2E39FE27(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DCCF11290863A0D_METHOD_2_2195E49F2E39FE27_OFFSET))(this, a1);
	}
};
