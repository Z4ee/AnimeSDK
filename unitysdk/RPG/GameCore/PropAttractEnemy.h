#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttractEnemySelectMode.h"
#include "unitysdk/RPG/GameCore/PropAttractEnemyBehaviourType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_PROPATTRACTENEMY_METHOD_3_5AC94833163FC34B_OFFSET UNITYSDK_OFFSET(0x18C653E0)
#define RPG_GAMECORE_PROPATTRACTENEMY_METHOD_3_F6684869A268CB91_OFFSET UNITYSDK_OFFSET(0x18C65470)
#define RPG_GAMECORE_PROPATTRACTENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0x18C65440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAttractEnemy_TypeDefinitionIndex = 19111;

	class PropAttractEnemy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttractEnemySelectMode SelectMode; // 0x18
		::System::Single Distance; // 0x1C
		::RPG::GameCore::PropAttractEnemyBehaviourType BehaviourType; // 0x20
		::System::Single DeltaValue; // 0x24
		::System::Boolean IsUseDistanceFunction; // 0x28
		::System::Single MinDistanX; // 0x2C
		::System::Single MinDistanY; // 0x30
		::System::Boolean IsCheckStageCollider; // 0x34
		::RPG::GameCore::DynamicFloat* GroupID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTRACTENEMY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5AC94833163FC34B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttractEnemy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttractEnemy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTRACTENEMY_METHOD_3_5AC94833163FC34B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6684869A268CB91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropAttractEnemy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropAttractEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPATTRACTENEMY_METHOD_3_F6684869A268CB91_OFFSET))(a1, a2);
		}
	};
}
