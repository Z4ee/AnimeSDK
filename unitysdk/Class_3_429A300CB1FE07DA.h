#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_429A300CB1FE07DA_METHOD_3_25666B778FEDA7B2_OFFSET UNITYSDK_OFFSET(0x10125CF0)
#define CLASS_3_429A300CB1FE07DA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x101264A0)
#define CLASS_3_429A300CB1FE07DA_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10125AF0)
#define CLASS_3_429A300CB1FE07DA__CTOR_OFFSET UNITYSDK_OFFSET(0x10126300)

inline static constexpr unsigned int Class_3_429A300CB1FE07DA_TypeDefinitionIndex = 39624;

class Class_3_429A300CB1FE07DA : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_3; // 0x18
	::Class_4_8D3E479B491881B3<::System::Single>* Field_3_2; // 0x20
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_4; // 0x28
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_25666B778FEDA7B2(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA_METHOD_3_25666B778FEDA7B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_429A300CB1FE07DA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
