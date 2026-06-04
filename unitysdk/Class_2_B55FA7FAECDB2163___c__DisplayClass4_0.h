#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_57;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1371D330)
#define CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET UNITYSDK_OFFSET(0x1371DA80)

inline static constexpr unsigned int Class_2_B55FA7FAECDB2163___c__DisplayClass4_0_TypeDefinitionIndex = 63275;

class Class_2_B55FA7FAECDB2163___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaData* data; // 0x10
	::Class_1_4BC858D7C27E10ED_57* info; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PlayFormulaStory_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163___C__DISPLAYCLASS4_0___PLAYFORMULASTORY_B__0_OFFSET))(this);
	}
};
