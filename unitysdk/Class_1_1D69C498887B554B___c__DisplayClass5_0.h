#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

class Class_1_5469D397DAE62876;

#define CLASS_1_1D69C498887B554B___C__DISPLAYCLASS5_0__COUNTMODIFIERCALLBACKEVENTSTACK_B__0_OFFSET UNITYSDK_OFFSET(0x8851AB0)
#define CLASS_1_1D69C498887B554B___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x88519E0)

inline static constexpr unsigned int Class_1_1D69C498887B554B___c__DisplayClass5_0_TypeDefinitionIndex = 45027;

class Class_1_1D69C498887B554B___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierEvent callBackEventType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D69C498887B554B___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CountModifierCallBackEventStack_b__0(::Class_1_5469D397DAE62876* param)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + CLASS_1_1D69C498887B554B___C__DISPLAYCLASS5_0__COUNTMODIFIERCALLBACKEVENTSTACK_B__0_OFFSET))(this, param);
	}
};
