#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformancePlayTvEffectAnimNode_GachaPerformanceAnimCtrlType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTVEFFECTANIMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x110A2250)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTVEFFECTANIMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x110A22C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformancePlayTvEffectAnimNode_TypeDefinitionIndex = 46501;

	class ConfigGachaPerformancePlayTvEffectAnimNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* AnimClipName; // 0x18
		::System::String* PlayCondition; // 0x20
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType StageType; // 0x28
		::System::Int32 TvIndex; // 0x2C
		::MoleMole::Config::ConfigGachaPerformancePlayTvEffectAnimNode_GachaPerformanceAnimCtrlType CtrlType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTVEFFECTANIMNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTVEFFECTANIMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
