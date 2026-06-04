#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1371DA50)
#define CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS3_1___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x1371DA60)

inline static constexpr unsigned int Class_2_B55FA7FAECDB2163___c__DisplayClass3_1_TypeDefinitionIndex = 63274;

class Class_2_B55FA7FAECDB2163___c__DisplayClass3_1 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
	}

	::System::Void __ShowRogueTournFormulaStoryToastPage_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS3_1___SHOWROGUETOURNFORMULASTORYTOASTPAGE_B__1_OFFSET))(this);
	}
};
