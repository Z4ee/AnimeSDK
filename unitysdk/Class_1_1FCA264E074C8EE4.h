#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRaidAlleyOrderData; }
namespace RPG::Client { class ActivityRaidAlleySpecialOrderData; }

#define CLASS_1_1FCA264E074C8EE4_METHOD_1_95C49032968D71E3_OFFSET UNITYSDK_OFFSET(0x1745B880)
#define CLASS_1_1FCA264E074C8EE4_METHOD_1_F778A4FF04033D77_OFFSET UNITYSDK_OFFSET(0x1745B900)

inline static constexpr unsigned int Class_1_1FCA264E074C8EE4_TypeDefinitionIndex = 59486;

class Class_1_1FCA264E074C8EE4 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityRaidAlleyOrderData* Method_1_95C49032968D71E3(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityRaidAlleyOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1FCA264E074C8EE4_METHOD_1_95C49032968D71E3_OFFSET))(a1);
	}

	static ::RPG::Client::ActivityRaidAlleySpecialOrderData* Method_1_F778A4FF04033D77(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityRaidAlleySpecialOrderData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1FCA264E074C8EE4_METHOD_1_F778A4FF04033D77_OFFSET))(a1);
	}
};
