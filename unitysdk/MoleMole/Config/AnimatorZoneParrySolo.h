#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_EF1D28F8618171F3;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorZoneParrySolo_ActionGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x141E5FC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONEVTHITTINGOTHERINSTANTLY_OFFSET UNITYSDK_OFFSET(0x141E6050)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x141E5930)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x141E5C80)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO__CTOR_OFFSET UNITYSDK_OFFSET(0x141E6A40)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x141E6AD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x141E6BA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x141E6C50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParrySolo_TypeDefinitionIndex = 71627;

	class AnimatorZoneParrySolo : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneParrySolo_ActionGroup*>* actionGroupList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void onEvtHittingOtherInstantly(::Class_2_EF1D28F8618171F3* evt, ::MoleMole::Battle::Entity* attackee)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_EF1D28F8618171F3*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONEVTHITTINGOTHERINSTANTLY_OFFSET))(this, evt, attackee);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
