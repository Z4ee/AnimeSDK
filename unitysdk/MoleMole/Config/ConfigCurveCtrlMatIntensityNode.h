#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlBaseNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLMATINTENSITYNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A064360)
#define MOLEMOLE_CONFIG_CONFIGCURVECTRLMATINTENSITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0643D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlMatIntensityNode_TypeDefinitionIndex = 45472;

	class ConfigCurveCtrlMatIntensityNode : public ::MoleMole::Config::ConfigCurveCtrlBaseNode
	{
	public:
		::System::String* MatProperty; // 0x48
		::System::String* TargetMats; // 0x50
		::System::String* TargetColor; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLMATINTENSITYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLMATINTENSITYNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
