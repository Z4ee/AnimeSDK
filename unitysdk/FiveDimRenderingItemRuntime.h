#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimRenderingItem.h"

#define FIVEDIMRENDERINGITEMRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x16067890)
#define FIVEDIMRENDERINGITEMRUNTIME__ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16067810)
#define FIVEDIMRENDERINGITEMRUNTIME__ONENABLE_OFFSET UNITYSDK_OFFSET(0x16067850)

inline static constexpr unsigned int FiveDimRenderingItemRuntime_TypeDefinitionIndex = 45329;

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
