#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D49F49D6731D88EE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6838003491506F6E___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A95AC0)
#define CLASS_1_6838003491506F6E___C__DISPLAYCLASS7_0__FINDNEARPOINTS_B__0_OFFSET UNITYSDK_OFFSET(0x18A95DE0)

inline static constexpr unsigned int Class_1_6838003491506F6E___c__DisplayClass7_0_TypeDefinitionIndex = 52395;

class Class_1_6838003491506F6E___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Single>* distMap; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _FindNearPoints_b__0(::Class_1_D49F49D6731D88EE* a1, ::Class_1_D49F49D6731D88EE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D49F49D6731D88EE*, ::Class_1_D49F49D6731D88EE*))((::PBYTE)hIl2Cpp + CLASS_1_6838003491506F6E___C__DISPLAYCLASS7_0__FINDNEARPOINTS_B__0_OFFSET))(this, a1, a2);
	}
};
