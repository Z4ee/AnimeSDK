#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_326;
namespace System { class String; }

#define CLASS_1_A2251B0C4F8B2A4E___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB868980)
#define CLASS_1_A2251B0C4F8B2A4E___C__DISPLAYCLASS0_0__FINDBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xB868990)

inline static constexpr unsigned int Class_1_A2251B0C4F8B2A4E___c__DisplayClass0_0_TypeDefinitionIndex = 50119;

class Class_1_A2251B0C4F8B2A4E___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::String* name; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2251B0C4F8B2A4E___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _FindByName_b__0(::Class_0_16E4307DCC419505_326* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_326*))((::PBYTE)hIl2Cpp + CLASS_1_A2251B0C4F8B2A4E___C__DISPLAYCLASS0_0__FINDBYNAME_B__0_OFFSET))(this, a1);
	}
};
