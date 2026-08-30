#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_243AEB71B7D38FD2;
class Class_1_B26E06FC40F846CD_1;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }

#define CLASS_1_243AEB71B7D38FD2___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA961E0)
#define CLASS_1_243AEB71B7D38FD2___C__DISPLAYCLASS65_0___STARTFINISHEDENDMATCHPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0xCA96460)

inline static constexpr unsigned int Class_1_243AEB71B7D38FD2___c__DisplayClass65_0_TypeDefinitionIndex = 80540;

class Class_1_243AEB71B7D38FD2___c__DisplayClass65_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::IPromise_1<::Class_1_B26E06FC40F846CD_1*>* promise; // 0x10
	::Class_1_243AEB71B7D38FD2* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartFinishedEndMatchPromise_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_243AEB71B7D38FD2___C__DISPLAYCLASS65_0___STARTFINISHEDENDMATCHPROMISE_B__1_OFFSET))(this, a1);
	}
};
