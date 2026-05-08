#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TargetValueModuleBase.h"

class Class_3_3A3A95CA33F5CFBC;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159E1DB0)
#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x159E2060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTowerDefenseDistance_TypeDefinitionIndex = 80316;

	class BuddyTowerDefenseDistance : public ::MoleMole::Config::TargetValueModuleBase
	{
	public:
		::UnityEngine::AnimationCurve* BuddyDistanceValueCurve; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE__CTOR_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single selfToTargetDistance, ::Class_3_3A3A95CA33F5CFBC* targetDataComponent, ::MoleMole::Battle::Entity* selfEntity)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_3_3A3A95CA33F5CFBC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEDISTANCE_EVALUATE_OFFSET))(this, selfToTargetDistance, targetDataComponent, selfEntity);
		}
	};
}
