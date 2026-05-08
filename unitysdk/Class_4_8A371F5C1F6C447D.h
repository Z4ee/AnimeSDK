#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_8A371F5C1F6C447D_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xE8BEAB0)
#define CLASS_4_8A371F5C1F6C447D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xE8BEFD0)
#define CLASS_4_8A371F5C1F6C447D_METHOD_4_3B3E2D3B3DF161CC_OFFSET UNITYSDK_OFFSET(0xE8BEC00)
#define CLASS_4_8A371F5C1F6C447D__CTOR_OFFSET UNITYSDK_OFFSET(0xE8BEEA0)

inline static constexpr unsigned int Class_4_8A371F5C1F6C447D_TypeDefinitionIndex = 40004;

class Class_4_8A371F5C1F6C447D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8A371F5C1F6C447D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8A371F5C1F6C447D_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_3B3E2D3B3DF161CC(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8A371F5C1F6C447D_METHOD_4_3B3E2D3B3DF161CC_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8A371F5C1F6C447D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
