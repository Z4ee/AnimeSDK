#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicate.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCLOSEPREPAREDFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11026B40)
#define MOLEMOLE_CONFIG_CONFIGCLOSEPREPAREDFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11026BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigClosePreparedFullScreenVideoNode_TypeDefinitionIndex = 73215;

	class ConfigClosePreparedFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* VideoTag; // 0x18
		::MoleMole::Config::ConfigConditionPredicate DelayPredicate; // 0x20
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
