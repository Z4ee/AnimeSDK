#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x299E0)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_TOTAL_OFFSET UNITYSDK_OFFSET(0x1D50)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakProgressInfo_TypeDefinitionIndex = 58190;

	struct alignas(4) ChallengePeakProgressInfo
	{
		::System::Int32 _Current_k__BackingField; // 0x10
		::System::Int32 _Total_k__BackingField; // 0x14

		::System::Void _ctor(::System::Int32 current, ::System::Int32 total)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO__CTOR_OFFSET))(this, current, total);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_CURRENT_OFFSET))(this, value);
		}

		::System::Int32 get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_TOTAL_OFFSET))(this);
		}

		::System::Void set_Total(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_TOTAL_OFFSET))(this, value);
		}
	};
}
