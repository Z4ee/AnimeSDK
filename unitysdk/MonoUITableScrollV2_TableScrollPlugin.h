#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/Plugin/BasePlugin.h"

class MonoUITableScrollV2;

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA9060)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPlugin_TypeDefinitionIndex = 69888;

class MonoUITableScrollV2_TableScrollPlugin : public ::NAPScrollView::Plugin::BasePlugin
{
public:
	::MonoUITableScrollV2* _tableScroll; // 0x10

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGIN__CTOR_OFFSET))(this, tableScroll);
	}
};
