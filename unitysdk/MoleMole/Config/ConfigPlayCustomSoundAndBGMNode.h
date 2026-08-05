#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xF147DA0)
#define MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xF147E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayCustomSoundAndBGMNode_TypeDefinitionIndex = 64297;

	class ConfigPlayCustomSoundAndBGMNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYCUSTOMSOUNDANDBGMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
