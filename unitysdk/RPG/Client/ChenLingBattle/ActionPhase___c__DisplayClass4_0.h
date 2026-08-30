#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93CD80)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__DISPLAYCLASS4_0__HANDLEPENDINGACTIONFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x1B93CEE0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionPhase___c__DisplayClass4_0_TypeDefinitionIndex = 75810;

	class ActionPhase___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandlePendingActionFinish_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__DISPLAYCLASS4_0__HANDLEPENDINGACTIONFINISH_B__1_OFFSET))(this);
		}
	};
}
