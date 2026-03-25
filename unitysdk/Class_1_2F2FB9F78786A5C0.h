#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2F2FB9F78786A5C0__CTOR_OFFSET UNITYSDK_OFFSET(0x11567380)

inline static constexpr unsigned int Class_1_2F2FB9F78786A5C0_TypeDefinitionIndex = 45237;

class Class_1_2F2FB9F78786A5C0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_4; // 0x20
	::RPG::GameCore::AttackDamageType Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F2FB9F78786A5C0__CTOR_OFFSET))(this);
	}
};
