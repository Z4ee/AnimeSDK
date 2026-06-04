#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class BatchAnimationAssemNPCRandomCombinationCollection_BatchAnimationAssemNPCRandomCombinationConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATCHANIMATIONASSEMNPCRANDOMCOMBINATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B7EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationAssemNPCRandomCombinationCollection_TypeDefinitionIndex = 56113;

	class BatchAnimationAssemNPCRandomCombinationCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BatchAnimationAssemNPCRandomCombinationCollection_BatchAnimationAssemNPCRandomCombinationConfig*>* List; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONASSEMNPCRANDOMCOMBINATIONCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
