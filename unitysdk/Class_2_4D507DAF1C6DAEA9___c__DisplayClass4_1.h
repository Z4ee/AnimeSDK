#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }

#define CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18A89060)
#define CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__1_OFFSET UNITYSDK_OFFSET(0x18A89070)
#define CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__2_OFFSET UNITYSDK_OFFSET(0x18A89180)

inline static constexpr unsigned int Class_2_4D507DAF1C6DAEA9___c__DisplayClass4_1_TypeDefinitionIndex = 67639;

class Class_2_4D507DAF1C6DAEA9___c__DisplayClass4_1 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::System::Action* __9__2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
	}

	::System::Void __PlayFormulaStory_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__1_OFFSET))(this);
	}

	::System::Void __PlayFormulaStory_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__2_OFFSET))(this);
	}
};
