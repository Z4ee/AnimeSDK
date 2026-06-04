#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class BatchAnimationNPCRandomCombinationCollection_BatchAnimationNPCRandomCombinationConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATCHANIMATIONNPCRANDOMCOMBINATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B82E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationNPCRandomCombinationCollection_TypeDefinitionIndex = 56111;

	class BatchAnimationNPCRandomCombinationCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BatchAnimationNPCRandomCombinationCollection_BatchAnimationNPCRandomCombinationConfig*>* List; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONNPCRANDOMCOMBINATIONCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
