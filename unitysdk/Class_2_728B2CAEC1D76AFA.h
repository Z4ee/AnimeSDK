#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_199.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;

#define CLASS_2_728B2CAEC1D76AFA_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x16009530)
#define CLASS_2_728B2CAEC1D76AFA__CTOR_OFFSET UNITYSDK_OFFSET(0x16009500)

inline static constexpr unsigned int Class_2_728B2CAEC1D76AFA_TypeDefinitionIndex = 73717;

class Class_2_728B2CAEC1D76AFA : public ::Class_1_43BD383C98B4C0C5_199
{
public:
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::System::Int32 Field_2_5; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_728B2CAEC1D76AFA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_25* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_728B2CAEC1D76AFA_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
