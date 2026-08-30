#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StanceMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_1EF381044D76E513__CTOR_OFFSET UNITYSDK_OFFSET(0x178857F0)

inline static constexpr unsigned int Class_1_1EF381044D76E513_TypeDefinitionIndex = 57903;

class Class_1_1EF381044D76E513 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* MIAJNJNECOG; // 0x10
	::System::Int32 PKICDFAEPKE; // 0x18
	::System::Int32 JEADKAFLEAH; // 0x1C
	::RPG::GameCore::FixPoint MDAIMLBJFAD; // 0x20
	::RPG::GameCore::FixPoint MBACHJJGMCI; // 0x28
	::RPG::GameCore::FixPoint JBDEGMONPNP; // 0x30
	::RPG::GameCore::StanceMode FCGFFAJIBKA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EF381044D76E513__CTOR_OFFSET))(this);
	}
};
