#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController.h"

class Class_2_79F6D62CE30E3F8E_83;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x17159F40)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_GETHOLLOWMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0x17159E80)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17159950)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17159A50)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x17159C10)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17159F90)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x17159FA0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1715A030)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1715A100)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTER___BASE_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x1715A110)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_Monster_TypeDefinitionIndex = 65894;

	class UIMonsterCardInfoPopWindowController_Monster : public ::MoleMole::UIMonsterCardInfoPopWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_83* _view; // 0x370

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
