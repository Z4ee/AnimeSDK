#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::Debugging { class FormationData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBUGGING_FORMATIONASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xCC98D70)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int FormationAsset_TypeDefinitionIndex = 80748;

	class FormationAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Debugging::FormationData*>* FormationDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_FORMATIONASSET__CTOR_OFFSET))(this);
		}
	};
}
