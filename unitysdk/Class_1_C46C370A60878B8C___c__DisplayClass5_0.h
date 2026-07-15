#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

class Class_1_5469D397DAE62876;

#define CLASS_1_C46C370A60878B8C___C__DISPLAYCLASS5_0__COUNTMODIFIERCALLBACKEVENTSTACK_B__0_OFFSET UNITYSDK_OFFSET(0x17AAFED0)
#define CLASS_1_C46C370A60878B8C___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAFE00)

inline static constexpr unsigned int Class_1_C46C370A60878B8C___c__DisplayClass5_0_TypeDefinitionIndex = 53654;

class Class_1_C46C370A60878B8C___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierEvent callBackEventType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C46C370A60878B8C___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CountModifierCallBackEventStack_b__0(::Class_1_5469D397DAE62876* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + CLASS_1_C46C370A60878B8C___C__DISPLAYCLASS5_0__COUNTMODIFIERCALLBACKEVENTSTACK_B__0_OFFSET))(this, a1);
	}
};
