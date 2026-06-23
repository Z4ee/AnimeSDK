#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA257C4B28E4CC0D.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_29168C41CE0CEBD2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1BF2EB10)
#define CLASS_2_29168C41CE0CEBD2_METHOD_2_5921FA5785CADAA0_OFFSET UNITYSDK_OFFSET(0x1BF2EC30)
#define CLASS_2_29168C41CE0CEBD2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BF2ED90)
#define CLASS_2_29168C41CE0CEBD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2EC20)

inline static constexpr unsigned int Class_2_29168C41CE0CEBD2_TypeDefinitionIndex = 88564;

class Class_2_29168C41CE0CEBD2 : public ::Class_1_EA257C4B28E4CC0D
{
public:
	::Struct_2_E614D3B245F96744_1 Field_2_0; // 0x40
	::System::Single Field_2_3; // 0x48
	::System::Single Field_2_2; // 0x4C
	::System::Single Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29168C41CE0CEBD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29168C41CE0CEBD2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5921FA5785CADAA0(::System::Single a1, ::System::Single a2, ::System::Single a3, ::Struct_2_E614D3B245F96744_1 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::Struct_2_E614D3B245F96744_1, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_29168C41CE0CEBD2_METHOD_2_5921FA5785CADAA0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29168C41CE0CEBD2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
