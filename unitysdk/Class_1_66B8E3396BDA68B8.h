#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AdventureDyingParam; }

#define CLASS_1_66B8E3396BDA68B8_CLEAR_OFFSET UNITYSDK_OFFSET(0x12554400)
#define CLASS_1_66B8E3396BDA68B8__CTOR_OFFSET UNITYSDK_OFFSET(0x12554450)

inline static constexpr unsigned int Class_1_66B8E3396BDA68B8_TypeDefinitionIndex = 53413;

class Class_1_66B8E3396BDA68B8 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureDyingParam* Field_1_1; // 0x10
	::RPG::GameCore::AdventureAttackResult Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B8E3396BDA68B8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B8E3396BDA68B8_CLEAR_OFFSET))(this);
	}
};
