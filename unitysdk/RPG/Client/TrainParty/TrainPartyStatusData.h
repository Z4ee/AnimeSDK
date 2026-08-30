#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSTATUSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE277F90)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyStatusData_TypeDefinitionIndex = 74268;

	class TrainPartyStatusData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSTATUSDATA__CTOR_OFFSET))(this);
		}
	};
}
