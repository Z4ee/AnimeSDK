#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4567D0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD456810)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__UPDATE_B__2_0_OFFSET UNITYSDK_OFFSET(0xD456820)

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int NPCGameplayTaskContainerSubSystem___c_TypeDefinitionIndex = 55156;

	class NPCGameplayTaskContainerSubSystem___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::GameplayTask::NPCGameplayTaskContainerSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::GameplayTask::NPCGameplayTaskContainerSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainerSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x42530);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainerSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x42538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__2_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINERSUBSYSTEM___C__UPDATE_B__2_0_OFFSET))(this, npcComp);
		}
	};
}
