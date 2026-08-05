#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_636BCE1438F6FC8E;
class Class_3_09CC5D2676B783CA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x182A0140)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x182A01B0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182A0270)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_UPDATEINROOMPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x182A04B0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182A0560)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x182A05C0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182A0660)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGamePlayerInviteWidgetController_TypeDefinitionIndex = 78528;

	class UIInGamePlayerInviteWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_636BCE1438F6FC8E* get__viewModel()
		{
			return ((::Class_2_636BCE1438F6FC8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void UpdateInRoomPlayerList(::System::Collections::Generic::List_1<::Class_3_09CC5D2676B783CA*>* playerList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_09CC5D2676B783CA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_UPDATEINROOMPLAYERLIST_OFFSET))(this, playerList);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
