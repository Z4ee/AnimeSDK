#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLBASENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A868F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlBaseNode_TypeDefinitionIndex = 57318;

	class ConfigCurveCtrlBaseNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* ForceFinishCondition; // 0x18
		::System::String* SuspendCondition; // 0x20
		::System::String* TargetValue; // 0x28
		::System::String* TimeScale; // 0x30
		::System::String* CurveKey; // 0x38
		::System::String* Duration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLBASENODE__CTOR_OFFSET))(this);
		}
	};
}
