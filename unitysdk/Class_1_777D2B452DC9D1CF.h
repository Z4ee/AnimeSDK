#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_777D2B452DC9D1CF_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B19D20)
#define CLASS_1_777D2B452DC9D1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x18B19D80)

inline static constexpr unsigned int Class_1_777D2B452DC9D1CF_TypeDefinitionIndex = 53003;

class Class_1_777D2B452DC9D1CF : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777D2B452DC9D1CF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777D2B452DC9D1CF_CLEAR_OFFSET))(this);
	}
};
