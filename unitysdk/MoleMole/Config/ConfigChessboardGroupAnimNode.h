#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class AnimationCurveUISpecialNum; }
namespace MoleMole::Config { class FloatUISpecialNum; }
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPANIMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x186AC690)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPANIMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x186AC710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardGroupAnimNode_TypeDefinitionIndex = 43340;

	class ConfigChessboardGroupAnimNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* CustomSoundEventID; // 0x18
		::MoleMole::Config::AnimationCurveUISpecialNum* FrequencyCurve; // 0x20
		::MoleMole::Config::FloatUISpecialNum* FrequencyMin; // 0x28
		::MoleMole::Config::FloatUISpecialNum* FrequencyMax; // 0x30
		::MoleMole::Config::IntUISpecialNum* AnimType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPANIMNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDGROUPANIMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
