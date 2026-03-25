#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F58629771D14EB4;
class Class_2_A8371512CE517879;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET UNITYSDK_OFFSET(0x11887B90)
#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET UNITYSDK_OFFSET(0x11887C30)
#define CLASS_2_A8371512CE517879___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11886C30)

inline static constexpr unsigned int Class_2_A8371512CE517879___c__DisplayClass7_0_TypeDefinitionIndex = 62225;

class Class_2_A8371512CE517879___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_A8371512CE517879* __4__this; // 0x10
	::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>* _ConfirmLoan_b__0()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET))(this);
	}

	::System::Void _ConfirmLoan_b__1(::Class_1_8F58629771D14EB4* loanServerSyncData)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F58629771D14EB4*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET))(this, loanServerSyncData);
	}
};
