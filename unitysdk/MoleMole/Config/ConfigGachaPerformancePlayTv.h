#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1102B490)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV__CTOR_OFFSET UNITYSDK_OFFSET(0x1102B500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformancePlayTv_TypeDefinitionIndex = 82199;

	class ConfigGachaPerformancePlayTv : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* LoopTextureSheet; // 0x18
		::System::String* StartTextureSheet; // 0x20
		::System::String* EndTextureSheet; // 0x28
		::System::Int32 TvIndex; // 0x30
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType StageType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
