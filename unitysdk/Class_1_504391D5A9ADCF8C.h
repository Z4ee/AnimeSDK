#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_504391D5A9ADCF8C_CLEAR_OFFSET UNITYSDK_OFFSET(0xB77A6E0)
#define CLASS_1_504391D5A9ADCF8C__CTOR_OFFSET UNITYSDK_OFFSET(0xB77A730)

inline static constexpr unsigned int Class_1_504391D5A9ADCF8C_TypeDefinitionIndex = 55690;

class Class_1_504391D5A9ADCF8C : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::Enum_3_0A3761FE34514D6C_5 GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_504391D5A9ADCF8C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_504391D5A9ADCF8C_CLEAR_OFFSET))(this);
	}
};
