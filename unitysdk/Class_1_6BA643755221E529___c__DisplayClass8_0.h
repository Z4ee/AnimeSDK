#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08228315FBA10BA4;
class Class_1_6BA643755221E529;
class Class_1_D17272E82AE804C2_696;
class Class_1_DD57899CB8704013;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_6BA643755221E529___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EEE20)
#define CLASS_1_6BA643755221E529___C__DISPLAYCLASS8_0__SUBMITEXAM_B__0_OFFSET UNITYSDK_OFFSET(0xB8EF8B0)

inline static constexpr unsigned int Class_1_6BA643755221E529___c__DisplayClass8_0_TypeDefinitionIndex = 80246;

class Class_1_6BA643755221E529___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_6BA643755221E529* __4__this; // 0x10
	::Class_1_DD57899CB8704013* productStats; // 0x18
	::System::UInt32 examID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BA643755221E529___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_08228315FBA10BA4*>* _SubmitExam_b__0(::Class_1_D17272E82AE804C2_696* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_08228315FBA10BA4*>*(*)(::PVOID, ::Class_1_D17272E82AE804C2_696*))((::PBYTE)hIl2Cpp + CLASS_1_6BA643755221E529___C__DISPLAYCLASS8_0__SUBMITEXAM_B__0_OFFSET))(this, a1);
	}
};
