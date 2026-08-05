#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_627DF5C40DDAA45B.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"

#define CLASS_4_1BC4E92C6B5EFFA3_METHOD_4_4CBA3283B7D563DE_OFFSET UNITYSDK_OFFSET(0x15BF3550)
#define CLASS_4_1BC4E92C6B5EFFA3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15BF36A0)
#define CLASS_4_1BC4E92C6B5EFFA3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15BF3480)
#define CLASS_4_1BC4E92C6B5EFFA3__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF34C0)

inline static constexpr unsigned int Class_4_1BC4E92C6B5EFFA3_TypeDefinitionIndex = 88885;

class Class_4_1BC4E92C6B5EFFA3 : public ::Class_3_627DF5C40DDAA45B<::Class_4_1BC4E92C6B5EFFA3*>
{
public:
	::Enum_3_CE80FD07999C5845 Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BC4E92C6B5EFFA3__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BC4E92C6B5EFFA3_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_4_4CBA3283B7D563DE(::Enum_3_2C704E2262533CBD a1, ::System::Single a2, ::Enum_3_C460945F1F3C12F5 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2C704E2262533CBD, ::System::Single, ::Enum_3_C460945F1F3C12F5))((::PBYTE)hIl2Cpp + CLASS_4_1BC4E92C6B5EFFA3_METHOD_4_4CBA3283B7D563DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1BC4E92C6B5EFFA3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
