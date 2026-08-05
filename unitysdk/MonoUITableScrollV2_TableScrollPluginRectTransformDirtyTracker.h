#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"

class MonoUITableScrollV2;
namespace MoleMole { class UIOnRectTransformDimensionsChangeHandler; }
namespace MoleMole { class UIOnTransformChildrenChangedHandler; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1166F7D0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET UNITYSDK_OFFSET(0x1166FD80)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET UNITYSDK_OFFSET(0x1166FB60)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONTRANSFORMCHILDRENCHANGED_CONTENT_OFFSET UNITYSDK_OFFSET(0x1166FF30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1166F7C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11670010)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginRectTransformDirtyTracker_TypeDefinitionIndex = 75083;

class MonoUITableScrollV2_TableScrollPluginRectTransformDirtyTracker : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange_Content(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET))(this, source);
	}

	::System::Void OnRectTransformDimensionsChange_ViewRect(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET))(this, source);
	}

	::System::Void OnTransformChildrenChanged_Content(::MoleMole::UIOnTransformChildrenChangedHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnTransformChildrenChangedHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER_ONTRANSFORMCHILDRENCHANGED_CONTENT_OFFSET))(this, source);
	}

	::System::Void __base_OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINRECTTRANSFORMDIRTYTRACKER___BASE_ONAWAKE_OFFSET))(this);
	}
};
