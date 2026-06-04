#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3323B4893ACBCB05;

#define CLASS_1_2E516C573507590A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x19EF31B0)
#define CLASS_1_2E516C573507590A_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x19EF31C0)
#define CLASS_1_2E516C573507590A__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF31D0)

inline static constexpr unsigned int Class_1_2E516C573507590A_TypeDefinitionIndex = 6647;

class Class_1_2E516C573507590A : public ::System::Object
{
public:
	::Class_3_3323B4893ACBCB05* Field_1_0; // 0x10
	::Il2CppArray<::System::Single>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::Class_3_3323B4893ACBCB05* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Class_3_3323B4893ACBCB05*))((::PBYTE)hIl2Cpp + CLASS_1_2E516C573507590A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E516C573507590A_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2E516C573507590A_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}
};
