#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_C71DDDA66421C541;

#define CLASS_2_54C4749B591A4D83_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15F8E2F0)
#define CLASS_2_54C4749B591A4D83_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x15F8E250)
#define CLASS_2_54C4749B591A4D83__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8E240)

inline static constexpr unsigned int Class_2_54C4749B591A4D83_TypeDefinitionIndex = 57662;

class Class_2_54C4749B591A4D83 : public ::Class_1_2231FD56C070349F
{
public:
	::System::Boolean Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x19

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54C4749B591A4D83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54C4749B591A4D83_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54C4749B591A4D83_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
