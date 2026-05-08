#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorStateFlag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORCLUSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF684CA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorClusterConfig_TypeDefinitionIndex = 81770;

	class AttractorClusterConfig : public ::System::Object
	{
	public:
		::NPCCrowd::AI::AttractorStateFlag childEnableState; // 0x10
		::System::Int32 parentInstanceID; // 0x14
		::System::Collections::Generic::List_1<::System::Int32>* childInstanceIDs; // 0x18
		::Il2CppArray<::System::Int32>* clusterInstances; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCLUSTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
