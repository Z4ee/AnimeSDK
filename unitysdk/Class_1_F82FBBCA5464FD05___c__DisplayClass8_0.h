#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_708;
class Class_0_16E4307DCC419505_928;

#define CLASS_1_F82FBBCA5464FD05___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187E87F0)
#define CLASS_1_F82FBBCA5464FD05___C__DISPLAYCLASS8_0___TRYADDSELECTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x187E8850)

inline static constexpr unsigned int Class_1_F82FBBCA5464FD05___c__DisplayClass8_0_TypeDefinitionIndex = 67059;

class Class_1_F82FBBCA5464FD05___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_708* actionItem; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82FBBCA5464FD05___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryAddSelectAction_b__0(::Class_0_16E4307DCC419505_928* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_928*))((::PBYTE)hIl2Cpp + CLASS_1_F82FBBCA5464FD05___C__DISPLAYCLASS8_0___TRYADDSELECTACTION_B__0_OFFSET))(this, a1);
	}
};
