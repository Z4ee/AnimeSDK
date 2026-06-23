#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicate.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCLOSEPREPAREDFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18F30490)
#define MOLEMOLE_CONFIG_CONFIGCLOSEPREPAREDFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F30500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigClosePreparedFullScreenVideoNode_TypeDefinitionIndex = 83980;

	class ConfigClosePreparedFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigConditionPredicate DelayPredicate; // 0x18
		::System::String* VideoTag; // 0x28
		::System::Single delay; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEPREPAREDFULLSCREENVIDEONODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOSEPREPAREDFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
