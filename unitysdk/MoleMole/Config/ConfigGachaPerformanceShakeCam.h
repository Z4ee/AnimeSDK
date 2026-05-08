#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1424B610)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1424B680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceShakeCam_TypeDefinitionIndex = 70641;

	class ConfigGachaPerformanceShakeCam : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* CamShakeKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
