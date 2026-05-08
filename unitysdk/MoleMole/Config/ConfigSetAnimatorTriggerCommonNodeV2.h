#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x183C99A0)
#define MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x183C9A10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetAnimatorTriggerCommonNodeV2_TypeDefinitionIndex = 81145;

	class ConfigSetAnimatorTriggerCommonNodeV2 : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::System::String* AnimCompKey; // 0x28
		::System::String* ParamName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETANIMATORTRIGGERCOMMONNODEV2_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
