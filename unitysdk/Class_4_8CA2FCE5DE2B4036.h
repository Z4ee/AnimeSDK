#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_8CA2FCE5DE2B4036_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17F251D0)
#define CLASS_4_8CA2FCE5DE2B4036_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17F24C80)
#define CLASS_4_8CA2FCE5DE2B4036_METHOD_4_F637E7BBB4A3229E_OFFSET UNITYSDK_OFFSET(0x17F24E30)
#define CLASS_4_8CA2FCE5DE2B4036__CTOR_OFFSET UNITYSDK_OFFSET(0x17F25070)

inline static constexpr unsigned int Class_4_8CA2FCE5DE2B4036_TypeDefinitionIndex = 60063;

class Class_4_8CA2FCE5DE2B4036 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x38
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_F637E7BBB4A3229E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036_METHOD_4_F637E7BBB4A3229E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA2FCE5DE2B4036_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
