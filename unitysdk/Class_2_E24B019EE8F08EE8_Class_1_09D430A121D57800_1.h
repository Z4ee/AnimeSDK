#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_E24B019EE8F08EE8_CLASS_1_09D430A121D57800_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16C21B00)

inline static constexpr unsigned int Class_2_E24B019EE8F08EE8_Class_1_09D430A121D57800_1_TypeDefinitionIndex = 71735;

class Class_2_E24B019EE8F08EE8_Class_1_09D430A121D57800_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Boolean NKELNPKIIHF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_CLASS_1_09D430A121D57800_1__CTOR_OFFSET))(this);
	}
};
