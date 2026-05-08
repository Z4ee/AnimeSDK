#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFB14290)
#define MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFB14300)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHollowEntityShowPlayerOnNode_TypeDefinitionIndex = 48453;

	class ConfigHollowEntityShowPlayerOnNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::PlayerOnViewState PlayerOnState; // 0x18
		::System::Boolean FixedPlayerOnState; // 0x19
		::System::Boolean FixedPlayerOnKey; // 0x1A
		::System::Boolean UsePrev; // 0x1B
		::MoleMole::Config::DirectionPlayerOnKey PlayerOnKey; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
