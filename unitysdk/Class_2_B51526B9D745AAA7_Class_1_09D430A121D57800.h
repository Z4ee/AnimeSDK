#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_B51526B9D745AAA7_CLASS_1_09D430A121D57800__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A6060)

inline static constexpr unsigned int Class_2_B51526B9D745AAA7_Class_1_09D430A121D57800_TypeDefinitionIndex = 71789;

class Class_2_B51526B9D745AAA7_Class_1_09D430A121D57800 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Boolean NKELNPKIIHF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B51526B9D745AAA7_CLASS_1_09D430A121D57800__CTOR_OFFSET))(this);
	}
};
