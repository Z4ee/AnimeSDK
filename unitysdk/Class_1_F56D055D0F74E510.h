#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9A1EBEAAD416AF1B_InnerPauseReason.h"
#include "unitysdk/System/Object.h"

class Class_3_E7D29F43FB80184D;

#define CLASS_1_F56D055D0F74E510_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18B1E210)
#define CLASS_1_F56D055D0F74E510_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18B1E270)
#define CLASS_1_F56D055D0F74E510_METHOD_1_AA5F138A924FDCC0_OFFSET UNITYSDK_OFFSET(0x18B1E150)
#define CLASS_1_F56D055D0F74E510_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18B1E2B0)
#define CLASS_1_F56D055D0F74E510__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1E140)

inline static constexpr unsigned int Class_1_F56D055D0F74E510_TypeDefinitionIndex = 75120;

class Class_1_F56D055D0F74E510 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::Class_1_9A1EBEAAD416AF1B_InnerPauseReason Field_1_1; // 0x11
	::System::UInt32 Field_1_2; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::Class_1_9A1EBEAAD416AF1B_InnerPauseReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::Class_1_9A1EBEAAD416AF1B_InnerPauseReason))((::PBYTE)hIl2Cpp + CLASS_1_F56D055D0F74E510__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AA5F138A924FDCC0(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_1_F56D055D0F74E510_METHOD_1_AA5F138A924FDCC0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F56D055D0F74E510_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F56D055D0F74E510_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F56D055D0F74E510_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
