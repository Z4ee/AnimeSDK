#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_013DB5EBD89922B2;
class Class_2_208CC9941471731A_674;
class Class_2_AF44BA000349C331;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDungeonBuffIcon02WidgetController; }
namespace MoleMole { class UIDungeonBuffIconWidgetController; }
namespace MoleMole { class UIInLevelPauseCommandItemWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18FDDC10)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FDCD60)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18FDCEC0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18FDDB40)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FDDB90)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FDCDF0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FDCE50)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18FDCFD0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDDC50)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FDDC60)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18FDDCF0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18FDDD90)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FDDDA0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FDDE30)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FDDEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCommandListRowWidgetController_TypeDefinitionIndex = 80399;

	class UIInLevelPauseCommandListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_AF44BA000349C331* _view; // 0x2F0
		::MoleMole::UIDungeonBuffIcon02WidgetController* _hitTypeIconCtrl; // 0x2F8
		::MoleMole::UIDungeonBuffIconWidgetController* _elementTypeIconCtrl; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseCommandItemWidgetController*>* _skillListItemList; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_674* template_, ::Class_2_013DB5EBD89922B2* avatarTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_674*, ::Class_2_013DB5EBD89922B2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, template_, avatarTemplate);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDLISTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
