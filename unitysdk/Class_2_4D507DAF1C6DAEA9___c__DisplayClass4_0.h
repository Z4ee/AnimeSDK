#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CB2450063991035_18;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A887F0)
#define CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET UNITYSDK_OFFSET(0x18A88E70)

inline static constexpr unsigned int Class_2_4D507DAF1C6DAEA9___c__DisplayClass4_0_TypeDefinitionIndex = 67638;

class Class_2_4D507DAF1C6DAEA9___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaData* data; // 0x10
	::Class_1_6CB2450063991035_18* info; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PlayFormulaStory_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET))(this);
	}
};
