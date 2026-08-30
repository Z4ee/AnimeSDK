#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_84A8303CB3C9005F_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E55460)
#define CLASS_1_84A8303CB3C9005F__CTOR_OFFSET UNITYSDK_OFFSET(0x17E554B0)

inline static constexpr unsigned int Class_1_84A8303CB3C9005F_TypeDefinitionIndex = 55067;

class Class_1_84A8303CB3C9005F : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84A8303CB3C9005F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84A8303CB3C9005F_CLEAR_OFFSET))(this);
	}
};
