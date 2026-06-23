#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5065FA890F0D9B8A.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_24.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_EF0B7B770198FEB2_METHOD_2_354FAA9DA58CFB18_OFFSET UNITYSDK_OFFSET(0x1B79E5C0)
#define CLASS_2_EF0B7B770198FEB2_METHOD_2_558085148BAD886F_OFFSET UNITYSDK_OFFSET(0x1B79E5F0)
#define CLASS_2_EF0B7B770198FEB2_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1B79E5E0)
#define CLASS_2_EF0B7B770198FEB2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1B79E5D0)
#define CLASS_2_EF0B7B770198FEB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79E5B0)

inline static constexpr unsigned int Class_2_EF0B7B770198FEB2_TypeDefinitionIndex = 13199;

class Class_2_EF0B7B770198FEB2 : public ::Class_1_5065FA890F0D9B8A
{
public:
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_2_1; // 0x70
	::System::Boolean Field_2_0; // 0x78

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_24 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_24, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_EF0B7B770198FEB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_354FAA9DA58CFB18(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_EF0B7B770198FEB2_METHOD_2_354FAA9DA58CFB18_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF0B7B770198FEB2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF0B7B770198FEB2_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_558085148BAD886F()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF0B7B770198FEB2_METHOD_2_558085148BAD886F_OFFSET))(this);
	}
};
