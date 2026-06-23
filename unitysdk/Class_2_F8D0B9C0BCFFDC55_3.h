#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0D6706375CDAAE8C.h"
#include "unitysdk/Share/EItemType.h"

class Class_2_208CC9941471731A_131;

#define CLASS_2_F8D0B9C0BCFFDC55_3_METHOD_2_2DEAC7321A00774E_OFFSET UNITYSDK_OFFSET(0x15CA2CB0)
#define CLASS_2_F8D0B9C0BCFFDC55_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA2CC0)

inline static constexpr unsigned int Class_2_F8D0B9C0BCFFDC55_3_TypeDefinitionIndex = 61449;

class Class_2_F8D0B9C0BCFFDC55_3 : public ::Class_1_0D6706375CDAAE8C
{
public:
	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_131* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Share::EItemType Method_2_2DEAC7321A00774E()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8D0B9C0BCFFDC55_3_METHOD_2_2DEAC7321A00774E_OFFSET))(this);
	}
};
