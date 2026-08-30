#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2E516C573507590A.h"

class Class_3_3323B4893ACBCB05;

#define CLASS_2_247A32064B468970_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x16BC9520)
#define CLASS_2_247A32064B468970_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16BC9530)
#define CLASS_2_247A32064B468970_METHOD_2_FC63F9A2F2760DBE_OFFSET UNITYSDK_OFFSET(0x16BC95B0)
#define CLASS_2_247A32064B468970__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC9550)

inline static constexpr unsigned int Class_2_247A32064B468970_TypeDefinitionIndex = 6266;

class Class_2_247A32064B468970 : public ::Class_1_2E516C573507590A
{
public:
	::Il2CppArray<::System::Single>* BPGHHIJLLEI; // 0x28
	::System::Single NDEAPGAEOPK; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::Class_3_3323B4893ACBCB05* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Class_3_3323B4893ACBCB05*))((::PBYTE)hIl2Cpp + CLASS_2_247A32064B468970__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247A32064B468970_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_247A32064B468970_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC63F9A2F2760DBE(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Single& a3, ::Il2CppArray<::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_247A32064B468970_METHOD_2_FC63F9A2F2760DBE_OFFSET))(this, a1, a2, a3, a4);
	}
};
