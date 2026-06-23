#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0F16E8144E7D67AC_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_0F16E8144E7D67AC_METHOD_2_43C55C462DFB97F1_OFFSET UNITYSDK_OFFSET(0x123F8CF0)
#define STRUCT_2_0F16E8144E7D67AC_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define STRUCT_2_0F16E8144E7D67AC_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define STRUCT_2_0F16E8144E7D67AC_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_0F16E8144E7D67AC_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x55F930)
#define STRUCT_2_0F16E8144E7D67AC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3645D0)
#define STRUCT_2_0F16E8144E7D67AC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7884F0)
#define STRUCT_2_0F16E8144E7D67AC__CTOR_OFFSET UNITYSDK_OFFSET(0x7884B0)

inline static constexpr unsigned int Struct_2_0F16E8144E7D67AC_TypeDefinitionIndex = 39685;

struct alignas(8) Struct_2_0F16E8144E7D67AC
{
	::System::Int32 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_0F16E8144E7D67AC Method_2_43C55C462DFB97F1(::System::Int32 a1)
	{
		return ((::Struct_2_0F16E8144E7D67AC(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC_METHOD_2_43C55C462DFB97F1_OFFSET))(a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_0F16E8144E7D67AC_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
