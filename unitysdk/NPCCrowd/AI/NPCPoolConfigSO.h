#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class NPCPoolConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCPOOLCONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xCE45C30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCPoolConfigSO_TypeDefinitionIndex = 60174;

	class NPCPoolConfigSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCPoolConfig*>* poolConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCPOOLCONFIGSO__CTOR_OFFSET))(this);
		}
	};
}
