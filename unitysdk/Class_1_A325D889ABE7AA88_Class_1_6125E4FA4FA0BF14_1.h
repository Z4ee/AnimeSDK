#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A325D889ABE7AA88;
namespace System { class Action; }

#define CLASS_1_A325D889ABE7AA88_CLASS_1_6125E4FA4FA0BF14_1_METHOD_1_B187C2471FD0427A_OFFSET UNITYSDK_OFFSET(0x15054430)
#define CLASS_1_A325D889ABE7AA88_CLASS_1_6125E4FA4FA0BF14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15054420)

inline static constexpr unsigned int Class_1_A325D889ABE7AA88_Class_1_6125E4FA4FA0BF14_1_TypeDefinitionIndex = 13788;

class Class_1_A325D889ABE7AA88_Class_1_6125E4FA4FA0BF14_1 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_A325D889ABE7AA88* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A325D889ABE7AA88_CLASS_1_6125E4FA4FA0BF14_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B187C2471FD0427A(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_A325D889ABE7AA88_CLASS_1_6125E4FA4FA0BF14_1_METHOD_1_B187C2471FD0427A_OFFSET))(this, a1);
	}
};
