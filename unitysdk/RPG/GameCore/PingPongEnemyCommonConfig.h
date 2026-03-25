#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG_METHOD_2_C07B79A52E77B423_OFFSET UNITYSDK_OFFSET(0x174AF170)
#define RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174AF2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyCommonConfig_TypeDefinitionIndex = 15548;

	class PingPongEnemyCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DefaultUnitPrefabPath; // 0x10
		::System::Single UnitFallSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C07B79A52E77B423(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongEnemyCommonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongEnemyCommonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCOMMONCONFIG_METHOD_2_C07B79A52E77B423_OFFSET))(a1, a2);
		}
	};
}
