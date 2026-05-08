#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController.h"

class Class_2_79F6D62CE30E3F8E_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x147CCB00)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETHOLLOWMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0x147CCA40)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147CC520)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147CC620)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x147CC7D0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x147CCB50)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x147CCB60)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147CCBF0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147CCCC0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x147CCCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_Monster_TypeDefinitionIndex = 43381;

	class UIMonsterCardInfoPopWindowController_Monster : public ::MoleMole::UIMonsterCardInfoPopWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_3* _view; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_UPDATEBOSSCFGLIST_OFFSET))(this);
		}

		::System::Int32 GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetHollowMonsterIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETHOLLOWMONSTERIDLIST_OFFSET))(this);
		}

		::System::Int32 __base_GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_UPDATEBOSSCFGLIST_OFFSET))(this);
		}
	};
}
