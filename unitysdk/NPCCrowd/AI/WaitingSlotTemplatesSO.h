#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class WaitingSlotTemplate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_WAITINGSLOTTEMPLATESSO__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC2F90)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WaitingSlotTemplatesSO_TypeDefinitionIndex = 42690;

	class WaitingSlotTemplatesSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::WaitingSlotTemplate*>* templates; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WAITINGSLOTTEMPLATESSO__CTOR_OFFSET))(this);
		}
	};
}
