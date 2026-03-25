#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NETDEFINECONSTVALUE_METHOD_2_2FDB7821F634F886_OFFSET UNITYSDK_OFFSET(0x17470890)
#define RPG_GAMECORE_NETDEFINECONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17470F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NetDefineConstValue_TypeDefinitionIndex = 17451;

	class NetDefineConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single RecvPacketTimeout; // 0x10
		::System::Single ReconnectingTimeout; // 0x14
		::System::Single LogoutInterval; // 0x18
		::System::Single SyncTimeInterval; // 0x1C
		::System::Single CheckNetReachableInterval; // 0x20
		::System::Single RefreshDispatchInterval; // 0x24
		::System::Single ShowFullScreenBlockTime; // 0x28
		::System::Boolean ProcessMultiPacketsPreFrame; // 0x2C
		::System::Boolean ProcessMultiPacketsOnlyInLoading; // 0x2D
		::System::UInt16 ProcessPacketsPerFrameMS; // 0x2E
		::Il2CppArray<::System::UInt16>* LoginForbidSendCmdList; // 0x30
		::Il2CppArray<::System::UInt16>* PerformanceReplayWhiteList; // 0x38
		::System::Boolean IsBlockNetworkByPerformanceStandalone; // 0x40
		::System::Boolean IsBlockNetworkByPerformanceStandaloneError; // 0x41
		::Il2CppArray<::System::UInt16>* PerformanceStandaloneWhiteList; // 0x48
		::Il2CppArray<::System::UInt16>* PerformanceStandaloneBlackList; // 0x50
		::System::Single RefreshRTTInterval; // 0x58
		::System::Boolean CreateSocketOnSessionConnected; // 0x5C
		::System::Boolean StopAdventurePhaseWhenDisconnect; // 0x5D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NETDEFINECONSTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2FDB7821F634F886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NetDefineConstValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NetDefineConstValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NETDEFINECONSTVALUE_METHOD_2_2FDB7821F634F886_OFFSET))(a1, a2);
		}
	};
}
