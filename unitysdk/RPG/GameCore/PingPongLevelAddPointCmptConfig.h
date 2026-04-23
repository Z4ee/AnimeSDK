#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_METHOD_3_1B40E9C07B35D0EC_OFFSET UNITYSDK_OFFSET(0x18BFCFA0)
#define RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_METHOD_3_849B360734902BFD_OFFSET UNITYSDK_OFFSET(0x18BFCEF0)
#define RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFCF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongLevelAddPointCmptConfig_TypeDefinitionIndex = 17983;

	class PingPongLevelAddPointCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 PointNun; // 0x10
		::System::Boolean AllowHP; // 0x14
		::System::Boolean AllowSP; // 0x15
		::System::Boolean AllowMP; // 0x16
		::System::Boolean AllowRacketSpeed; // 0x17
		::System::Boolean AllowRacketLength; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_849B360734902BFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_METHOD_3_849B360734902BFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B40E9C07B35D0EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongLevelAddPointCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_METHOD_3_1B40E9C07B35D0EC_OFFSET))(a1, a2);
		}
	};
}
