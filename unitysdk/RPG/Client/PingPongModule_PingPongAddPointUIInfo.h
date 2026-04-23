#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTUIINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC938E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongAddPointUIInfo_TypeDefinitionIndex = 61221;

	class PingPongModule_PingPongAddPointUIInfo : public ::System::Object
	{
	public:
		::System::Boolean AllowSP; // 0x10
		::System::Boolean AllowHP; // 0x11
		::System::Int32 MaxSPPointNum; // 0x14
		::System::Int32 MaxHPPointNum; // 0x18
		::System::Int32 MaxMPPointNum; // 0x1C
		::System::Int32 MaxRacketLengthPointNum; // 0x20
		::System::Int32 MaxRacketSpeedPointNum; // 0x24
		::System::Int32 PointNum; // 0x28
		::System::Boolean ShowAddPointUI; // 0x2C
		::System::Boolean AllowRacketLength; // 0x2D
		::System::Boolean AllowRacketSpeed; // 0x2E
		::System::Boolean AllowMP; // 0x2F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTUIINFO__CTOR_OFFSET))(this);
		}
	};
}
