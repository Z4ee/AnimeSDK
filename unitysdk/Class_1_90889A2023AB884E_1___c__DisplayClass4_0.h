#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90889A2023AB884E_1;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_90889A2023AB884E_1___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2CF40)
#define CLASS_1_90889A2023AB884E_1___C__DISPLAYCLASS4_0___WRAPDISPOSEDCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xAB2CF80)

inline static constexpr unsigned int Class_1_90889A2023AB884E_1___c__DisplayClass4_0_TypeDefinitionIndex = 63138;

class Class_1_90889A2023AB884E_1___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Func_1<::RPG::Client::Promises::IPromise*>* func; // 0x10
	::Class_1_90889A2023AB884E_1* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __WrapDisposedCheck_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_1___C__DISPLAYCLASS4_0___WRAPDISPOSEDCHECK_B__0_OFFSET))(this);
	}
};
