#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_0D575D7F8C2C2626_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x146062E0)
#define CLASS_3_0D575D7F8C2C2626_METHOD_3_27FB16C4EF1F8F78_OFFSET UNITYSDK_OFFSET(0x14606420)
#define CLASS_3_0D575D7F8C2C2626_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14606660)
#define CLASS_3_0D575D7F8C2C2626__CTOR_OFFSET UNITYSDK_OFFSET(0x14606540)

inline static constexpr unsigned int Class_3_0D575D7F8C2C2626_TypeDefinitionIndex = 77242;

class Class_3_0D575D7F8C2C2626 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_1; // 0x20
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D575D7F8C2C2626__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D575D7F8C2C2626_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_27FB16C4EF1F8F78(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_0D575D7F8C2C2626_METHOD_3_27FB16C4EF1F8F78_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D575D7F8C2C2626_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
