#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1625EE30)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV__CTOR_OFFSET UNITYSDK_OFFSET(0x1625EEA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformancePlayTv_TypeDefinitionIndex = 55857;

	class ConfigGachaPerformancePlayTv : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* StartTextureSheet; // 0x18
		::System::String* LoopTextureSheet; // 0x20
		::System::String* EndTextureSheet; // 0x28
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType StageType; // 0x30
		::System::Int32 TvIndex; // 0x34

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
