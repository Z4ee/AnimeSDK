#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17050DB0)
#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x17050E70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayFullSceneVideoIndex_TypeDefinitionIndex = 42144;

	class ConfigPlayFullSceneVideoIndex : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean autoPlay; // 0x18
		::System::Boolean waitForFinish; // 0x19
		::System::Int32 index; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
