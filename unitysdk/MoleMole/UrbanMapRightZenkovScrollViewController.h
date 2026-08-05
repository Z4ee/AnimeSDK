#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_A81FDF8137D3830D;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x10F16750)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10F16760)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10F167D0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x10F16A70)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x10F169F0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10F16900)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x10F168A0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_SELECTTARGETENTRUST_OFFSET UNITYSDK_OFFSET(0x10F16EF0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10F16FA0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10F17000)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x10F170A0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x10F17130)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10F171E0)
#define MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x10F17280)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapRightZenkovScrollViewController_TypeDefinitionIndex = 73698;

	class UrbanMapRightZenkovScrollViewController : public ::MoleMole::UIWidgetController
	{
	public:
		::Struct_2_575273D27F02957E _binderInfo; // 0x2C0
		::MoleMole::UIControlReference* _controlReference; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::Class_2_A81FDF8137D3830D* get__viewModel()
		{
			return ((::Class_2_A81FDF8137D3830D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void SelectTargetEntrust(::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER_SELECTTARGETENTRUST_OFFSET))(this, questId);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPRIGHTZENKOVSCROLLVIEWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
