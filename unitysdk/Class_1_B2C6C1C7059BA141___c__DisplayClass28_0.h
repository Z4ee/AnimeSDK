#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B2C6C1C7059BA141___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x153FFDA0)
#define CLASS_1_B2C6C1C7059BA141___C__DISPLAYCLASS28_0__GETSORTEDLINEUPINDICES_B__0_OFFSET UNITYSDK_OFFSET(0x15400960)

inline static constexpr unsigned int Class_1_B2C6C1C7059BA141___c__DisplayClass28_0_TypeDefinitionIndex = 63983;

class Class_1_B2C6C1C7059BA141___c__DisplayClass28_0 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* scores; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetSortedLineupIndices_b__0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141___C__DISPLAYCLASS28_0__GETSORTEDLINEUPINDICES_B__0_OFFSET))(this, a1, a2);
	}
};
