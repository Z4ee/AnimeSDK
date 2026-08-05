#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class WaitingSlot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_WAITINGSLOTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xF0CAC50)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WaitingSlotTemplate_TypeDefinitionIndex = 73250;

	class WaitingSlotTemplate : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::System::Single EffectRadius; // 0x14
		::System::Collections::Generic::List_1<::NPCCrowd::AI::WaitingSlot*>* Slots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WAITINGSLOTTEMPLATE__CTOR_OFFSET))(this);
		}
	};
}
