#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60444A43F7337EBF;
namespace System { class Action; }

#define CLASS_1_60444A43F7337EBF___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC063E0)
#define CLASS_1_60444A43F7337EBF___C__DISPLAYCLASS11_0__GETACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1EC06720)

inline static constexpr unsigned int Class_1_60444A43F7337EBF___c__DisplayClass11_0_TypeDefinitionIndex = 35299;

class Class_1_60444A43F7337EBF___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::Action* action; // 0x10
	::Class_1_60444A43F7337EBF* __4__this; // 0x18
	::System::Int32 id; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _GetAction_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF___C__DISPLAYCLASS11_0__GETACTION_B__0_OFFSET))(this);
	}
};
