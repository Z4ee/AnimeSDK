#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_95.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_7.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_137.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_208CC9941471731A_960_METHOD_2_0BF60C2D93C141EA_OFFSET UNITYSDK_OFFSET(0x11FA1FC0)
#define CLASS_2_208CC9941471731A_960__CTOR_OFFSET UNITYSDK_OFFSET(0x11FA1FB0)

inline static constexpr unsigned int Class_2_208CC9941471731A_960_TypeDefinitionIndex = 16191;

class Class_2_208CC9941471731A_960 : public ::Class_1_5DA2E7556103D5A3_95
{
public:
	::System::Void _ctor(::Struct_2_58DF5669875F2C66_137 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_137, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_960__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_7> Method_2_0BF60C2D93C141EA(::Share::EPropertyType a1)
	{
		return ((::System::Nullable_1<::Struct_2_3659D99D9E0DCBB9_7>(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_960_METHOD_2_0BF60C2D93C141EA_OFFSET))(this, a1);
	}
};
