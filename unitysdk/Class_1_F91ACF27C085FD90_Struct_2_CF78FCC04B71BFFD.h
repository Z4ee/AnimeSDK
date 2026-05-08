#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F91ACF27C085FD90;

#define CLASS_1_F91ACF27C085FD90_STRUCT_2_CF78FCC04B71BFFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7576D0)
#define CLASS_1_F91ACF27C085FD90_STRUCT_2_CF78FCC04B71BFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

inline static constexpr unsigned int Class_1_F91ACF27C085FD90_Struct_2_CF78FCC04B71BFFD_TypeDefinitionIndex = 44089;

struct alignas(8) Class_1_F91ACF27C085FD90_Struct_2_CF78FCC04B71BFFD
{
	::Class_1_F91ACF27C085FD90* Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_F91ACF27C085FD90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_STRUCT_2_CF78FCC04B71BFFD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91ACF27C085FD90_STRUCT_2_CF78FCC04B71BFFD_DISPOSE_OFFSET))(this);
	}
};
