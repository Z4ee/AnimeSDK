#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31852543D3677906_GET_USEFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x182E0)
#define STRUCT_2_31852543D3677906_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x3B01680)
#define STRUCT_2_31852543D3677906_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3B01620)
#define STRUCT_2_31852543D3677906_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x3B016D0)
#define STRUCT_2_31852543D3677906_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x3B01670)
#define STRUCT_2_31852543D3677906_SET_USEFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x18100)

inline static constexpr unsigned int Struct_2_31852543D3677906_TypeDefinitionIndex = 79176;

struct alignas(1) Struct_2_31852543D3677906
{
	::System::Boolean _UseFullScreenBlock_k__BackingField; // 0x10
	::System::Boolean NJFMHIGGHPD; // 0x11
	::System::Boolean LMFJCONGPKL; // 0x12

	::System::Boolean get_UseFullScreenBlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_GET_USEFULLSCREENBLOCK_OFFSET))(this);
	}

	::System::Void set_UseFullScreenBlock(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_SET_USEFULLSCREENBLOCK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}
};
