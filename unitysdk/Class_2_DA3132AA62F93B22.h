#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_520B187A8F3E7005.h"

#define CLASS_2_DA3132AA62F93B22_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x12849AA0)
#define CLASS_2_DA3132AA62F93B22__CTOR_OFFSET UNITYSDK_OFFSET(0x12849AF0)
#define CLASS_2_DA3132AA62F93B22___IFIXBASEPROXY_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x12849B00)

inline static constexpr unsigned int Class_2_DA3132AA62F93B22_TypeDefinitionIndex = 56316;

class Class_2_DA3132AA62F93B22 : public ::Class_1_520B187A8F3E7005
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA3132AA62F93B22__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA3132AA62F93B22_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA3132AA62F93B22___IFIXBASEPROXY_ONSTARTLOADING_OFFSET))(this);
	}
};
