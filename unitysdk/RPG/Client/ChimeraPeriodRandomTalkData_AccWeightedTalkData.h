#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTalkData; }

#define RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_ACCWEIGHTEDTALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B602F50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPeriodRandomTalkData_AccWeightedTalkData_TypeDefinitionIndex = 63560;

	class ChimeraPeriodRandomTalkData_AccWeightedTalkData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraTalkData* TalkData; // 0x10
		::System::Single AccWeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPERIODRANDOMTALKDATA_ACCWEIGHTEDTALKDATA__CTOR_OFFSET))(this);
		}
	};
}
