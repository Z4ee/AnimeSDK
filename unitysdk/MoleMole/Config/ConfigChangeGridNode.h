#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ChessboardChangeGridType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/DiffusionChangeGridConfig.h"
#include "unitysdk/MoleMole/Config/SinkAllThenRiseAllPhaseType.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B7E4270)
#define MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E4370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChangeGridNode_TypeDefinitionIndex = 83786;

	class ConfigChangeGridNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::SinkAllThenRiseAllPhaseType SinkAllThenRiseAllPhase; // 0x18
		::System::Single ChangeGridDelay; // 0x1C
		::MoleMole::Config::DiffusionChangeGridConfig RiseDiffusionConfig; // 0x20
		::MoleMole::Config::DiffusionChangeGridConfig SinkDiffusionConfig; // 0x24
		::MoleMole::Config::ChessboardChangeGridType changeGridType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHANGEGRIDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
