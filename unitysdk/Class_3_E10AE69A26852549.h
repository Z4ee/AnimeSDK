#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_E10AE69A26852549_METHOD_3_AF4938286B0E948C_OFFSET UNITYSDK_OFFSET(0x15772400)
#define CLASS_3_E10AE69A26852549_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x157728E0)
#define CLASS_3_E10AE69A26852549_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15772200)
#define CLASS_3_E10AE69A26852549__CTOR_OFFSET UNITYSDK_OFFSET(0x15772740)

inline static constexpr unsigned int Class_3_E10AE69A26852549_TypeDefinitionIndex = 54265;

class Class_3_E10AE69A26852549 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_5; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_6; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E10AE69A26852549__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E10AE69A26852549_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_AF4938286B0E948C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E10AE69A26852549_METHOD_3_AF4938286B0E948C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E10AE69A26852549_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
