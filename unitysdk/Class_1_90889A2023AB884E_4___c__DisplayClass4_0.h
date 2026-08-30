#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90889A2023AB884E_4;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_90889A2023AB884E_4___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF00E50)
#define CLASS_1_90889A2023AB884E_4___C__DISPLAYCLASS4_0___WRAPDISPOSEDCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xBF00E90)

inline static constexpr unsigned int Class_1_90889A2023AB884E_4___c__DisplayClass4_0_TypeDefinitionIndex = 67501;

class Class_1_90889A2023AB884E_4___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_90889A2023AB884E_4* __4__this; // 0x10
	::System::Func_1<::RPG::Client::Promises::IPromise*>* func; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __WrapDisposedCheck_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_4___C__DISPLAYCLASS4_0___WRAPDISPOSEDCHECK_B__0_OFFSET))(this);
	}
};
