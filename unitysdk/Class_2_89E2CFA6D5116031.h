#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_134.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_904.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_89E2CFA6D5116031_METHOD_2_4CEAEA2D01E525FA_OFFSET UNITYSDK_OFFSET(0x1580AE40)
#define CLASS_2_89E2CFA6D5116031_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1580ADB0)
#define CLASS_2_89E2CFA6D5116031__CTOR_OFFSET UNITYSDK_OFFSET(0x1580ACC0)

inline static constexpr unsigned int Class_2_89E2CFA6D5116031_TypeDefinitionIndex = 15524;

class Class_2_89E2CFA6D5116031 : public ::Class_1_D9FAA3DCCFE14DB8_134
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_904 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_904, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_89E2CFA6D5116031__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89E2CFA6D5116031_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Int32 Method_2_4CEAEA2D01E525FA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89E2CFA6D5116031_METHOD_2_4CEAEA2D01E525FA_OFFSET))(this, a1);
	}
};
