#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShowGachaPerformanceLightsNode_GachaPerformanceCtrlType.h"
#include "unitysdk/MoleMole/Config/ConfigShowGachaPerformanceLightsNode_GachaPerformanceLightType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSHOWGACHAPERFORMANCELIGHTSNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x158B48F0)
#define MOLEMOLE_CONFIG_CONFIGSHOWGACHAPERFORMANCELIGHTSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x158B4960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShowGachaPerformanceLightsNode_TypeDefinitionIndex = 57950;

	class ConfigShowGachaPerformanceLightsNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* StartOffset; // 0x18
		::MoleMole::Config::ConfigShowGachaPerformanceLightsNode_GachaPerformanceLightType LightType; // 0x20
		::MoleMole::Config::ConfigShowGachaPerformanceLightsNode_GachaPerformanceCtrlType CtrlType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWGACHAPERFORMANCELIGHTSNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOWGACHAPERFORMANCELIGHTSNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
