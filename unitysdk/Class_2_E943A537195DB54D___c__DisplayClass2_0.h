#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AirlockEvent.h"
#include "unitysdk/System/Object.h"

class Class_2_E943A537195DB54D;

#define CLASS_2_E943A537195DB54D___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF97190)
#define CLASS_2_E943A537195DB54D___C__DISPLAYCLASS2_0___ONGROUPLOADED_B__0_OFFSET UNITYSDK_OFFSET(0xBF97700)

inline static constexpr unsigned int Class_2_E943A537195DB54D___c__DisplayClass2_0_TypeDefinitionIndex = 54744;

class Class_2_E943A537195DB54D___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_E943A537195DB54D* __4__this; // 0x10
	::System::Int32 regionBIndex; // 0x18
	::System::Int32 regionAIndex; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnGroupLoaded_b__0(::System::Int32 a1, ::RPG::GameCore::AirlockEvent a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AirlockEvent))((::PBYTE)hIl2Cpp + CLASS_2_E943A537195DB54D___C__DISPLAYCLASS2_0___ONGROUPLOADED_B__0_OFFSET))(this, a1, a2);
	}
};
