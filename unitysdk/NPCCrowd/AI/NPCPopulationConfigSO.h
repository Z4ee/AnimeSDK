#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class PopulationConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCPOPULATIONCONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xF84BDD0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCPopulationConfigSO_TypeDefinitionIndex = 71783;

	class NPCPopulationConfigSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PopulationConfig*>* populations; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCPOPULATIONCONFIGSO__CTOR_OFFSET))(this);
		}
	};
}
