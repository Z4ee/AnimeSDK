#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshMoveCalcType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_METHOD_3_BF22CD411F1CBBC4_OFFSET UNITYSDK_OFFSET(0x16F56620)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_METHOD_3_DB9C9141FDC9BD88_OFFSET UNITYSDK_OFFSET(0x16F566A0)
#define RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F56670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMonsterTriggerMove_TypeDefinitionIndex = 18472;

	class AdventureMonsterTriggerMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureMoveOnNavMeshMoveCalcType MoveDurationCalcType; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::RPG::GameCore::DynamicFloat* Speed; // 0x28
		::RPG::GameCore::AdventureMoveOnNavMeshFaceToType FaceToType; // 0x30
		::RPG::GameCore::TargetEvaluator* FaceToTarget; // 0x38
		::System::Boolean NeedWait; // 0x40
		::System::Boolean Reset; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BF22CD411F1CBBC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureMonsterTriggerMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureMonsterTriggerMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_METHOD_3_BF22CD411F1CBBC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB9C9141FDC9BD88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureMonsterTriggerMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureMonsterTriggerMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERTRIGGERMOVE_METHOD_3_DB9C9141FDC9BD88_OFFSET))(a1, a2);
		}
	};
}
