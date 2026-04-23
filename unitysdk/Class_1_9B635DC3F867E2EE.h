#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9B635DC3F867E2EE_CLEAR_OFFSET UNITYSDK_OFFSET(0xAFEDAA0)
#define CLASS_1_9B635DC3F867E2EE__CTOR_OFFSET UNITYSDK_OFFSET(0xAFEDAF0)

inline static constexpr unsigned int Class_1_9B635DC3F867E2EE_TypeDefinitionIndex = 49518;

class Class_1_9B635DC3F867E2EE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_3; // 0x10
	::RPG::GameCore::EntityTypeMask Field_1_2; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::RPG::GameCore::RtStackSkillTargetRedirectPhase Field_1_0; // 0x24
	::RPG::GameCore::TeamTypeMask Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B635DC3F867E2EE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B635DC3F867E2EE_CLEAR_OFFSET))(this);
	}
};
