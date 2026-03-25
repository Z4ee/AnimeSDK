#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REDUCESTANCERATIO_METHOD_3_329734278FBD467C_OFFSET UNITYSDK_OFFSET(0x17588660)
#define RPG_GAMECORE_REDUCESTANCERATIO_METHOD_3_99FC259B954987C1_OFFSET UNITYSDK_OFFSET(0x175885D0)
#define RPG_GAMECORE_REDUCESTANCERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x17588630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReduceStanceRatio_TypeDefinitionIndex = 21804;

	class ReduceStanceRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::RPG::GameCore::DynamicFloat* ReduceValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDUCESTANCERATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99FC259B954987C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReduceStanceRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReduceStanceRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDUCESTANCERATIO_METHOD_3_99FC259B954987C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_329734278FBD467C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReduceStanceRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReduceStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDUCESTANCERATIO_METHOD_3_329734278FBD467C_OFFSET))(a1, a2);
		}
	};
}
