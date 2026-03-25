#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x886D780)
#define CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0___PLAYSTORY_B__1_OFFSET UNITYSDK_OFFSET(0x886D960)
#define CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0___PLAYSTORY_B__2_OFFSET UNITYSDK_OFFSET(0x886DAA0)
#define CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0___PLAYSTORY_B__3_OFFSET UNITYSDK_OFFSET(0x886DAC0)

inline static constexpr unsigned int Class_1_02CB8559BDBEC08D___c__DisplayClass4_0_TypeDefinitionIndex = 54915;

class Class_1_02CB8559BDBEC08D___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::System::UInt32 storyId; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PlayStory_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0___PLAYSTORY_B__1_OFFSET))(this);
	}

	::System::Void __PlayStory_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0___PLAYSTORY_B__2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PlayStory_b__3()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02CB8559BDBEC08D___C__DISPLAYCLASS4_0___PLAYSTORY_B__3_OFFSET))(this);
	}
};
