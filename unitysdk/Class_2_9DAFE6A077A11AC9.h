#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/MoleMole/Config/Boolean.h"

class Class_3_D252341484B6EB1D;

#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x148E0F30)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_9158AEFCF39F2400_OFFSET UNITYSDK_OFFSET(0x148E15B0)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x148E1520)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x148E1360)
#define CLASS_2_9DAFE6A077A11AC9_METHOD_2_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x148E13C0)
#define CLASS_2_9DAFE6A077A11AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x148E13B0)

inline static constexpr unsigned int Class_2_9DAFE6A077A11AC9_TypeDefinitionIndex = 90605;

class Class_2_9DAFE6A077A11AC9 : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_D252341484B6EB1D* Field_2_0; // 0x28
	::System::Single Field_2_5; // 0x30
	::System::Single Field_2_6; // 0x34
	::System::Single Field_2_4; // 0x38
	::System::Boolean Field_2_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_9158AEFCF39F2400(::Class_3_D252341484B6EB1D* a1, ::MoleMole::Config::Boolean a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D252341484B6EB1D*, ::MoleMole::Config::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9DAFE6A077A11AC9_METHOD_2_9158AEFCF39F2400_OFFSET))(this, a1, a2, a3, a4);
	}
};
