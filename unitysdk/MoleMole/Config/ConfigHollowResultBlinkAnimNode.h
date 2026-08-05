#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x172A5D20)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x172A5D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowResultBlinkAnimNode_TypeDefinitionIndex = 51643;

	class ConfigHollowResultBlinkAnimNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single DelayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBLINKANIMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
