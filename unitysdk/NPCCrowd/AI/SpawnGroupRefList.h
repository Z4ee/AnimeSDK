#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class SpawnGroupRef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_SPAWNGROUPREFLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x10296270)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnGroupRefList_TypeDefinitionIndex = 71085;

	class SpawnGroupRefList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::SpawnGroupRef*>* groupList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNGROUPREFLIST__CTOR_OFFSET))(this);
		}
	};
}
