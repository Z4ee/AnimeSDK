#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_F59B5360489F89C4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1801F940)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1801F9B0)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1801FCA0)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONOUTERGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1801FE70)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSERVERINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x180200E0)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1801FAC0)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1801FA50)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18020150)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x180201B0)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18020250)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180202E0)
#define MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18020380)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameCollectBulletWidgetController_TypeDefinitionIndex = 58653;

	class UIBallGameCollectBulletWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_F59B5360489F89C4* get__viewModel()
		{
			return ((::Class_3_F59B5360489F89C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnOuterGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONOUTERGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnServerInfoChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER_ONSERVERINFOCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMECOLLECTBULLETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
