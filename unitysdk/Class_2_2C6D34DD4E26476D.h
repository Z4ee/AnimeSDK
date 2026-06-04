#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2C6D34DD4E26476D_METHOD_2_1BC72208CAFF7D4E_OFFSET UNITYSDK_OFFSET(0x18E3F290)
#define CLASS_2_2C6D34DD4E26476D_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18E3F7B0)
#define CLASS_2_2C6D34DD4E26476D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18E3F750)
#define CLASS_2_2C6D34DD4E26476D_METHOD_2_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x18E3ED40)
#define CLASS_2_2C6D34DD4E26476D__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3ED30)

inline static constexpr unsigned int Class_2_2C6D34DD4E26476D_TypeDefinitionIndex = 39504;

class Class_2_2C6D34DD4E26476D : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::UInt32 Field_2_4; // 0x2C
	::System::Boolean Field_2_5; // 0x30

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

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
