#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_99E7DA6DA7D835C7;

#define CLASS_3_99E7DA6DA7D835C7___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B700)
#define CLASS_3_99E7DA6DA7D835C7___C__DISPLAYCLASS5_0__ITERATEAFFECTEDCELLS_B__0_OFFSET UNITYSDK_OFFSET(0x1C56B710)

inline static constexpr unsigned int Class_3_99E7DA6DA7D835C7___c__DisplayClass5_0_TypeDefinitionIndex = 41782;

class Class_3_99E7DA6DA7D835C7___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_3_99E7DA6DA7D835C7* __4__this; // 0x10
	::System::Int32 directionalDimensionIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IterateAffectedCells_b__0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_99E7DA6DA7D835C7___C__DISPLAYCLASS5_0__ITERATEAFFECTEDCELLS_B__0_OFFSET))(this, a1);
	}
};
