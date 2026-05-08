#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPlayInnerWorldDiffusionAnimation_DiffusionType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFB0A8E0)
#define MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0A9A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayInnerWorldDiffusionAnimation_TypeDefinitionIndex = 52243;

	class ConfigPlayInnerWorldDiffusionAnimation : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean UsePlayerPos; // 0x18
		::System::Single DiffusionDuration; // 0x1C
		::MoleMole::Config::ConfigPlayInnerWorldDiffusionAnimation_DiffusionType Diffusion; // 0x20
		::MoleMole::Vector2Int StartPos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYINNERWORLDDIFFUSIONANIMATION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
