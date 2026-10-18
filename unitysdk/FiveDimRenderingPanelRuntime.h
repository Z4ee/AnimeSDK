#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimRenderingPanel.h"

#define FIVEDIMRENDERINGPANELRUNTIME_METHOD_6_70C856AE64234BE0_OFFSET UNITYSDK_OFFSET(0x159321D0)
#define FIVEDIMRENDERINGPANELRUNTIME_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15932220)
#define FIVEDIMRENDERINGPANELRUNTIME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15932260)
#define FIVEDIMRENDERINGPANELRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x159322B0)

inline static constexpr unsigned int FiveDimRenderingPanelRuntime_TypeDefinitionIndex = 47123;

class FiveDimRenderingPanelRuntime : public ::FiveDimRenderingPanel
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME__CTOR_OFFSET))(this);
	}

	::System::Void Method_6_70C856AE64234BE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME_METHOD_6_70C856AE64234BE0_OFFSET))(this);
	}

	::System::Void Method_6_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME_METHOD_6_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANELRUNTIME_ONDESTROY_OFFSET))(this);
	}
};
