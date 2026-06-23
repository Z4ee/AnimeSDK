#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17D5DEA0)
#define MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5DF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetCameraCenter_TypeDefinitionIndex = 58437;

	class ConfigSetCameraCenter : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERACENTER_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
