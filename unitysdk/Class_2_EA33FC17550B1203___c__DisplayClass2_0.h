#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS2_0__ADDPRISMTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xBF2E870)
#define CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2CD00)

inline static constexpr unsigned int Class_2_EA33FC17550B1203___c__DisplayClass2_0_TypeDefinitionIndex = 69035;

class Class_2_EA33FC17550B1203___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Action* onEnter; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddPrismTrigger_b__0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA33FC17550B1203___C__DISPLAYCLASS2_0__ADDPRISMTRIGGER_B__0_OFFSET))(this, a1);
	}
};
