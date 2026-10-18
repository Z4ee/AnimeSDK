#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StanceMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_1EF381044D76E513__CTOR_OFFSET UNITYSDK_OFFSET(0xBE52980)

inline static constexpr unsigned int Class_1_1EF381044D76E513_TypeDefinitionIndex = 57749;

class Class_1_1EF381044D76E513 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* MIAJNJNECOG; // 0x10
	::RPG::GameCore::FixPoint MBACHJJGMCI; // 0x18
	::RPG::GameCore::FixPoint MDAIMLBJFAD; // 0x20
	::RPG::GameCore::StanceMode FCGFFAJIBKA; // 0x28
	::System::Int32 JEADKAFLEAH; // 0x2C
	::System::Int32 PKICDFAEPKE; // 0x30
	::RPG::GameCore::FixPoint JBDEGMONPNP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EF381044D76E513__CTOR_OFFSET))(this);
	}
};
