#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F58629771D14EB4;
class Class_2_2E8C3F3A14243FF8;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET UNITYSDK_OFFSET(0xBA8A980)
#define CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET UNITYSDK_OFFSET(0xBA8AA20)
#define CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA89930)

inline static constexpr unsigned int Class_2_2E8C3F3A14243FF8___c__DisplayClass7_0_TypeDefinitionIndex = 75986;

class Class_2_2E8C3F3A14243FF8___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x10
	::Class_2_2E8C3F3A14243FF8* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>* _ConfirmLoan_b__0()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_8F58629771D14EB4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET))(this);
	}

	::System::Void _ConfirmLoan_b__1(::Class_1_8F58629771D14EB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F58629771D14EB4*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET))(this, a1);
	}
};
