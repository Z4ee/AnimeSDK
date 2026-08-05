#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x172A57A0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x172A5810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceFadeOutEffectNode_TypeDefinitionIndex = 61079;

	class ConfigGachaPerformanceFadeOutEffectNode : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::System::String* EffectPattern; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
