#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYUNITCONFIG_METHOD_2_B69B6804FDC24452_OFFSET UNITYSDK_OFFSET(0x1B4C8090)
#define RPG_GAMECORE_PINGPONGENEMYUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C82F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyUnitConfig_TypeDefinitionIndex = 16314;

	class PingPongEnemyUnitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Boolean IsCore; // 0x20
		::System::Boolean IsBreakable; // 0x21
		::System::Boolean CanShoot; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B69B6804FDC24452(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYUNITCONFIG_METHOD_2_B69B6804FDC24452_OFFSET))(a1, a2);
		}
	};
}
