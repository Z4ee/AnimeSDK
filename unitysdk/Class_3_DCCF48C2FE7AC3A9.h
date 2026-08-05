#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_DCCF48C2FE7AC3A9_METHOD_3_1DB96A2758C8B527_OFFSET UNITYSDK_OFFSET(0x14978B90)
#define CLASS_3_DCCF48C2FE7AC3A9_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14978B00)
#define CLASS_3_DCCF48C2FE7AC3A9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14978D20)
#define CLASS_3_DCCF48C2FE7AC3A9__CTOR_OFFSET UNITYSDK_OFFSET(0x14978C80)

inline static constexpr unsigned int Class_3_DCCF48C2FE7AC3A9_TypeDefinitionIndex = 74128;

class Class_3_DCCF48C2FE7AC3A9 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCCF48C2FE7AC3A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCCF48C2FE7AC3A9_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_1DB96A2758C8B527(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_DCCF48C2FE7AC3A9_METHOD_3_1DB96A2758C8B527_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCCF48C2FE7AC3A9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
