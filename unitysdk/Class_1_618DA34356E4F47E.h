#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_618DA34356E4F47E_METHOD_1_0F9BA4683D398D7A_OFFSET UNITYSDK_OFFSET(0x97221F0)
#define CLASS_1_618DA34356E4F47E__CTOR_OFFSET UNITYSDK_OFFSET(0x97221C0)

inline static constexpr unsigned int Class_1_618DA34356E4F47E_TypeDefinitionIndex = 57615;

class Class_1_618DA34356E4F47E : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_618DA34356E4F47E__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0F9BA4683D398D7A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_618DA34356E4F47E_METHOD_1_0F9BA4683D398D7A_OFFSET))(this);
	}
};
