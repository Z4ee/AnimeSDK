#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlBaseNode.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlLocalPosNode_PosType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A4A9050)
#define MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A90C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlLocalPosNode_TypeDefinitionIndex = 72992;

	class ConfigCurveCtrlLocalPosNode : public ::MoleMole::Config::ConfigCurveCtrlBaseNode
	{
	public:
		::System::String* TargetTrans; // 0x48
		::System::Boolean UseParentCoordinate; // 0x50
		::MoleMole::Config::ConfigCurveCtrlLocalPosNode_PosType PosT; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
