#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_70E3C7707A8D3480_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12FC7A60)
#define CLASS_3_70E3C7707A8D3480_METHOD_3_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0x12FC7BA0)
#define CLASS_3_70E3C7707A8D3480_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12FC7E40)
#define CLASS_3_70E3C7707A8D3480__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC7D20)

inline static constexpr unsigned int Class_3_70E3C7707A8D3480_TypeDefinitionIndex = 53529;

class Class_3_70E3C7707A8D3480 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_1; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_2; // 0x20
	::Class_4_8D3E479B491881B3<::System::Single>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70E3C7707A8D3480__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70E3C7707A8D3480_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_A08DEEEE1A01931E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_70E3C7707A8D3480_METHOD_3_A08DEEEE1A01931E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70E3C7707A8D3480_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
