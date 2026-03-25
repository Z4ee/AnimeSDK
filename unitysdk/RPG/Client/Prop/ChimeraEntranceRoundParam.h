#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraEntranceRoundConfig; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA05D4F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceRoundParam_TypeDefinitionIndex = 63934;

	class ChimeraEntranceRoundParam : public ::System::Object
	{
	public:
		::System::UInt32 RoundID; // 0x10
		::RPG::Client::Prop::ChimeraEntranceRoundConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDPARAM__CTOR_OFFSET))(this);
		}
	};
}
