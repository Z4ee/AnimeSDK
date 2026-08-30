#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StanceMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_1EF381044D76E513__CTOR_OFFSET UNITYSDK_OFFSET(0xBF732D0)

inline static constexpr unsigned int Class_1_1EF381044D76E513_TypeDefinitionIndex = 57903;

class Class_1_1EF381044D76E513 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* MIAJNJNECOG; // 0x10
	::RPG::GameCore::StanceMode FCGFFAJIBKA; // 0x18
	::System::Int32 PKICDFAEPKE; // 0x1C
	::RPG::GameCore::FixPoint MBACHJJGMCI; // 0x20
	::System::Int32 JEADKAFLEAH; // 0x28
	::RPG::GameCore::FixPoint JBDEGMONPNP; // 0x30
	::RPG::GameCore::FixPoint MDAIMLBJFAD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EF381044D76E513__CTOR_OFFSET))(this);
	}
};
