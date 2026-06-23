#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x144D88F0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x144D89B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardMuteAudioNode_TypeDefinitionIndex = 45862;

	class ConfigChessboardMuteAudioNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDMUTEAUDIONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
