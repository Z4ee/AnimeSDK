#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_95201541E27D7A65___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0xACC1050)
#define CLASS_1_95201541E27D7A65___C__DISPLAYCLASS61_0___SHOWCONFIRMREVOKENORMALLINEUPDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xACC17A0)

inline static constexpr unsigned int Class_1_95201541E27D7A65___c__DisplayClass61_0_TypeDefinitionIndex = 59111;

class Class_1_95201541E27D7A65___c__DisplayClass61_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Boolean>* result; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95201541E27D7A65___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowConfirmRevokeNormalLineupDialog_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95201541E27D7A65___C__DISPLAYCLASS61_0___SHOWCONFIRMREVOKENORMALLINEUPDIALOG_B__0_OFFSET))(this, a1);
	}
};
