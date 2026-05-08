#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_721F41742AC200D2.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class RBDBehitTriggerData; }
namespace MoleMole::Battle { class RBDEffectData; }
namespace RBDDestruction { class BuildingConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_BATTLE_RBDBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11C85EB0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBattleData_TypeDefinitionIndex = 40742;

	class RBDBattleData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean m_bCanDestruct; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::CampType>* m_lstCampFilter; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Battle::RBDBehitTriggerData*>* m_lstBehitTriggerDatas; // 0x28
		::System::Single m_fProtectTime; // 0x30
		::System::Single m_fTargetLockPriority; // 0x34
		::System::Boolean m_bRetainWall; // 0x38
		::System::Single m_fDispearTime; // 0x3C
		::System::Collections::Generic::List_1<::MoleMole::Battle::RBDEffectData*>* m_lstEffectDatas; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* m_lstColliders; // 0x48
		::RBDDestruction::BuildingConfig* m_bdConfig; // 0x50
		::System::Single m_fCurrentProtectTime; // 0x58
		::System::Single m_fCurrentDispearTime; // 0x5C
		::Enum_3_721F41742AC200D2 m_unitType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEDATA__CTOR_OFFSET))(this);
		}
	};
}
