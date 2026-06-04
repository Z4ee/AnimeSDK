#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x1E110)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_TOTAL_OFFSET UNITYSDK_OFFSET(0x21F0)
#define RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakProgressInfo_TypeDefinitionIndex = 59120;

	struct alignas(4) ChallengePeakProgressInfo
	{
		::System::Int32 _Current_k__BackingField; // 0x10
		::System::Int32 _Total_k__BackingField; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_CURRENT_OFFSET))(this, a1);
		}

		::System::Int32 get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_GET_TOTAL_OFFSET))(this);
		}

		::System::Void set_Total(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKPROGRESSINFO_SET_TOTAL_OFFSET))(this, a1);
		}
	};
}
