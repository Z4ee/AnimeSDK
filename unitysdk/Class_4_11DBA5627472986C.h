#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_534AF681CC2BD5FD_1.h"
#include "unitysdk/Enum_3_482B1CDFE28F622E.h"
#include "unitysdk/Struct_2_3A7FF3B65F3D3C52.h"
#include "unitysdk/Struct_2_52A902145F5BE51A.h"

#define CLASS_4_11DBA5627472986C_METHOD_4_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x1CCF8620)
#define CLASS_4_11DBA5627472986C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE9E90)

inline static constexpr unsigned int Class_4_11DBA5627472986C_TypeDefinitionIndex = 88636;

class Class_4_11DBA5627472986C : public ::Class_3_534AF681CC2BD5FD_1<::Struct_2_3A7FF3B65F3D3C52>
{
public:
	::Enum_3_482B1CDFE28F622E Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_11DBA5627472986C__CTOR_OFFSET))(this);
	}

	::Struct_2_3A7FF3B65F3D3C52 Method_4_DC18FF8EFDFCAAC1(::Struct_2_52A902145F5BE51A& a1)
	{
		return ((::Struct_2_3A7FF3B65F3D3C52(*)(::PVOID, ::Struct_2_52A902145F5BE51A&))((::PBYTE)hIl2Cpp + CLASS_4_11DBA5627472986C_METHOD_4_DC18FF8EFDFCAAC1_OFFSET))(this, a1);
	}
};
