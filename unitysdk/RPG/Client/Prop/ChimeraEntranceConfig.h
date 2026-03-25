#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class ChimeraEntranceRoundParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA05D090)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceConfig_TypeDefinitionIndex = 63933;

	class ChimeraEntranceConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEntranceRoundParam*>* Rounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCECONFIG__CTOR_OFFSET))(this);
		}
	};
}
