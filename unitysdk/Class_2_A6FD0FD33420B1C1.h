#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2E516C573507590A.h"

class Class_3_3323B4893ACBCB05;

#define CLASS_2_A6FD0FD33420B1C1_METHOD_2_0966BF0FC242F656_OFFSET UNITYSDK_OFFSET(0x14BC5C20)
#define CLASS_2_A6FD0FD33420B1C1_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14BC5B20)
#define CLASS_2_A6FD0FD33420B1C1_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x14BC5B30)
#define CLASS_2_A6FD0FD33420B1C1__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC5B60)

inline static constexpr unsigned int Class_2_A6FD0FD33420B1C1_TypeDefinitionIndex = 6655;

class Class_2_A6FD0FD33420B1C1 : public ::Class_1_2E516C573507590A
{
public:
	::Il2CppArray<::System::Single>* Field_2_0; // 0x28
	::Il2CppArray<::System::Single>* Field_2_1; // 0x30
	::Il2CppArray<::System::Single>* Field_2_2; // 0x38
	::Il2CppArray<::System::Single>* Field_2_3; // 0x40
	::Il2CppArray<::System::Single>* Field_2_4; // 0x48
	::System::Single Field_2_5; // 0x50
	::System::Single Field_2_6; // 0x54

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::Class_3_3323B4893ACBCB05* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Class_3_3323B4893ACBCB05*))((::PBYTE)hIl2Cpp + CLASS_2_A6FD0FD33420B1C1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6FD0FD33420B1C1_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6FD0FD33420B1C1_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_0966BF0FC242F656(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Single& a3, ::Il2CppArray<::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single&, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_A6FD0FD33420B1C1_METHOD_2_0966BF0FC242F656_OFFSET))(this, a1, a2, a3, a4);
	}
};
