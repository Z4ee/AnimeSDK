#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceAnimSpeedNode_GachaPerformanceAnimSpeed.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEANIMSPEEDNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16C3F6E0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEANIMSPEEDNODE_IFSHOWOFFSETTIME_OFFSET UNITYSDK_OFFSET(0x16C3F750)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEANIMSPEEDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3F7A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceAnimSpeedNode_TypeDefinitionIndex = 61174;

	class ConfigGachaPerformanceAnimSpeedNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* AnimCompKey; // 0x18
		::System::String* OffsetTime; // 0x20
		::MoleMole::Config::ConfigGachaPerformanceAnimSpeedNode_GachaPerformanceAnimSpeed Speed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEANIMSPEEDNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEANIMSPEEDNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Boolean IfShowOffsetTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEANIMSPEEDNODE_IFSHOWOFFSETTIME_OFFSET))(this);
		}
	};
}
