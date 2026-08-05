#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"

class MonoUITableScrollV2;
namespace MoleMole { class UIOnRectTransformDimensionsChangeHandler; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET UNITYSDK_OFFSET(0x13575170)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET UNITYSDK_OFFSET(0x13575220)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x13568350)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginLayoutDirtyChecker_TypeDefinitionIndex = 75048;

class MonoUITableScrollV2_TableScrollPluginLayoutDirtyChecker : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Void OnRectTransformDimensionsChange_Content(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_CONTENT_OFFSET))(this, source);
	}

	::System::Void OnRectTransformDimensionsChange_ViewRect(::MoleMole::UIOnRectTransformDimensionsChangeHandler* source)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIOnRectTransformDimensionsChangeHandler*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINLAYOUTDIRTYCHECKER_ONRECTTRANSFORMDIMENSIONSCHANGE_VIEWRECT_OFFSET))(this, source);
	}
};
