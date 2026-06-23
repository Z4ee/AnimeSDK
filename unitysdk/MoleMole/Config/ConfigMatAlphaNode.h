#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGMATALPHANODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xE96DD70)
#define MOLEMOLE_CONFIG_CONFIGMATALPHANODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE96DDE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMatAlphaNode_TypeDefinitionIndex = 41063;

	class ConfigMatAlphaNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TargetMats; // 0x18
		::System::String* MatProperty; // 0x20
		::System::Single TargetValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATALPHANODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATALPHANODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
