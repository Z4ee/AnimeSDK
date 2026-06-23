#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192A2FC0)
#define MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192A3030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRenderVisibleNode_TypeDefinitionIndex = 72807;

	class ConfigRenderVisibleNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* Renderer; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRENDERVISIBLENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
