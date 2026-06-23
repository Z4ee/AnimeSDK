#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_777F7252E2501367_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA6D160)
#define STRUCT_2_777F7252E2501367_METHOD_2_67D98A15D1F75AFC_OFFSET UNITYSDK_OFFSET(0x1E5BA160)
#define STRUCT_2_777F7252E2501367_METHOD_2_704CAEDCD95E9E98_OFFSET UNITYSDK_OFFSET(0x1E5BA260)
#define STRUCT_2_777F7252E2501367_METHOD_2_AB51F6CE54DD3FC1_OFFSET UNITYSDK_OFFSET(0x1E5B9F80)
#define STRUCT_2_777F7252E2501367_METHOD_2_DCD2D9D0C933336E_OFFSET UNITYSDK_OFFSET(0x1E5BA2F0)
#define STRUCT_2_777F7252E2501367_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA6D150)
#define STRUCT_2_777F7252E2501367__CTOR_OFFSET UNITYSDK_OFFSET(0x776510)

inline static constexpr unsigned int Struct_2_777F7252E2501367_TypeDefinitionIndex = 28742;

struct alignas(4) Struct_2_777F7252E2501367
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_777F7252E2501367__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_777F7252E2501367_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_777F7252E2501367_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	/*
	static ::System::Boolean Method_2_AB51F6CE54DD3FC1(::Struct_2_E614D3B245F96744 a1, ::System::Single a2, ::System::Single a3, ::Struct_2_E614D3B245F96744 a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::Struct_2_E614D3B245F96744, ::System::Single, ::System::Single, ::Struct_2_E614D3B245F96744, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_777F7252E2501367_METHOD_2_AB51F6CE54DD3FC1_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
	*/

	/*
	static ::Struct_2_777F7252E2501367 Method_2_67D98A15D1F75AFC(::Struct_2_E614D3B245F96744 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_777F7252E2501367(*)(::Struct_2_E614D3B245F96744, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_777F7252E2501367_METHOD_2_67D98A15D1F75AFC_OFFSET))(a1, a2, a3);
	}
	*/

	/*
	static ::Struct_2_777F7252E2501367 Method_2_DCD2D9D0C933336E(::Struct_2_E614D3B245F96744_1 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Struct_2_777F7252E2501367(*)(::Struct_2_E614D3B245F96744_1, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_777F7252E2501367_METHOD_2_DCD2D9D0C933336E_OFFSET))(a1, a2, a3);
	}
	*/

	static ::System::Boolean Method_2_704CAEDCD95E9E98(::Struct_2_777F7252E2501367 a1, ::Struct_2_777F7252E2501367 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_777F7252E2501367, ::Struct_2_777F7252E2501367))((::PBYTE)hIl2Cpp + STRUCT_2_777F7252E2501367_METHOD_2_704CAEDCD95E9E98_OFFSET))(a1, a2);
	}
};
