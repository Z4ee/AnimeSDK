#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA008B5B6D59EE4E;
namespace System { class Action; }

#define CLASS_1_FA008B5B6D59EE4E_CLASS_1_6125E4FA4FA0BF14_1_METHOD_1_B187C2471FD0427A_OFFSET UNITYSDK_OFFSET(0x1322A280)
#define CLASS_1_FA008B5B6D59EE4E_CLASS_1_6125E4FA4FA0BF14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1322A270)

inline static constexpr unsigned int Class_1_FA008B5B6D59EE4E_Class_1_6125E4FA4FA0BF14_1_TypeDefinitionIndex = 10237;

class Class_1_FA008B5B6D59EE4E_Class_1_6125E4FA4FA0BF14_1 : public ::System::Object
{
public:
	::Class_1_FA008B5B6D59EE4E* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA008B5B6D59EE4E_CLASS_1_6125E4FA4FA0BF14_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B187C2471FD0427A(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_FA008B5B6D59EE4E_CLASS_1_6125E4FA4FA0BF14_1_METHOD_1_B187C2471FD0427A_OFFSET))(this, a1);
	}
};
