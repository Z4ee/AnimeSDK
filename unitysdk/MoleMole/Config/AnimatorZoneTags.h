#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONINIT_OFFSET UNITYSDK_OFFSET(0x12EF6E60)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12EF6FD0)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12EF70A0)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x12EF7180)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONINIT_OFFSET UNITYSDK_OFFSET(0x12EF7210)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12EF72A0)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12EF7350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneTags_TypeDefinitionIndex = 59818;

	class AnimatorZoneTags : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AnimatorStateTags; // 0x50
		::System::Boolean IsExportFromAnimator; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS__CTOR_OFFSET))(this);
		}

		::System::Void OnInit(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnInit(::Class_3_F33F9DC5F4112336* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONINIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
