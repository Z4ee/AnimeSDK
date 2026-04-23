#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }

#define CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11D71FD0)
#define CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__1_OFFSET UNITYSDK_OFFSET(0x11D71FE0)
#define CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__2_OFFSET UNITYSDK_OFFSET(0x11D720E0)

inline static constexpr unsigned int Class_2_CA0C595465552E46___c__DisplayClass4_1_TypeDefinitionIndex = 62343;

class Class_2_CA0C595465552E46___c__DisplayClass4_1 : public ::System::Object
{
public:
	::System::Action* __9__2; // 0x10
	::RPG::Client::Promises::Promise* promise; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
	}

	::System::Void __PlayFormulaStory_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__1_OFFSET))(this);
	}

	::System::Void __PlayFormulaStory_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___C__DISPLAYCLASS4_1___PLAYFORMULASTORY_B__2_OFFSET))(this);
	}
};
