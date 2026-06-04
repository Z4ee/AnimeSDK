#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB480080)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS56_0___HANDLESHOWLOANCONFIRMDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xB481840)
#define RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS56_0___HANDLESHOWLOANCONFIRMDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0xB481880)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameFlow___c__DisplayClass56_0_TypeDefinitionIndex = 71020;

	class CakeRaceGameFlow___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRace::CakeRaceGameFlow* __4__this; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void __HandleShowLoanConfirmDialog_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS56_0___HANDLESHOWLOANCONFIRMDIALOG_B__0_OFFSET))(this, a1);
		}

		::System::Void __HandleShowLoanConfirmDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEGAMEFLOW___C__DISPLAYCLASS56_0___HANDLESHOWLOANCONFIRMDIALOG_B__1_OFFSET))(this);
		}
	};
}
