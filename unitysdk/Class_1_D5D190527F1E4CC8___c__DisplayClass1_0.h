#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D5D190527F1E4CC8___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD393920)
#define CLASS_1_D5D190527F1E4CC8___C__DISPLAYCLASS1_0__SUBSCRIBEANYITEMQUANTITYCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xD393B00)

inline static constexpr unsigned int Class_1_D5D190527F1E4CC8___c__DisplayClass1_0_TypeDefinitionIndex = 60484;

class Class_1_D5D190527F1E4CC8___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Action* observer; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D190527F1E4CC8___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _SubscribeAnyItemQuantityChange_b__0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D5D190527F1E4CC8___C__DISPLAYCLASS1_0__SUBSCRIBEANYITEMQUANTITYCHANGE_B__0_OFFSET))(this, _);
	}
};
