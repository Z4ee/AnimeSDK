#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGAXISYROTATENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1270DBD0)
#define MOLEMOLE_CONFIG_CONFIGAXISYROTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1270DC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAxisYRotateNode_TypeDefinitionIndex = 76387;

	class ConfigAxisYRotateNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TargetGo; // 0x18
		::System::String* Angle; // 0x20
		::System::String* RotateCurve; // 0x28
		::System::String* Duration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAXISYROTATENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAXISYROTATENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
