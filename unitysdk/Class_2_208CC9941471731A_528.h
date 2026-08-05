#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_200.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_6.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_253.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_208CC9941471731A_528_METHOD_2_0BF60C2D93C141EA_OFFSET UNITYSDK_OFFSET(0x14F25ED0)
#define CLASS_2_208CC9941471731A_528__CTOR_OFFSET UNITYSDK_OFFSET(0x14F25EC0)

inline static constexpr unsigned int Class_2_208CC9941471731A_528_TypeDefinitionIndex = 11553;

class Class_2_208CC9941471731A_528 : public ::Class_1_5DA2E7556103D5A3_200
{
public:
	::System::Void _ctor(::Struct_2_58DF5669875F2C66_253 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_253, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_528__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_6> Method_2_0BF60C2D93C141EA(::Share::EPropertyType a1)
	{
		return ((::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_6>(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_528_METHOD_2_0BF60C2D93C141EA_OFFSET))(this, a1);
	}
};
