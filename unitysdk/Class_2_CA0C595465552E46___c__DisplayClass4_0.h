#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_53;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8B74AA0)
#define CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET UNITYSDK_OFFSET(0x8B751A0)

inline static constexpr unsigned int Class_2_CA0C595465552E46___c__DisplayClass4_0_TypeDefinitionIndex = 55154;

class Class_2_CA0C595465552E46___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_99BD961747420BEB_53* info; // 0x10
	::RPG::Client::RogueFormulaData* data; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PlayFormulaStory_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET))(this);
	}
};
