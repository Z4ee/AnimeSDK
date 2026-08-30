#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_E543FD1529E01E97_CLASS_1_09D430A121D57800__CTOR_OFFSET UNITYSDK_OFFSET(0xC148DD0)

inline static constexpr unsigned int Class_2_E543FD1529E01E97_Class_1_09D430A121D57800_TypeDefinitionIndex = 71732;

class Class_2_E543FD1529E01E97_Class_1_09D430A121D57800 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Boolean NKELNPKIIHF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E543FD1529E01E97_CLASS_1_09D430A121D57800__CTOR_OFFSET))(this);
	}
};
