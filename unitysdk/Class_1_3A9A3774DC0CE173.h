#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniGameHundredFloorConfig; }

#define CLASS_1_3A9A3774DC0CE173_CLEAR_OFFSET UNITYSDK_OFFSET(0x187DB390)
#define CLASS_1_3A9A3774DC0CE173__CTOR_OFFSET UNITYSDK_OFFSET(0x187DB3E0)

inline static constexpr unsigned int Class_1_3A9A3774DC0CE173_TypeDefinitionIndex = 40796;

class Class_1_3A9A3774DC0CE173 : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameHundredFloorConfig* Field_1_0; // 0x10
	::Struct_2_B6A3FA7992F9F37E Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9A3774DC0CE173__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A9A3774DC0CE173_CLEAR_OFFSET))(this);
	}
};
