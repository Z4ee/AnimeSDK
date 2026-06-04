#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

#define CLASS_2_751AA0E84DD9D0A9_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18D3C250)
#define CLASS_2_751AA0E84DD9D0A9_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x18D3BFF0)
#define CLASS_2_751AA0E84DD9D0A9__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3C1D0)
#define CLASS_2_751AA0E84DD9D0A9__UPDATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x18D3C1E0)

inline static constexpr unsigned int Class_2_751AA0E84DD9D0A9_TypeDefinitionIndex = 39233;

class Class_2_751AA0E84DD9D0A9 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_751AA0E84DD9D0A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_751AA0E84DD9D0A9_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void _Update_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_751AA0E84DD9D0A9__UPDATE_B__0_0_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_751AA0E84DD9D0A9_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
