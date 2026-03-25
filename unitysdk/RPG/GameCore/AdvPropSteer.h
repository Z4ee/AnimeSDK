#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPROPSTEER_METHOD_3_1638D92EF43D021A_OFFSET UNITYSDK_OFFSET(0x16F3C360)
#define RPG_GAMECORE_ADVPROPSTEER_METHOD_3_7A98378EA4F71F67_OFFSET UNITYSDK_OFFSET(0x16F3C210)
#define RPG_GAMECORE_ADVPROPSTEER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3C2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPropSteer_TypeDefinitionIndex = 20230;

	class AdvPropSteer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SteerTarget; // 0x20
		::RPG::GameCore::DynamicFloat* SteerAngle; // 0x28
		::RPG::GameCore::PropSteerMode Mode; // 0x30
		::RPG::GameCore::DynamicFloat* Duration; // 0x38
		::RPG::GameCore::DynamicFloat* Speed; // 0x40
		::System::Boolean IsFollow; // 0x48
		::System::Boolean Stop; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A98378EA4F71F67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPropSteer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPropSteer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEER_METHOD_3_7A98378EA4F71F67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1638D92EF43D021A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPropSteer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPropSteer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPROPSTEER_METHOD_3_1638D92EF43D021A_OFFSET))(a1, a2);
		}
	};
}
