#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GAMEPLAYTAGACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x109F4EB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAIProcessor_GameplayTagActionState_TypeDefinitionIndex = 55050;

	class NPCAIProcessor_GameplayTagActionState : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* ActiveHandlers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_GAMEPLAYTAGACTIONSTATE__CTOR_OFFSET))(this);
		}
	};
}
