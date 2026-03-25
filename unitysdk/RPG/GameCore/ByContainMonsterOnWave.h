#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_113350CF45DAE883_OFFSET UNITYSDK_OFFSET(0x1701D7E0)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_ACF123DCC9B82027_OFFSET UNITYSDK_OFFSET(0x1701D710)
#define RPG_GAMECORE_BYCONTAINMONSTERONWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1701D790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainMonsterOnWave_TypeDefinitionIndex = 20752;

	class ByContainMonsterOnWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x20
		::System::Boolean AfterWave; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ACF123DCC9B82027(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainMonsterOnWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainMonsterOnWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_ACF123DCC9B82027_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_113350CF45DAE883(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINMONSTERONWAVE_METHOD_4_113350CF45DAE883_OFFSET))(a1, a2);
		}
	};
}
