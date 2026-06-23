#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_148;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET UNITYSDK_OFFSET(0x1A1FC420)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A1FB9B0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1FBA40)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x1A1FBAC0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FC530)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A1FC590)
#define MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1FC620)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerInLevelPauseBuffInfoWidgetController_TypeDefinitionIndex = 69790;

	class UIBabelTowerInLevelPauseBuffInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_148* _view; // 0x2C0
		::System::Boolean isOpen; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetNestedListDelegateGoList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAUSEBUFFINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
