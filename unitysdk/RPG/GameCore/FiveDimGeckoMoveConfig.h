#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_METHOD_3_4ED652FEDD849A5A_OFFSET UNITYSDK_OFFSET(0x1D0E9490)
#define RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_METHOD_3_82058E21A7901B8B_OFFSET UNITYSDK_OFFSET(0x1D0E94F0)
#define RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E94D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGeckoMoveConfig_TypeDefinitionIndex = 16515;

	class FiveDimGeckoMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Single FallGravityMultiplier; // 0x40
		::System::Single MaxFallSpeedMultiplier; // 0x44
		::System::Single LandingDuration; // 0x48
		::System::String* OnFallEvent; // 0x50
		::System::String* OnLandEvent; // 0x58
		::System::String* OnRecoverEvent; // 0x60
		::System::String* OnHitPlayerEvent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4ED652FEDD849A5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGeckoMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGeckoMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_METHOD_3_4ED652FEDD849A5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_82058E21A7901B8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGeckoMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGeckoMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOMOVECONFIG_METHOD_3_82058E21A7901B8B_OFFSET))(a1, a2);
		}
	};
}
