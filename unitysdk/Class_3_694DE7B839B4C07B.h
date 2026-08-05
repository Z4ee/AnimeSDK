#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_694DE7B839B4C07B_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14222690)
#define CLASS_3_694DE7B839B4C07B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14222A70)
#define CLASS_3_694DE7B839B4C07B_METHOD_3_CB92080F4FF6FC50_OFFSET UNITYSDK_OFFSET(0x14222720)
#define CLASS_3_694DE7B839B4C07B__CTOR_OFFSET UNITYSDK_OFFSET(0x142229D0)

inline static constexpr unsigned int Class_3_694DE7B839B4C07B_TypeDefinitionIndex = 64243;

class Class_3_694DE7B839B4C07B : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_694DE7B839B4C07B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_694DE7B839B4C07B_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_CB92080F4FF6FC50(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_694DE7B839B4C07B_METHOD_3_CB92080F4FF6FC50_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_694DE7B839B4C07B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
