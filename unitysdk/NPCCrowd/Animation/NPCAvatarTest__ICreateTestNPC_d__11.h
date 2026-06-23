#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::Animation { class NPCAvatarTest; }

#define NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA6902B0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA690750)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6907B0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA690760)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6902A0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0xA690290)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAvatarTest__ICreateTestNPC_d__11_TypeDefinitionIndex = 71676;

	class NPCAvatarTest__ICreateTestNPC_d__11 : public ::System::Object
	{
	public:
		::NPCCrowd::Animation::NPCAvatarTest* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::Class_3_F2DAD7F45F518868* _selfnpc_5__3; // 0x20
		::MoleMole::Battle::Entity* _entity_5__2; // 0x28
		::System::Int32 sectionID; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::UInt32 tagID; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__ICREATETESTNPC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
