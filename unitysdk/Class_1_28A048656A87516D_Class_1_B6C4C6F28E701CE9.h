#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28A048656A87516D;
namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_28A048656A87516D_CLASS_1_B6C4C6F28E701CE9_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x1CCC37B0)
#define CLASS_1_28A048656A87516D_CLASS_1_B6C4C6F28E701CE9_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x1CCC3650)
#define CLASS_1_28A048656A87516D_CLASS_1_B6C4C6F28E701CE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC3640)

inline static constexpr unsigned int Class_1_28A048656A87516D_Class_1_B6C4C6F28E701CE9_TypeDefinitionIndex = 88844;

class Class_1_28A048656A87516D_Class_1_B6C4C6F28E701CE9 : public ::System::Object
{
public:
	::Class_1_28A048656A87516D* Field_1_3; // 0x10
	::System::Threading::ManualResetEvent* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Class_1_28A048656A87516D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_28A048656A87516D*))((::PBYTE)hIl2Cpp + CLASS_1_28A048656A87516D_CLASS_1_B6C4C6F28E701CE9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28A048656A87516D_CLASS_1_B6C4C6F28E701CE9_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28A048656A87516D_CLASS_1_B6C4C6F28E701CE9_METHOD_1_28C834B59E1D0120_OFFSET))(this);
	}
};
