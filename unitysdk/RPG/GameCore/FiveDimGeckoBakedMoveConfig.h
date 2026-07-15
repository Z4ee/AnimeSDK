#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_METHOD_3_599F9B494EF8CC76_OFFSET UNITYSDK_OFFSET(0x1BA98800)
#define RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_METHOD_3_ADCBA031FB1CE42B_OFFSET UNITYSDK_OFFSET(0x1BA987C0)
#define RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA987F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGeckoBakedMoveConfig_TypeDefinitionIndex = 16027;

	class FiveDimGeckoBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Single FallGravity; // 0x30
		::System::Single MaxFallSpeed; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ADCBA031FB1CE42B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_METHOD_3_ADCBA031FB1CE42B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_599F9B494EF8CC76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_METHOD_3_599F9B494EF8CC76_OFFSET))(a1, a2);
		}
	};
}
