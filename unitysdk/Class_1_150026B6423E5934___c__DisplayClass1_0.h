#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_150026B6423E5934;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_150026B6423E5934___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1672CF70)
#define CLASS_1_150026B6423E5934___C__DISPLAYCLASS1_0__FULLSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1672D330)
#define CLASS_1_150026B6423E5934___C__DISPLAYCLASS1_0__FULLSYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1672D350)

inline static constexpr unsigned int Class_1_150026B6423E5934___c__DisplayClass1_0_TypeDefinitionIndex = 75564;

class Class_1_150026B6423E5934___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::Class_1_150026B6423E5934* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _FullSync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934___C__DISPLAYCLASS1_0__FULLSYNC_B__0_OFFSET))(this);
	}

	::System::Void _FullSync_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_150026B6423E5934___C__DISPLAYCLASS1_0__FULLSYNC_B__1_OFFSET))(this);
	}
};
