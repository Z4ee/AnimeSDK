#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_BF40E9C98EB3BDB2_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x11308660)
#define CLASS_4_BF40E9C98EB3BDB2_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11308F80)
#define CLASS_4_BF40E9C98EB3BDB2_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x113088D0)
#define CLASS_4_BF40E9C98EB3BDB2__CTOR_OFFSET UNITYSDK_OFFSET(0x11308DA0)

inline static constexpr unsigned int Class_4_BF40E9C98EB3BDB2_TypeDefinitionIndex = 39018;

class Class_4_BF40E9C98EB3BDB2 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_5; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_4; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF40E9C98EB3BDB2_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
