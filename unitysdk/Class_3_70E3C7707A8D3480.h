#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_70E3C7707A8D3480_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x127E0750)
#define CLASS_3_70E3C7707A8D3480_METHOD_3_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0x127E0890)
#define CLASS_3_70E3C7707A8D3480_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127E0B30)
#define CLASS_3_70E3C7707A8D3480__CTOR_OFFSET UNITYSDK_OFFSET(0x127E0A10)

inline static constexpr unsigned int Class_3_70E3C7707A8D3480_TypeDefinitionIndex = 70402;

class Class_3_70E3C7707A8D3480 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_3_1; // 0x18
	::Class_4_B51FB35349ACD175<::System::Single>* Field_3_2; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_3_0; // 0x28

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
