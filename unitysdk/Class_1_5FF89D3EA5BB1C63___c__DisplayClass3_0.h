#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_8.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5FF89D3EA5BB1C63___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC25C130)
#define CLASS_1_5FF89D3EA5BB1C63___C__DISPLAYCLASS3_0__SETSELFMARBLESELECTED_B__0_OFFSET UNITYSDK_OFFSET(0xC25CA50)

inline static constexpr unsigned int Class_1_5FF89D3EA5BB1C63___c__DisplayClass3_0_TypeDefinitionIndex = 74724;

class Class_1_5FF89D3EA5BB1C63___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::UInt32 marbleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FF89D3EA5BB1C63___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetSelfMarbleSelected_b__0(::Struct_2_884CDB9D0FDFAF0D_8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_8))((::PBYTE)hIl2Cpp + CLASS_1_5FF89D3EA5BB1C63___C__DISPLAYCLASS3_0__SETSELFMARBLESELECTED_B__0_OFFSET))(this, a1);
	}
};
