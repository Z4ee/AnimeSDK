#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEGAMESYNCCONFIG_METHOD_2_C0256E18DCD037AA_OFFSET UNITYSDK_OFFSET(0x1B2D1990)
#define RPG_GAMECORE_CAKERACEGAMESYNCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D20D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceGameSyncConfig_TypeDefinitionIndex = 17665;

	class CakeRaceGameSyncConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ServerFrameRate; // 0x10
		::System::UInt32 ClientDelayMs; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESYNCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C0256E18DCD037AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceGameSyncConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceGameSyncConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESYNCCONFIG_METHOD_2_C0256E18DCD037AA_OFFSET))(a1, a2);
		}
	};
}
