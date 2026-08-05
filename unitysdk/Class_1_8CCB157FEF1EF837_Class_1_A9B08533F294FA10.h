#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8CCB157FEF1EF837;
namespace System { class Action; }

#define CLASS_1_8CCB157FEF1EF837_CLASS_1_A9B08533F294FA10_METHOD_1_232ED511774D120A_OFFSET UNITYSDK_OFFSET(0x1BBCFC00)
#define CLASS_1_8CCB157FEF1EF837_CLASS_1_A9B08533F294FA10__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCF500)

inline static constexpr unsigned int Class_1_8CCB157FEF1EF837_Class_1_A9B08533F294FA10_TypeDefinitionIndex = 11296;

class Class_1_8CCB157FEF1EF837_Class_1_A9B08533F294FA10 : public ::System::Object
{
public:
	::Class_1_8CCB157FEF1EF837* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_CLASS_1_A9B08533F294FA10__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_232ED511774D120A(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_8CCB157FEF1EF837_CLASS_1_A9B08533F294FA10_METHOD_1_232ED511774D120A_OFFSET))(this, a1);
	}
};
