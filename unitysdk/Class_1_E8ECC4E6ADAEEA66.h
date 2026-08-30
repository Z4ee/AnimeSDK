#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E8ECC4E6ADAEEA66_CLEAR_OFFSET UNITYSDK_OFFSET(0x163D77C0)
#define CLASS_1_E8ECC4E6ADAEEA66__CTOR_OFFSET UNITYSDK_OFFSET(0x163D7820)

inline static constexpr unsigned int Class_1_E8ECC4E6ADAEEA66_TypeDefinitionIndex = 57868;

class Class_1_E8ECC4E6ADAEEA66 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::MVector3 BBFOLEOPPPL; // 0x18
	::System::Single KBKCPCDLDGO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8ECC4E6ADAEEA66__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8ECC4E6ADAEEA66_CLEAR_OFFSET))(this);
	}
};
