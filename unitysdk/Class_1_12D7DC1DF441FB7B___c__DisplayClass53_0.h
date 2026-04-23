#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_12D7DC1DF441FB7B___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0CB210)
#define CLASS_1_12D7DC1DF441FB7B___C__DISPLAYCLASS53_0___SHOWCONFIRMFORCECHALLENGENORMALDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xC0CB8D0)

inline static constexpr unsigned int Class_1_12D7DC1DF441FB7B___c__DisplayClass53_0_TypeDefinitionIndex = 58179;

class Class_1_12D7DC1DF441FB7B___c__DisplayClass53_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Boolean>* result; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12D7DC1DF441FB7B___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowConfirmForceChallengeNormalDialog_b__0(::System::Boolean confirm)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12D7DC1DF441FB7B___C__DISPLAYCLASS53_0___SHOWCONFIRMFORCECHALLENGENORMALDIALOG_B__0_OFFSET))(this, confirm);
	}
};
