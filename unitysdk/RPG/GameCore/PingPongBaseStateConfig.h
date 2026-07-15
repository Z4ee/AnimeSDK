#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGBASESTATECONFIG_METHOD_2_F8988DB7CD43D873_OFFSET UNITYSDK_OFFSET(0x1B4C60C0)
#define RPG_GAMECORE_PINGPONGBASESTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C6250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongBaseStateConfig_TypeDefinitionIndex = 16298;

	class PingPongBaseStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BaseHP; // 0x10
		::System::Single BaseSP; // 0x14
		::System::Single BaseMP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBASESTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F8988DB7CD43D873(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongBaseStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongBaseStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBASESTATECONFIG_METHOD_2_F8988DB7CD43D873_OFFSET))(a1, a2);
		}
	};
}
