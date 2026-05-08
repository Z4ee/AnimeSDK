#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_79CEC7EE864FE78E;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1277A900)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1277A910)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1277A980)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1277AC20)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1277AA50)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1277ABC0)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_SCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1277AF10)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x1277AD50)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_TRYOVERRIDESHOULDIGNOREITEM_OFFSET UNITYSDK_OFFSET(0x1277AE30)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1277AFD0)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1277B030)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x1277B0D0)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1277B180)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1277B220)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x1277B230)
#define MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_TRYOVERRIDESHOULDIGNOREITEM_OFFSET UNITYSDK_OFFSET(0x1277B2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapBangkovScrollViewController_TypeDefinitionIndex = 54606;

	class UrbanMapBangkovScrollViewController : public ::MoleMole::UIWidgetController
	{
	public:
		::Struct_2_575273D27F02957E _binderInfo; // 0x2B8
		::MoleMole::UIControlReference* _controlReference; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::Class_2_79CEC7EE864FE78E* get__viewModel()
		{
			return ((::Class_2_79CEC7EE864FE78E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Boolean TryOverrideShouldIgnoreItem(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_TRYOVERRIDESHOULDIGNOREITEM_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void ScrollDelta(::System::Single oldOtherHeight, ::System::Int32 oldInitIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER_SCROLLDELTA_OFFSET))(this, oldOtherHeight, oldInitIndex);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_TryOverrideShouldIgnoreItem(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPBANGKOVSCROLLVIEWCONTROLLER___BASE_TRYOVERRIDESHOULDIGNOREITEM_OFFSET))(this, P0, P1);
		}
	};
}
