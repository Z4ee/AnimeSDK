#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_84C507A243528E86;
namespace System { class Action; }

#define CLASS_1_84C507A243528E86_CLASS_1_8B2A96BAB0ACECCD_METHOD_1_03A992AAEFF384D2_OFFSET UNITYSDK_OFFSET(0x18A51D30)
#define CLASS_1_84C507A243528E86_CLASS_1_8B2A96BAB0ACECCD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A51D20)

inline static constexpr unsigned int Class_1_84C507A243528E86_Class_1_8B2A96BAB0ACECCD_TypeDefinitionIndex = 10374;

class Class_1_84C507A243528E86_Class_1_8B2A96BAB0ACECCD : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_84C507A243528E86* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84C507A243528E86_CLASS_1_8B2A96BAB0ACECCD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03A992AAEFF384D2(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_84C507A243528E86_CLASS_1_8B2A96BAB0ACECCD_METHOD_1_03A992AAEFF384D2_OFFSET))(this, a1);
	}
};
