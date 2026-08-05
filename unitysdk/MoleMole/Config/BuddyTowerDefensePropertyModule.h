#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/TargetValueModuleBase.h"

class Class_3_707412604A129938;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYMODULE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BD4F2F0)
#define MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4F420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTowerDefensePropertyModule_TypeDefinitionIndex = 65686;

	class BuddyTowerDefensePropertyModule : public ::MoleMole::Config::TargetValueModuleBase
	{
	public:
		::UnityEngine::AnimationCurve* PropertyValueCurve; // 0x10
		::MoleMole::Config::BaseProperty PropertyKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYMODULE__CTOR_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single selfToTargetDistance, ::Class_3_707412604A129938* targetDataComponent, ::MoleMole::Battle::Entity* selfEntity)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_3_707412604A129938*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYTOWERDEFENSEPROPERTYMODULE_EVALUATE_OFFSET))(this, selfToTargetDistance, targetDataComponent, selfEntity);
		}
	};
}
