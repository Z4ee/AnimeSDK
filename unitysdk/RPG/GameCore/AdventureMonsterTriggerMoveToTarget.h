#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_METHOD_3_AB4771B3D5306720_OFFSET UNITYSDK_OFFSET(0x1CBBBB80)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_METHOD_3_D9D5AF08FAD6FF19_OFFSET UNITYSDK_OFFSET(0x1CBBBB40)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBBB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMonsterTriggerMoveToTarget_TypeDefinitionIndex = 19952;

	class AdventureMonsterTriggerMoveToTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* OverTime; // 0x20
		::RPG::GameCore::DynamicFloat* ToleranceDistance; // 0x28
		::RPG::GameCore::DynamicFloat* Speed; // 0x30
		::RPG::GameCore::AdventureMoveOnNavMeshFaceToType FaceToType; // 0x38
		::RPG::GameCore::TargetEvaluator* FaceToTarget; // 0x40
		::System::Boolean NeedWait; // 0x48
		::System::Boolean Reset; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9D5AF08FAD6FF19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_METHOD_3_D9D5AF08FAD6FF19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB4771B3D5306720(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVETOTARGET_METHOD_3_AB4771B3D5306720_OFFSET))(a1, a2);
		}
	};
}
