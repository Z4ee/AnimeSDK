#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CF94E0F14A91ED3_2;

#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5DDA70)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xB5DEC90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleTeamSnapshot___c__DisplayClass4_0_TypeDefinitionIndex = 57437;

	class ChenLingBattleTeamSnapshot___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 waveID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0(::Class_1_8CF94E0F14A91ED3_2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_8CF94E0F14A91ED3_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS4_0___CTOR_B__0_OFFSET))(this, a1);
		}
	};
}
