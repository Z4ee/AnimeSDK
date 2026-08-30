#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6A1F92A73CE83B57__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4638B0)

inline static constexpr unsigned int Class_1_6A1F92A73CE83B57_TypeDefinitionIndex = 56032;

class Class_1_6A1F92A73CE83B57 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
	::RPG::GameCore::AdventureAnimStateType LABNOBJEDBD; // 0x18
	::RPG::GameCore::AdventureAnimStateType PGFKKJLJJDN; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A1F92A73CE83B57__CTOR_OFFSET))(this);
	}
};
