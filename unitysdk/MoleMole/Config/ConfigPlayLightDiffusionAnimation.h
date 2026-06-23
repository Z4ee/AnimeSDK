#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPlayLightDiffusionAnimation_DiffusionType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A352520)
#define MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3525E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayLightDiffusionAnimation_TypeDefinitionIndex = 77748;

	class ConfigPlayLightDiffusionAnimation : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single DiffusionDuration; // 0x18
		::System::Boolean UsePlayerPos; // 0x1C
		::MoleMole::Config::ConfigPlayLightDiffusionAnimation_DiffusionType Diffusion; // 0x20
		::MoleMole::Vector2Int StartPos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYLIGHTDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
