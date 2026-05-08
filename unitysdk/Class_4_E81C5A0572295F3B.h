#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_E81C5A0572295F3B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1042B9B0)
#define CLASS_4_E81C5A0572295F3B_METHOD_4_3AFF44DB0F2A056A_OFFSET UNITYSDK_OFFSET(0x1042B390)
#define CLASS_4_E81C5A0572295F3B_METHOD_4_8706E2EFA3F70D06_OFFSET UNITYSDK_OFFSET(0x1042B420)
#define CLASS_4_E81C5A0572295F3B_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1042B180)
#define CLASS_4_E81C5A0572295F3B__CTOR_OFFSET UNITYSDK_OFFSET(0x1042B7A0)

inline static constexpr unsigned int Class_4_E81C5A0572295F3B_TypeDefinitionIndex = 47198;

class Class_4_E81C5A0572295F3B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x28
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_2; // 0x30
	::Class_3_B537A0AA78803363* Field_4_4; // 0x38
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_1; // 0x40
	::Class_3_B537A0AA78803363* Field_4_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_3AFF44DB0F2A056A(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_3AFF44DB0F2A056A_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_4_8706E2EFA3F70D06(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E81C5A0572295F3B_METHOD_4_8706E2EFA3F70D06_OFFSET))(this, a1);
	}
};
