#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HITDAMAGESPLIT_METHOD_3_7EBC7C5360FC4922_OFFSET UNITYSDK_OFFSET(0x1D194880)
#define RPG_GAMECORE_HITDAMAGESPLIT_METHOD_3_B4D5534D92A33713_OFFSET UNITYSDK_OFFSET(0x1D1948D0)
#define RPG_GAMECORE_HITDAMAGESPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1948C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitDamageSplit_TypeDefinitionIndex = 23307;

	class HitDamageSplit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SplitTarget; // 0x18
		::System::Boolean ForceUseSelfSplit; // 0x20
		::RPG::GameCore::AliveStateMask AliveState; // 0x22
		::RPG::GameCore::DynamicFloat* SelfSplitRatio; // 0x28
		::RPG::GameCore::DynamicFloat* TargetSplitRatio; // 0x30
		::System::Boolean EnableStanceDamage; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITDAMAGESPLIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EBC7C5360FC4922(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HitDamageSplit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HitDamageSplit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITDAMAGESPLIT_METHOD_3_7EBC7C5360FC4922_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4D5534D92A33713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HitDamageSplit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HitDamageSplit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITDAMAGESPLIT_METHOD_3_B4D5534D92A33713_OFFSET))(a1, a2);
		}
	};
}
