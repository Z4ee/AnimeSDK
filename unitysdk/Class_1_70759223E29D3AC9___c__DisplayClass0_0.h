#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_70759223E29D3AC9___C__DISPLAYCLASS0_0__CONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0xBDEAF40)
#define CLASS_1_70759223E29D3AC9___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEADC0)

inline static constexpr unsigned int Class_1_70759223E29D3AC9___c__DisplayClass0_0_TypeDefinitionIndex = 79983;

class Class_1_70759223E29D3AC9___c__DisplayClass0_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70759223E29D3AC9___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _Confirm_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70759223E29D3AC9___C__DISPLAYCLASS0_0__CONFIRM_B__0_OFFSET))(this);
	}
};
