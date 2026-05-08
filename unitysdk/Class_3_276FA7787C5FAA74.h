#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_276FA7787C5FAA74_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11AA0000)
#define CLASS_3_276FA7787C5FAA74_METHOD_3_7CBF6FC708AF486F_OFFSET UNITYSDK_OFFSET(0x11AA0140)
#define CLASS_3_276FA7787C5FAA74_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11AA05E0)
#define CLASS_3_276FA7787C5FAA74__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA04C0)

inline static constexpr unsigned int Class_3_276FA7787C5FAA74_TypeDefinitionIndex = 60944;

class Class_3_276FA7787C5FAA74 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_2; // 0x18
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_276FA7787C5FAA74__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_276FA7787C5FAA74_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_7CBF6FC708AF486F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_276FA7787C5FAA74_METHOD_3_7CBF6FC708AF486F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_276FA7787C5FAA74_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
