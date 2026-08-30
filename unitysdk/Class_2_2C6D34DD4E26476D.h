#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2C6D34DD4E26476D_METHOD_2_1BC72208CAFF7D4E_OFFSET UNITYSDK_OFFSET(0x1C613370)
#define CLASS_2_2C6D34DD4E26476D_METHOD_2_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x1C612E10)
#define CLASS_2_2C6D34DD4E26476D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C612E00)

inline static constexpr unsigned int Class_2_2C6D34DD4E26476D_TypeDefinitionIndex = 41192;

class Class_2_2C6D34DD4E26476D : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::System::Collections::Generic::List_1<::System::Single>* EMMEMAEJKAN; // 0x18
	::System::Single HBDJCFFDGDD; // 0x20
	::System::Single PGMIOKKLHIE; // 0x24
	::System::Int32 GAGEBMIOEGN; // 0x28
	::System::UInt32 NLLGCHPLDCG; // 0x2C
	::System::Boolean JBBMHHEAIPK; // 0x30

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_METHOD_2_585E2EA201FDE7ED_OFFSET))(this);
	}

	::System::Void Method_2_1BC72208CAFF7D4E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_METHOD_2_1BC72208CAFF7D4E_OFFSET))(this, a1);
	}
};
