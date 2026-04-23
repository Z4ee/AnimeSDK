#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEAFFECTRANGECONFIG_METHOD_2_D6C5403B2538AB48_OFFSET UNITYSDK_OFFSET(0x186EF0B0)
#define RPG_GAMECORE_BATTLEAFFECTRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186EF270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAffectRangeConfig_TypeDefinitionIndex = 16719;

	class BattleAffectRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MaxWaveCount; // 0x10
		::System::Single Radius; // 0x14
		::System::Single EliteRadius; // 0x18
		::System::Single MaxDiffY; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAFFECTRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D6C5403B2538AB48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAffectRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAffectRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAFFECTRANGECONFIG_METHOD_2_D6C5403B2538AB48_OFFSET))(a1, a2);
		}
	};
}
