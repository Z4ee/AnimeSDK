#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17D63EC0)
#define MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D63F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVideoshopShowResultNode_TypeDefinitionIndex = 79630;

	class ConfigVideoshopShowResultNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ArgsKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIDEOSHOPSHOWRESULTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
