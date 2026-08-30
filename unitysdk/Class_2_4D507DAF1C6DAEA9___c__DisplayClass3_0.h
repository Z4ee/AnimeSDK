#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A887E0)
#define CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS3_0___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x18A88CA0)

inline static constexpr unsigned int Class_2_4D507DAF1C6DAEA9___c__DisplayClass3_0_TypeDefinitionIndex = 67636;

class Class_2_4D507DAF1C6DAEA9___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaData* data; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowRogueTournFormulaStoryToastPage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___C__DISPLAYCLASS3_0___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__0_OFFSET))(this);
	}
};
