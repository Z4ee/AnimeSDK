#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_25;
class Class_1_C376DB68B1C74261;
class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE_CREATEUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19FF2820)
#define MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF28D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIBaseScriptableAnimationNode_TypeDefinitionIndex = 82369;

	class ConfigUIBaseScriptableAnimationNode : public ::System::Object
	{
	public:
		::MoleMole::Config::BoolUISpecialNum* IsSkip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* CreateUIAnimationNode(::Class_1_43BD383C98B4C0C5_25* uiAnimationNodeContext, ::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup, ::Class_1_C376DB68B1C74261* player)
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_25*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASESCRIPTABLEANIMATIONNODE_CREATEUIANIMATIONNODE_OFFSET))(this, uiAnimationNodeContext, uiSpecialNumGroup, player);
		}
	};
}
