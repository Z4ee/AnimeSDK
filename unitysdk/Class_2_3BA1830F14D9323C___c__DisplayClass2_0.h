#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_3BA1830F14D9323C___C__DISPLAYCLASS2_0__ADDPRISMTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xD24FB80)
#define CLASS_2_3BA1830F14D9323C___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD24D6A0)

inline static constexpr unsigned int Class_2_3BA1830F14D9323C___c__DisplayClass2_0_TypeDefinitionIndex = 73852;

class Class_2_3BA1830F14D9323C___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Action* onEnter; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA1830F14D9323C___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddPrismTrigger_b__0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BA1830F14D9323C___C__DISPLAYCLASS2_0__ADDPRISMTRIGGER_B__0_OFFSET))(this, a1);
	}
};
