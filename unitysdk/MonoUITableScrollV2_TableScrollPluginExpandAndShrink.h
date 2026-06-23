#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIExpandAndShrinkCell_ExpandState.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/System/Nullable_1.h"

class MonoUIExpandAndShrinkCell;
class MonoUITableScrollV2;
namespace System { class Action; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_EXPAND_OFFSET UNITYSDK_OFFSET(0x10438540)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_GET__MONOUIEXPANDANDSHRINKCELL_OFFSET UNITYSDK_OFFSET(0x104383A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTEREXPANDEND_OFFSET UNITYSDK_OFFSET(0x10438860)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTERSHRINKEND_OFFSET UNITYSDK_OFFSET(0x104389D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_SHRINK_OFFSET UNITYSDK_OFFSET(0x104386D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_UPDATE_OFFSET UNITYSDK_OFFSET(0x10438190)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK__CTOR_OFFSET UNITYSDK_OFFSET(0x10438180)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10438B40)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginExpandAndShrink_TypeDefinitionIndex = 69978;

class MonoUITableScrollV2_TableScrollPluginExpandAndShrink : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Action* _onShrinkEnd; // 0x18
	::System::Action* _onExpandEnd; // 0x20
	::MonoUIExpandAndShrinkCell* __monoUIExpandAndShrinkCell; // 0x28
	::MonoUIExpandAndShrinkCell_ExpandState _expandState; // 0x30

	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_UPDATE_OFFSET))(this);
	}

	::System::Single Expand(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_EXPAND_OFFSET))(this, normalizedTime);
	}

	::System::Single Shrink(::System::Nullable_1<::System::Single> normalizedTime)
	{
		return ((::System::Single(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_SHRINK_OFFSET))(this, normalizedTime);
	}

	::System::Void RegisterExpandEnd(::System::Action* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTEREXPANDEND_OFFSET))(this, callback);
	}

	::System::Void RegisterShrinkEnd(::System::Action* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_REGISTERSHRINKEND_OFFSET))(this, callback);
	}

	::MonoUIExpandAndShrinkCell* get__monoUIExpandAndShrinkCell()
	{
		return ((::MonoUIExpandAndShrinkCell*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK_GET__MONOUIEXPANDANDSHRINKCELL_OFFSET))(this);
	}

	::System::Void __base_Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINEXPANDANDSHRINK___BASE_UPDATE_OFFSET))(this);
	}
};
