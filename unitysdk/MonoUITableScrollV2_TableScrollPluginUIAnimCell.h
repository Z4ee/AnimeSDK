#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class MonoUITableScrollV2;
class MonoUITableScrollV2_BaseScrollLogic;
namespace UnityEngine { class GameObject; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_CALGAMEOBJECTKXKY_1_OFFSET UNITYSDK_OFFSET(0x15B2E770)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_CALGAMEOBJECTKXKY_OFFSET UNITYSDK_OFFSET(0x15B2E350)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_LOGIC_OFFSET UNITYSDK_OFFSET(0x15B2DF10)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_USEUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x15B2DE70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0x15B2DEF0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_VIEWRECTBOUNDS_OFFSET UNITYSDK_OFFSET(0x15B2DF30)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_REFRESHUIANIMCELL_OFFSET UNITYSDK_OFFSET(0x15B2DF70)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2DE60)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginUIAnimCell_TypeDefinitionIndex = 75070;

class MonoUITableScrollV2_TableScrollPluginUIAnimCell : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Void _ctor(::MonoUITableScrollV2* tableScroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL__CTOR_OFFSET))(this, tableScroll);
	}

	::System::Boolean get_UseUIAnimCell()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_USEUIANIMCELL_OFFSET))(this);
	}

	::System::Boolean get_vertical()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_VERTICAL_OFFSET))(this);
	}

	::MonoUITableScrollV2_BaseScrollLogic* get_logic()
	{
		return ((::MonoUITableScrollV2_BaseScrollLogic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_LOGIC_OFFSET))(this);
	}

	::UnityEngine::Bounds get_ViewRectBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_GET_VIEWRECTBOUNDS_OFFSET))(this);
	}

	::System::Void RefreshUIAnimCell(::UnityEngine::GameObject* go, ::UnityEngine::Bounds& viewRectBounds)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_REFRESHUIANIMCELL_OFFSET))(this, go, viewRectBounds);
	}

	::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single> CalGameObjectKxKy(::UnityEngine::GameObject* go, ::UnityEngine::Bounds& viewRectBounds)
	{
		return ((::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_CALGAMEOBJECTKXKY_OFFSET))(this, go, viewRectBounds);
	}

	::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single> CalGameObjectKxKy_1(::UnityEngine::GameObject* go, ::UnityEngine::Bounds& viewRectBounds, ::UnityEngine::Matrix4x4& viewRectWorldToLocal, ::System::Boolean isVertical)
	{
		return ((::System::ValueTuple_4<::System::Single, ::System::Single, ::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Bounds&, ::UnityEngine::Matrix4x4&, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINUIANIMCELL_CALGAMEOBJECTKXKY_1_OFFSET))(this, go, viewRectBounds, viewRectWorldToLocal, isVertical);
	}
};
