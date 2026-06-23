#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_2.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_1.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_2.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_208CC9941471731A_9_METHOD_2_0BF60C2D93C141EA_OFFSET UNITYSDK_OFFSET(0x1BAC1450)
#define CLASS_2_208CC9941471731A_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC1440)

inline static constexpr unsigned int Class_2_208CC9941471731A_9_TypeDefinitionIndex = 8862;

class Class_2_208CC9941471731A_9 : public ::Class_1_5DA2E7556103D5A3_2
{
public:
	::System::Void _ctor(::Struct_2_58DF5669875F2C66_2 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_2, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_1> Method_2_0BF60C2D93C141EA(::Share::EPropertyType a1)
	{
		return ((::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_1>(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_9_METHOD_2_0BF60C2D93C141EA_OFFSET))(this, a1);
	}
};
