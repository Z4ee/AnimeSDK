#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8AA12367DC523613;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6CC143B9599F1FCA___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1526CB60)
#define CLASS_1_6CC143B9599F1FCA___C__DISPLAYCLASS22_0___ASYNCLOADPARALLEL_B__0_OFFSET UNITYSDK_OFFSET(0x1526D640)

inline static constexpr unsigned int Class_1_6CC143B9599F1FCA___c__DisplayClass22_0_TypeDefinitionIndex = 71314;

class Class_1_6CC143B9599F1FCA___c__DisplayClass22_0 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_8AA12367DC523613*>* __9__0; // 0x10
	::System::Action* callback; // 0x18
	::System::Int32 total; // 0x20
	::System::Int32 count; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC143B9599F1FCA___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void __AsyncLoadParallel_b__0(::Class_1_8AA12367DC523613* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AA12367DC523613*))((::PBYTE)hIl2Cpp + CLASS_1_6CC143B9599F1FCA___C__DISPLAYCLASS22_0___ASYNCLOADPARALLEL_B__0_OFFSET))(this, a1);
	}
};
