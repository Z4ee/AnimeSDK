#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC93B00)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongAddPointResultInfo_TypeDefinitionIndex = 61222;

	class PingPongModule_PingPongAddPointResultInfo : public ::System::Object
	{
	public:
		::System::UInt32 HPAddPoint; // 0x10
		::System::UInt32 SPAddPoint; // 0x14
		::System::UInt32 RacketSpeedAddPoint; // 0x18
		::System::UInt32 MPAddPoint; // 0x1C
		::System::UInt32 RacketLengthAddPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGADDPOINTRESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
