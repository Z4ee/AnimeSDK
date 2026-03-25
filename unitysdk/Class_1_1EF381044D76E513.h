#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StanceMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_1EF381044D76E513__CTOR_OFFSET UNITYSDK_OFFSET(0x10C7E260)

inline static constexpr unsigned int Class_1_1EF381044D76E513_TypeDefinitionIndex = 46559;

class Class_1_1EF381044D76E513 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_1; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::RPG::GameCore::FixPoint Field_1_5; // 0x20
	::RPG::GameCore::FixPoint Field_1_6; // 0x28
	::System::Int32 Field_1_2; // 0x30
	::RPG::GameCore::StanceMode Field_1_0; // 0x34
	::RPG::GameCore::FixPoint Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EF381044D76E513__CTOR_OFFSET))(this);
	}
};
