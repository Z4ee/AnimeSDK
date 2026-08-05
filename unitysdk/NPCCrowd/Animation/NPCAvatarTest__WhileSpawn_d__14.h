#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCAvatarTest; }

#define NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9542B80)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9542CB0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9542D10)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9542CC0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9542B70)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x9542B60)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAvatarTest__WhileSpawn_d__14_TypeDefinitionIndex = 42633;

	class NPCAvatarTest__WhileSpawn_d__14 : public ::System::Object
	{
	public:
		::NPCCrowd::Animation::NPCAvatarTest* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__WHILESPAWN_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
