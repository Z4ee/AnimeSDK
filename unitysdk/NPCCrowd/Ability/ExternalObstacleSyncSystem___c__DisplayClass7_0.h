#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_621E396E538604DB;
class Class_3_757A5862D4BBEE41;
class Class_3_DFD5D1FDB9D2A4AC;
namespace NPCCrowd::Ability { class ExternalObstacleSyncSystem; }
namespace NPCCrowd::Ability { class NPCAbilityFlushTransformSubSystem; }

#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE00E110)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___C__DISPLAYCLASS7_0__LATEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xE00E120)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ExternalObstacleSyncSystem___c__DisplayClass7_0_TypeDefinitionIndex = 85099;

	class ExternalObstacleSyncSystem___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::NPCCrowd::Ability::ExternalObstacleSyncSystem* __4__this; // 0x10
		::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem* obstacleSubSystem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _LateUpdate_b__0(::Class_3_621E396E538604DB* interactiveComponent, ::Class_3_757A5862D4BBEE41* finalMoveComponent, ::Class_3_DFD5D1FDB9D2A4AC* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_621E396E538604DB*, ::Class_3_757A5862D4BBEE41*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___C__DISPLAYCLASS7_0__LATEUPDATE_B__0_OFFSET))(this, interactiveComponent, finalMoveComponent, modelComponent);
		}
	};
}
