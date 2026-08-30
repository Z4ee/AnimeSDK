#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGRACKETCONFIG_METHOD_2_34510EEC971BE1F9_OFFSET UNITYSDK_OFFSET(0x1D332600)
#define RPG_GAMECORE_PINGPONGRACKETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3339A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongRacketConfig_TypeDefinitionIndex = 16784;

	class PingPongRacketConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Single BaseSpeed; // 0x18
		::System::Int32 DefaultSpeedLevel; // 0x1C
		::System::Int32 MinSpeedLevel; // 0x20
		::System::Int32 MaxSpeedLevel; // 0x24
		::System::Single SpeedLevelChangeRatio; // 0x28
		::System::Single BaseLength; // 0x2C
		::System::Int32 DefaultLenghtLevel; // 0x30
		::System::Int32 MinLenghtLevel; // 0x34
		::System::Int32 MaxLenghtLevel; // 0x38
		::System::Single LengthLevelChangeRatio; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGRACKETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_34510EEC971BE1F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongRacketConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongRacketConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGRACKETCONFIG_METHOD_2_34510EEC971BE1F9_OFFSET))(a1, a2);
		}
	};
}
