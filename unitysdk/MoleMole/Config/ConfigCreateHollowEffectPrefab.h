#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12302FA0)
#define MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x12303010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCreateHollowEffectPrefab_TypeDefinitionIndex = 60324;

	class ConfigCreateHollowEffectPrefab : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* Prefab; // 0x18
		::MoleMole::Config::BoolUISpecialNum* WaitForComplete; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCREATEHOLLOWEFFECTPREFAB_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
