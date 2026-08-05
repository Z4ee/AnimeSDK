#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Struct_2_28E2D68EF264D80E.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_4_1E3B3C61FEA6C366_METHOD_4_8C939F6390BC04E5_OFFSET UNITYSDK_OFFSET(0x1CA37860)
#define CLASS_4_1E3B3C61FEA6C366__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA37840)
#define CLASS_4_1E3B3C61FEA6C366__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA37820)

inline static constexpr unsigned int Class_4_1E3B3C61FEA6C366_TypeDefinitionIndex = 92516;

class Class_4_1E3B3C61FEA6C366 : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_28E2D68EF264D80E>
{
public:
	::Struct_2_E614D3B245F96744 Field_4_0; // 0x10
	::System::Boolean Field_4_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1E3B3C61FEA6C366__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean a1, ::Struct_2_E614D3B245F96744 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_E614D3B245F96744))((::PBYTE)hIl2Cpp + CLASS_4_1E3B3C61FEA6C366__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Struct_2_28E2D68EF264D80E Method_4_8C939F6390BC04E5(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_28E2D68EF264D80E(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_1E3B3C61FEA6C366_METHOD_4_8C939F6390BC04E5_OFFSET))(this, a1);
	}
};
