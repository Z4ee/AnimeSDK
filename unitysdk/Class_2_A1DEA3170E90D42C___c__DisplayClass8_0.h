#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8BCB780)
#define CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_0___SHOWROGUETOURNENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x8BCC3F0)

inline static constexpr unsigned int Class_2_A1DEA3170E90D42C___c__DisplayClass8_0_TypeDefinitionIndex = 55331;

class Class_2_A1DEA3170E90D42C___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::UInt32 blockID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowRogueTournEntrancePage_b__1(::System::Boolean isSkipShow)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A1DEA3170E90D42C___C__DISPLAYCLASS8_0___SHOWROGUETOURNENTRANCEPAGE_B__1_OFFSET))(this, isSkipShow);
	}
};
