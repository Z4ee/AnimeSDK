#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_FF8485B093010BEF___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B5920)
#define CLASS_1_FF8485B093010BEF___C__DISPLAYCLASS1_0__SUBSCRIBEANYITEMQUANTITYCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xA4B5B40)

inline static constexpr unsigned int Class_1_FF8485B093010BEF___c__DisplayClass1_0_TypeDefinitionIndex = 61418;

class Class_1_FF8485B093010BEF___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action* observer; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF8485B093010BEF___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _SubscribeAnyItemQuantityChange_b__0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FF8485B093010BEF___C__DISPLAYCLASS1_0__SUBSCRIBEANYITEMQUANTITYCHANGE_B__0_OFFSET))(this, a1);
	}
};
