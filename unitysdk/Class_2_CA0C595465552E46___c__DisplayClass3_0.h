#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_CA0C595465552E46___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D71660)
#define CLASS_2_CA0C595465552E46___C__DISPLAYCLASS3_0___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x11D71B90)

inline static constexpr unsigned int Class_2_CA0C595465552E46___c__DisplayClass3_0_TypeDefinitionIndex = 62340;

class Class_2_CA0C595465552E46___c__DisplayClass3_0 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaData* data; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowRogueTournFormulaStoryToastPage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___C__DISPLAYCLASS3_0___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__0_OFFSET))(this);
	}
};
