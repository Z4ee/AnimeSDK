#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14A3D9C58455862F;
class Class_1_44340B2393166A74;
class Class_1_D17272E82AE804C2_699;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1B99252A494766ED___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1640C720)
#define CLASS_1_1B99252A494766ED___C__DISPLAYCLASS13_0__SAVE_B__0_OFFSET UNITYSDK_OFFSET(0x1640C880)

inline static constexpr unsigned int Class_1_1B99252A494766ED___c__DisplayClass13_0_TypeDefinitionIndex = 80219;

class Class_1_1B99252A494766ED___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_14A3D9C58455862F* session; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_44340B2393166A74*>* savedData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B99252A494766ED___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* _Save_b__0(::Class_1_D17272E82AE804C2_699* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::Class_1_D17272E82AE804C2_699*))((::PBYTE)hIl2Cpp + CLASS_1_1B99252A494766ED___C__DISPLAYCLASS13_0__SAVE_B__0_OFFSET))(this, a1);
	}
};
