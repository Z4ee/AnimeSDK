#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_127.h"
#include "unitysdk/Class_1_9F74B70AEC19180E_FailureReason.h"

class Class_0_16E4307DCC419505_642;
class Class_1_26FB5CF7326A326B_Class_1_224DD8979D84AC51;

#define CLASS_2_BB896A8DB4FA8ACF_METHOD_2_359FEDDF936C67EB_OFFSET UNITYSDK_OFFSET(0x11AB8DF0)
#define CLASS_2_BB896A8DB4FA8ACF_METHOD_2_D8DACD489C1920D8_OFFSET UNITYSDK_OFFSET(0x11AB8E60)
#define CLASS_2_BB896A8DB4FA8ACF__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB8F50)

inline static constexpr unsigned int Class_2_BB896A8DB4FA8ACF_TypeDefinitionIndex = 57554;

class Class_2_BB896A8DB4FA8ACF : public ::Class_1_43BD383C98B4C0C5_127
{
public:
	// static const ::System::Single Field_2_1; // 0x0
	::System::Single Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB896A8DB4FA8ACF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_359FEDDF936C67EB(::Class_0_16E4307DCC419505_642* a1, ::Class_1_26FB5CF7326A326B_Class_1_224DD8979D84AC51* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_642*, ::Class_1_26FB5CF7326A326B_Class_1_224DD8979D84AC51*))((::PBYTE)hIl2Cpp + CLASS_2_BB896A8DB4FA8ACF_METHOD_2_359FEDDF936C67EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8DACD489C1920D8(::Class_1_9F74B70AEC19180E_FailureReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F74B70AEC19180E_FailureReason))((::PBYTE)hIl2Cpp + CLASS_2_BB896A8DB4FA8ACF_METHOD_2_D8DACD489C1920D8_OFFSET))(this, a1);
	}
};
