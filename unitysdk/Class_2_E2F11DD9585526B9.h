#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2E516C573507590A.h"

class Class_3_3323B4893ACBCB05;

#define CLASS_2_E2F11DD9585526B9_METHOD_2_41F67193D03A9DF3_OFFSET UNITYSDK_OFFSET(0x191D9DE0)
#define CLASS_2_E2F11DD9585526B9_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x191D9CE0)
#define CLASS_2_E2F11DD9585526B9_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x191D9CF0)
#define CLASS_2_E2F11DD9585526B9__CTOR_OFFSET UNITYSDK_OFFSET(0x191D9D20)

inline static constexpr unsigned int Class_2_E2F11DD9585526B9_TypeDefinitionIndex = 8786;

class Class_2_E2F11DD9585526B9 : public ::Class_1_2E516C573507590A
{
public:
	::Il2CppArray<::System::Single>* Field_2_3; // 0x28
	::Il2CppArray<::System::Single>* Field_2_2; // 0x30
	::Il2CppArray<::System::Single>* Field_2_6; // 0x38
	::Il2CppArray<::System::Single>* Field_2_5; // 0x40
	::Il2CppArray<::System::Single>* Field_2_4; // 0x48
	::System::Single Field_2_0; // 0x50
	::System::Single Field_2_1; // 0x54

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::Class_3_3323B4893ACBCB05* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Class_3_3323B4893ACBCB05*))((::PBYTE)hIl2Cpp + CLASS_2_E2F11DD9585526B9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2F11DD9585526B9_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E2F11DD9585526B9_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_41F67193D03A9DF3(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Single& a3, ::Il2CppArray<::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E2F11DD9585526B9_METHOD_2_41F67193D03A9DF3_OFFSET))(this, a1, a2, a3, a4);
	}
};
