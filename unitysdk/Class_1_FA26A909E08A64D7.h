#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }

#define CLASS_1_FA26A909E08A64D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03E3B0)

inline static constexpr unsigned int Class_1_FA26A909E08A64D7_TypeDefinitionIndex = 41748;

class Class_1_FA26A909E08A64D7 : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameFlappyBirdBlockConfig* EABKOHGCHFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA26A909E08A64D7__CTOR_OFFSET))(this);
	}
};
