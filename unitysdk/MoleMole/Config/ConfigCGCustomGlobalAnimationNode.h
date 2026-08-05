#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BD4FEF0)
#define MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4FF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCGCustomGlobalAnimationNode_TypeDefinitionIndex = 85902;

	class ConfigCGCustomGlobalAnimationNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* Curve; // 0x18
		::System::String* MonoCGCustomGlobalAnimationGo; // 0x20
		::System::String* Duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCGCUSTOMGLOBALANIMATIONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
