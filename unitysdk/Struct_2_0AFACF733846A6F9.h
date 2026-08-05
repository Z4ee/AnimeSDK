#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4D920E0D40284B49.h"
#include "unitysdk/Enum_3_8C5B5B31A78ED626.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_0AFACF733846A6F9_EQUALS_OFFSET UNITYSDK_OFFSET(0x7DF170)
#define STRUCT_2_0AFACF733846A6F9_METHOD_2_60CFFC380C745527_OFFSET UNITYSDK_OFFSET(0x7DF240)
#define STRUCT_2_0AFACF733846A6F9_METHOD_2_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0x7DF1F0)
#define STRUCT_2_0AFACF733846A6F9_METHOD_2_8E88A87544A2E409_OFFSET UNITYSDK_OFFSET(0x7DF250)

inline static constexpr unsigned int Struct_2_0AFACF733846A6F9_TypeDefinitionIndex = 77099;

struct alignas(4) Struct_2_0AFACF733846A6F9
{
	::Enum_3_4D920E0D40284B49 Field_2_1; // 0x10
	::Enum_3_8C5B5B31A78ED626 Field_2_0; // 0x14
	::System::Nullable_1<::System::Int32> Field_2_7; // 0x18

	::System::Boolean Equals(::Struct_2_0AFACF733846A6F9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0AFACF733846A6F9))((::PBYTE)hIl2Cpp + STRUCT_2_0AFACF733846A6F9_EQUALS_OFFSET))(this, a1);
	}

	::System::Void Method_2_77E3CF907BA6F8B7(::Enum_3_4D920E0D40284B49 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4D920E0D40284B49))((::PBYTE)hIl2Cpp + STRUCT_2_0AFACF733846A6F9_METHOD_2_77E3CF907BA6F8B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_60CFFC380C745527(::Enum_3_8C5B5B31A78ED626 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_8C5B5B31A78ED626))((::PBYTE)hIl2Cpp + STRUCT_2_0AFACF733846A6F9_METHOD_2_60CFFC380C745527_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E88A87544A2E409(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0AFACF733846A6F9_METHOD_2_8E88A87544A2E409_OFFSET))(this, a1, a2);
	}
};
