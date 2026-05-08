#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class PathGraphConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xD22DF80)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphAssetSO_TypeDefinitionIndex = 61606;

	class PathGraphAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphConfig*>* graphs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHASSETSO__CTOR_OFFSET))(this);
		}
	};
}
