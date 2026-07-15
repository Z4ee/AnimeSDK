#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGADDPOINTCONFIG_METHOD_2_1804AFE00E906986_OFFSET UNITYSDK_OFFSET(0x1B4C5CC0)
#define RPG_GAMECORE_PINGPONGADDPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C5E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongAddPointConfig_TypeDefinitionIndex = 16299;

	class PingPongAddPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single HPAddPerPoint; // 0x10
		::System::Single SPAddPerPoint; // 0x14
		::System::Single MPAddPerPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGADDPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1804AFE00E906986(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongAddPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongAddPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGADDPOINTCONFIG_METHOD_2_1804AFE00E906986_OFFSET))(a1, a2);
		}
	};
}
