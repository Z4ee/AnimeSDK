#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDF1A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__DISPLAYCLASS5_0__SELECTCARD_B__2_OFFSET UNITYSDK_OFFSET(0x1AFDF230)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhase___c__DisplayClass5_0_TypeDefinitionIndex = 72402;

	class SelectCardPhase___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _SelectCard_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__DISPLAYCLASS5_0__SELECTCARD_B__2_OFFSET))(this);
		}
	};
}
