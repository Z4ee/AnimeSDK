#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlBaseNode.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlMatAlphaNode_MatAlphaCtrlType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A4A9100)
#define MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A9170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlMatAlphaNode_TypeDefinitionIndex = 85379;

	class ConfigCurveCtrlMatAlphaNode : public ::MoleMole::Config::ConfigCurveCtrlBaseNode
	{
	public:
		::System::String* MatProperty; // 0x48
		::System::String* TargetMats; // 0x50
		::MoleMole::Config::ConfigCurveCtrlMatAlphaNode_MatAlphaCtrlType CtrlType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
