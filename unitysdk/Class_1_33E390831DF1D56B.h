#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3616FDE8A71D0590_1;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_33E390831DF1D56B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x198EF360)
#define CLASS_1_33E390831DF1D56B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x198EF320)
#define CLASS_1_33E390831DF1D56B_METHOD_1_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x198EF480)
#define CLASS_1_33E390831DF1D56B_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x198EF6C0)
#define CLASS_1_33E390831DF1D56B_METHOD_1_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x198EF940)
#define CLASS_1_33E390831DF1D56B__CTOR_OFFSET UNITYSDK_OFFSET(0x198EF310)

inline static constexpr unsigned int Class_1_33E390831DF1D56B_TypeDefinitionIndex = 35892;

class Class_1_33E390831DF1D56B : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590_1* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_1; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor(::Class_2_3616FDE8A71D0590_1* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3616FDE8A71D0590_1*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_METHOD_1_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_1_D0DF0505F244B465()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_METHOD_1_D0DF0505F244B465_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E390831DF1D56B_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}
};
