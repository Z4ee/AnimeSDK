#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_88A364F1F2179491.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_AE069D1B5B2D2750_CLASS_1_8C0FE6B2C10A1FEE_METHOD_1_504885F14B4C5210_OFFSET UNITYSDK_OFFSET(0x13F0C010)
#define CLASS_1_AE069D1B5B2D2750_CLASS_1_8C0FE6B2C10A1FEE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0C000)

inline static constexpr unsigned int Class_1_AE069D1B5B2D2750_Class_1_8C0FE6B2C10A1FEE_TypeDefinitionIndex = 49288;

class Class_1_AE069D1B5B2D2750_Class_1_8C0FE6B2C10A1FEE : public ::System::Object
{
public:
	::System::Func_2<::Enum_3_88A364F1F2179491, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE069D1B5B2D2750_CLASS_1_8C0FE6B2C10A1FEE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_504885F14B4C5210(::Enum_3_88A364F1F2179491 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_88A364F1F2179491))((::PBYTE)hIl2Cpp + CLASS_1_AE069D1B5B2D2750_CLASS_1_8C0FE6B2C10A1FEE_METHOD_1_504885F14B4C5210_OFFSET))(this, a1);
	}
};
