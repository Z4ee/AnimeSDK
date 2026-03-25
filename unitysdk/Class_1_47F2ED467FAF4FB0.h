#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AIMonsterIDSelector; }

#define CLASS_1_47F2ED467FAF4FB0_METHOD_1_3BBFFDD866CB73F0_OFFSET UNITYSDK_OFFSET(0x118565C0)

inline static constexpr unsigned int Class_1_47F2ED467FAF4FB0_TypeDefinitionIndex = 43426;

class Class_1_47F2ED467FAF4FB0 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_3BBFFDD866CB73F0(::RPG::GameCore::AIMonsterIDSelector* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AIMonsterIDSelector*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_47F2ED467FAF4FB0_METHOD_1_3BBFFDD866CB73F0_OFFSET))(a1, a2);
	}
};
