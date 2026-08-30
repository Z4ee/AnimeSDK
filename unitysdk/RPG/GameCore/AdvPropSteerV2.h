#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/SteerModeV2.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPROPSTEERV2_METHOD_3_6C23C6000BACEC56_OFFSET UNITYSDK_OFFSET(0x1CDD5D40)
#define RPG_GAMECORE_ADVPROPSTEERV2_METHOD_3_DA0AE9DE623B1B89_OFFSET UNITYSDK_OFFSET(0x1CDD5DC0)
#define RPG_GAMECORE_ADVPROPSTEERV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD5D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPropSteerV2_TypeDefinitionIndex = 21804;

	class AdvPropSteerV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SteerModeV2 SteerMode; // 0x20
		::RPG::GameCore::DynamicFloat* SteerAngle; // 0x28
		::RPG::GameCore::TargetEvaluator* SteerTarget; // 0x30
		::RPG::GameCore::TargetEvaluator* SteerFollowTarget; // 0x38
		::System::Boolean EnableFollow; // 0x40
		::RPG::GameCore::DynamicFloat* StartThreshold; // 0x48
		::RPG::GameCore::DynamicFloat* StopThreshold; // 0x50
		::RPG::GameCore::PropSteerMode SpeedMode; // 0x58
		::RPG::GameCore::DynamicFloat* Duration; // 0x60
		::RPG::GameCore::DynamicFloat* Speed; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEERV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C23C6000BACEC56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPropSteerV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPropSteerV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEERV2_METHOD_3_6C23C6000BACEC56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA0AE9DE623B1B89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPropSteerV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPropSteerV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEERV2_METHOD_3_DA0AE9DE623B1B89_OFFSET))(a1, a2);
		}
	};
}
