#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_EFEAEB43E55695E2;
class Class_2_BCB29D9ECCEF0E00;
class Class_2_BFE67BC6DBA76B66;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_CHECKUNLOCKPOINT_OFFSET UNITYSDK_OFFSET(0x189AE0C0)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x189AD270)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x189AD440)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x189AE3F0)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x189AE2E0)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189AD500)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189AD2E0)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189AE500)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x189AE510)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x189AE5B0)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x189AE660)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189AE6F0)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189AE790)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostTypeRowWidgetController_TypeDefinitionIndex = 87139;

	class UIInterKnotPostTypeRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_BCB29D9ECCEF0E00* lockModel; // 0x2F0
		::Class_1_EFEAEB43E55695E2* rowData; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_BFE67BC6DBA76B66* get__viewModel()
		{
			return ((::Class_2_BFE67BC6DBA76B66*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void CheckUnLockPoint(::Class_1_EFEAEB43E55695E2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFEAEB43E55695E2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_CHECKUNLOCKPOINT_OFFSET))(this, data);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
