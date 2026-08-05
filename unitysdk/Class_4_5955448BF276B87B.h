#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_EEB4050A9A5804AD.h"
#include "unitysdk/Enum_3_972C37F6321EBB18.h"

class Class_1_75B8E35856A8AD03;
class Class_1_C4C2ACF3D9655BEA;
class Class_2_4D61A7A49E7F7878;
class Class_3_682ADE37F45F3DA6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_5955448BF276B87B_METHOD_4_04C4A53AE07C311F_OFFSET UNITYSDK_OFFSET(0x137C2DC0)
#define CLASS_4_5955448BF276B87B_METHOD_4_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x137C2C80)
#define CLASS_4_5955448BF276B87B_METHOD_4_B67678B8F2BE0F21_OFFSET UNITYSDK_OFFSET(0x137C2ED0)
#define CLASS_4_5955448BF276B87B_METHOD_4_DEDA3EFB6C9FA218_OFFSET UNITYSDK_OFFSET(0x137C2C10)
#define CLASS_4_5955448BF276B87B_METHOD_4_F4AC1923DC6E446B_OFFSET UNITYSDK_OFFSET(0x137C2F70)
#define CLASS_4_5955448BF276B87B__CTOR_OFFSET UNITYSDK_OFFSET(0x137C2B00)

inline static constexpr unsigned int Class_4_5955448BF276B87B_TypeDefinitionIndex = 89755;

class Class_4_5955448BF276B87B : public ::Class_3_EEB4050A9A5804AD
{
public:
	::System::Collections::Generic::List_1<::Class_1_C4C2ACF3D9655BEA*>* Field_4_5; // 0x50
	::System::Int32 Field_4_6; // 0x58
	::System::Single Field_4_0; // 0x5C
	::System::Single Field_4_7; // 0x60

	::System::Void _ctor(::Class_1_75B8E35856A8AD03* a1, ::Class_3_682ADE37F45F3DA6* a2, ::Class_2_4D61A7A49E7F7878* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75B8E35856A8AD03*, ::Class_3_682ADE37F45F3DA6*, ::Class_2_4D61A7A49E7F7878*))((::PBYTE)hIl2Cpp + CLASS_4_5955448BF276B87B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_DEDA3EFB6C9FA218(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_5955448BF276B87B_METHOD_4_DEDA3EFB6C9FA218_OFFSET))(this, a1);
	}

	::System::Void Method_4_04C4A53AE07C311F(::System::Boolean a1, ::Class_2_4D61A7A49E7F7878* a2, ::Enum_3_972C37F6321EBB18 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_4D61A7A49E7F7878*, ::Enum_3_972C37F6321EBB18))((::PBYTE)hIl2Cpp + CLASS_4_5955448BF276B87B_METHOD_4_04C4A53AE07C311F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_B67678B8F2BE0F21(::System::Boolean a1, ::Class_2_4D61A7A49E7F7878* a2, ::Enum_3_972C37F6321EBB18 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_4D61A7A49E7F7878*, ::Enum_3_972C37F6321EBB18))((::PBYTE)hIl2Cpp + CLASS_4_5955448BF276B87B_METHOD_4_B67678B8F2BE0F21_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_F4AC1923DC6E446B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_5955448BF276B87B_METHOD_4_F4AC1923DC6E446B_OFFSET))(this, a1);
	}

	::System::Void Method_4_8CB9BDF340E2FC64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5955448BF276B87B_METHOD_4_8CB9BDF340E2FC64_OFFSET))(this);
	}
};
