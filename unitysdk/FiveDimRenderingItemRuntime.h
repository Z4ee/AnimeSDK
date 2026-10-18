#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimRenderingItem.h"

#define FIVEDIMRENDERINGITEMRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1591CB10)
#define FIVEDIMRENDERINGITEMRUNTIME__ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1591CA90)
#define FIVEDIMRENDERINGITEMRUNTIME__ONENABLE_OFFSET UNITYSDK_OFFSET(0x1591CAD0)

inline static constexpr unsigned int FiveDimRenderingItemRuntime_TypeDefinitionIndex = 47108;

class FiveDimRenderingItemRuntime : public ::FiveDimRenderingItem
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEMRUNTIME__CTOR_OFFSET))(this);
	}

	::System::Void _OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEMRUNTIME__ONDISABLE_OFFSET))(this);
	}

	::System::Void _OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEMRUNTIME__ONENABLE_OFFSET))(this);
	}
};
