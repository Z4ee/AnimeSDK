#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_46FD925988407D1E;

#define CLASS_2_B87768BABEF68D1B_GET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0x169A2CB0)
#define CLASS_2_B87768BABEF68D1B_GET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x169A2C90)
#define CLASS_2_B87768BABEF68D1B_METHOD_2_0C5FF59026979DBB_OFFSET UNITYSDK_OFFSET(0x169A2ED0)
#define CLASS_2_B87768BABEF68D1B_METHOD_2_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x169A3080)
#define CLASS_2_B87768BABEF68D1B_METHOD_2_D7C1A3C86DB877B0_OFFSET UNITYSDK_OFFSET(0x169A2CD0)
#define CLASS_2_B87768BABEF68D1B_SET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0x169A2CC0)
#define CLASS_2_B87768BABEF68D1B_SET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0x169A2CA0)
#define CLASS_2_B87768BABEF68D1B__CTOR_OFFSET UNITYSDK_OFFSET(0x169A3230)

inline static constexpr unsigned int Class_2_B87768BABEF68D1B_TypeDefinitionIndex = 74038;

class Class_2_B87768BABEF68D1B : public ::Class_1_1FB256EC3633CF9E
{
public:
	::System::Single _StartAngle_k__BackingField; // 0x28
	::System::Single _EndAngle_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B__CTOR_OFFSET))(this);
	}

	::System::Single get_StartAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B_GET_STARTANGLE_OFFSET))(this);
	}

	::System::Void set_StartAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B_SET_STARTANGLE_OFFSET))(this, a1);
	}

	::System::Single get_EndAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B_GET_ENDANGLE_OFFSET))(this);
	}

	::System::Void set_EndAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B_SET_ENDANGLE_OFFSET))(this, a1);
	}

	static ::Class_2_B87768BABEF68D1B* Method_2_D7C1A3C86DB877B0(::Class_2_46FD925988407D1E* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_B87768BABEF68D1B*(*)(::Class_2_46FD925988407D1E*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B_METHOD_2_D7C1A3C86DB877B0_OFFSET))(a1, a2);
	}

	static ::Class_2_B87768BABEF68D1B* Method_2_0C5FF59026979DBB(::Class_2_46FD925988407D1E* a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::Single a4)
	{
		return ((::Class_2_B87768BABEF68D1B*(*)(::Class_2_46FD925988407D1E*, ::System::UInt64, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B_METHOD_2_0C5FF59026979DBB_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B87768BABEF68D1B_METHOD_2_2340068C22DFE332_OFFSET))(this);
	}
};
