#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/Object.h"

class Class_2_5F64140FAB2210F3;

#define CLASS_1_A677A4EF8BA06398_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1548E7B0)
#define CLASS_1_A677A4EF8BA06398_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x1548E890)
#define CLASS_1_A677A4EF8BA06398_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1548E920)
#define CLASS_1_A677A4EF8BA06398_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1548E7A0)
#define CLASS_1_A677A4EF8BA06398_METHOD_1_CA21411944361A57_OFFSET UNITYSDK_OFFSET(0x1548E930)
#define CLASS_1_A677A4EF8BA06398_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1548EBE0)
#define CLASS_1_A677A4EF8BA06398_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1548E790)
#define CLASS_1_A677A4EF8BA06398__CTOR_OFFSET UNITYSDK_OFFSET(0x1548E780)

inline static constexpr unsigned int Class_1_A677A4EF8BA06398_TypeDefinitionIndex = 53998;

class Class_1_A677A4EF8BA06398 : public ::System::Object
{
public:
	::Class_2_5F64140FAB2210F3* Field_1_4; // 0x10
	::System::Single Field_1_3; // 0x18
	::System::Boolean Field_1_0; // 0x1C
	::System::Boolean Field_1_1; // 0x1D
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_5F64140FAB2210F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5F64140FAB2210F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::MoleMole::UICameraAtom Method_1_CA21411944361A57()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398_METHOD_1_CA21411944361A57_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A677A4EF8BA06398_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
