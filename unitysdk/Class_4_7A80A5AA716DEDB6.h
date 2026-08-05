#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_7A80A5AA716DEDB6_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x134B80B0)
#define CLASS_4_7A80A5AA716DEDB6_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x134B8A20)
#define CLASS_4_7A80A5AA716DEDB6_METHOD_4_9D7A9451E63F9903_OFFSET UNITYSDK_OFFSET(0x134B8200)
#define CLASS_4_7A80A5AA716DEDB6__CTOR_OFFSET UNITYSDK_OFFSET(0x134B88D0)

inline static constexpr unsigned int Class_4_7A80A5AA716DEDB6_TypeDefinitionIndex = 90395;

class Class_4_7A80A5AA716DEDB6 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_0; // 0x28
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A80A5AA716DEDB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A80A5AA716DEDB6_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_9D7A9451E63F9903(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_7A80A5AA716DEDB6_METHOD_4_9D7A9451E63F9903_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7A80A5AA716DEDB6_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
