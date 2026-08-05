#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_0140A5E14F1CE640_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10D220A0)
#define CLASS_3_0140A5E14F1CE640_METHOD_3_932AD1B829D6B2DF_OFFSET UNITYSDK_OFFSET(0x10D221E0)
#define CLASS_3_0140A5E14F1CE640_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D22790)
#define CLASS_3_0140A5E14F1CE640__CTOR_OFFSET UNITYSDK_OFFSET(0x10D22670)

inline static constexpr unsigned int Class_3_0140A5E14F1CE640_TypeDefinitionIndex = 83366;

class Class_3_0140A5E14F1CE640 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0140A5E14F1CE640__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0140A5E14F1CE640_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_932AD1B829D6B2DF(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_0140A5E14F1CE640_METHOD_3_932AD1B829D6B2DF_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0140A5E14F1CE640_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
