#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_465A9E6CC2B0EF21;
class Class_3_E7D29F43FB80184D;

#define CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18908A00)
#define CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS51_0___ONPLAYSPAWNISLANDPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1890D330)

inline static constexpr unsigned int Class_3_E7D29F43FB80184D___c__DisplayClass51_0_TypeDefinitionIndex = 78631;

class Class_3_E7D29F43FB80184D___c__DisplayClass51_0 : public ::System::Object
{
public:
	::Class_3_E7D29F43FB80184D* __4__this; // 0x10
	::Class_2_465A9E6CC2B0EF21* curControlEntity; // 0x18
	::RPG::MVector3 brickPosition; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnPlaySpawnIslandPerformance_b__0(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_3_E7D29F43FB80184D___C__DISPLAYCLASS51_0___ONPLAYSPAWNISLANDPERFORMANCE_B__0_OFFSET))(this, a1);
	}
};
