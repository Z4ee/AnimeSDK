#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController.h"

class Class_2_79F6D62CE30E3F8E_83;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x174E5690)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETHOLLOWMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0x174E55D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174E50D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174E51D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x174E5360)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x174E56E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x174E56F0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174E5780)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174E5850)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x174E5860)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_Custom_TypeDefinitionIndex = 50542;

	class UIMonsterCardInfoPopWindowController_Custom : public ::MoleMole::UIMonsterCardInfoPopWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_83* _view; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_UPDATEBOSSCFGLIST_OFFSET))(this);
		}

		::System::Int32 GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetHollowMonsterIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM_GETHOLLOWMONSTERIDLIST_OFFSET))(this);
		}

		::System::Int32 __base_GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_CUSTOM___BASE_UPDATEBOSSCFGLIST_OFFSET))(this);
		}
	};
}
