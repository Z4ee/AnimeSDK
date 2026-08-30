#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BD1A98EFEDD35816.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4D350)
#define CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS46_0__LOADUNIFIEDBATTLEAREA_B__0_OFFSET UNITYSDK_OFFSET(0x17E4D360)

inline static constexpr unsigned int Class_1_D70A30D666F20D90___c__DisplayClass46_0_TypeDefinitionIndex = 73754;

class Class_1_D70A30D666F20D90___c__DisplayClass46_0 : public ::System::Object
{
public:
	::System::UInt32 unifiedBattleAreaID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _LoadUnifiedBattleArea_b__0(::Struct_2_BD1A98EFEDD35816 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_D70A30D666F20D90___C__DISPLAYCLASS46_0__LOADUNIFIEDBATTLEAREA_B__0_OFFSET))(this, a1);
	}
};
