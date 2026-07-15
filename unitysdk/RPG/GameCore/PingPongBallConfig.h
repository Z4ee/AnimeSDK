#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGBALLCONFIG_METHOD_2_FE2C1BEB2CD52009_OFFSET UNITYSDK_OFFSET(0x1B4C5E70)
#define RPG_GAMECORE_PINGPONGBALLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C60B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongBallConfig_TypeDefinitionIndex = 16301;

	class PingPongBallConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Single DirectionRatioByRacket; // 0x18
		::System::Single BaseSpeed; // 0x1C
		::System::Single SpeedRatioByRacket; // 0x20
		::System::UInt32 MaxNum; // 0x24
		::System::UInt32 SplitNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBALLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FE2C1BEB2CD52009(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongBallConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongBallConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBALLCONFIG_METHOD_2_FE2C1BEB2CD52009_OFFSET))(a1, a2);
		}
	};
}
