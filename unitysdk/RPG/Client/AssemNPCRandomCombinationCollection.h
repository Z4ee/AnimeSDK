#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class AssemNPCRandomCombinationCollection_AssemNPCRandomCombinationConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSEMNPCRANDOMCOMBINATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x90DABD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCRandomCombinationCollection_TypeDefinitionIndex = 48624;

	class AssemNPCRandomCombinationCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AssemNPCRandomCombinationCollection_AssemNPCRandomCombinationConfig*>* List; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCRANDOMCOMBINATIONCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
