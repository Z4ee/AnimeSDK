#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D844B2DE6BA41D76.h"

#define CLASS_2_0C561856C5C5A2FC_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xA98C1C0)
#define CLASS_2_0C561856C5C5A2FC__CTOR_OFFSET UNITYSDK_OFFSET(0xA98C210)
#define CLASS_2_0C561856C5C5A2FC___IFIXBASEPROXY_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xA98C220)

inline static constexpr unsigned int Class_2_0C561856C5C5A2FC_TypeDefinitionIndex = 57078;

class Class_2_0C561856C5C5A2FC : public ::Class_1_D844B2DE6BA41D76
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C561856C5C5A2FC__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C561856C5C5A2FC_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C561856C5C5A2FC___IFIXBASEPROXY_ONSTARTLOADING_OFFSET))(this);
	}
};
