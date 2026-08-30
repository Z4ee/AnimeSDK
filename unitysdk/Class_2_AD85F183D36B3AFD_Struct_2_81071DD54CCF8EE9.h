#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AD85F183D36B3AFD_OverrideAspect.h"
#include "unitysdk/RPG/Client/OpenWorld/ItemOverrideReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_AD85F183D36B3AFD_STRUCT_2_81071DD54CCF8EE9_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1492C0)
#define CLASS_2_AD85F183D36B3AFD_STRUCT_2_81071DD54CCF8EE9_METHOD_2_52E240E1E873ACE3_OFFSET UNITYSDK_OFFSET(0x149380)
#define CLASS_2_AD85F183D36B3AFD_STRUCT_2_81071DD54CCF8EE9_METHOD_2_982C431AE85D0440_OFFSET UNITYSDK_OFFSET(0x149320)

inline static constexpr unsigned int Class_2_AD85F183D36B3AFD_Struct_2_81071DD54CCF8EE9_TypeDefinitionIndex = 73706;

struct alignas(8) Class_2_AD85F183D36B3AFD_Struct_2_81071DD54CCF8EE9
{
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::ItemOverrideReason> BMKKFCDAFEA; // 0x10
	::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::ItemOverrideReason> DKELEJNLELI; // 0x18

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_STRUCT_2_81071DD54CCF8EE9_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_982C431AE85D0440(::Class_2_AD85F183D36B3AFD_OverrideAspect a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AD85F183D36B3AFD_OverrideAspect))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_STRUCT_2_81071DD54CCF8EE9_METHOD_2_982C431AE85D0440_OFFSET))(this, a1);
	}

	::System::Void Method_2_52E240E1E873ACE3(::Class_2_AD85F183D36B3AFD_OverrideAspect a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::ItemOverrideReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AD85F183D36B3AFD_OverrideAspect, ::System::Boolean, ::RPG::Client::OpenWorld::ItemOverrideReason))((::PBYTE)hIl2Cpp + CLASS_2_AD85F183D36B3AFD_STRUCT_2_81071DD54CCF8EE9_METHOD_2_52E240E1E873ACE3_OFFSET))(this, a1, a2, a3);
	}
};
