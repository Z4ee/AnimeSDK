#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_A58928D7D947D7A1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGrandMarcelAdventureChildWindowController; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoDigitConfig; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_BINDPLATFORMICONBTNLONGPRESS_OFFSET UNITYSDK_OFFSET(0x15DA1D40)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_CLEANSTATE_OFFSET UNITYSDK_OFFSET(0x15DA1070)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_DISAPPEAR_OFFSET UNITYSDK_OFFSET(0x15DA19A0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_FADEIN_OFFSET UNITYSDK_OFFSET(0x15DA1C60)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_FADEOUT_OFFSET UNITYSDK_OFFSET(0x15DA1FC0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_MOVETOTOP_OFFSET UNITYSDK_OFFSET(0x15DA18D0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DA0D80)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DA0E10)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DA0D00)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_SETINFO_OFFSET UNITYSDK_OFFSET(0x15DA1200)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_SETPARENT_OFFSET UNITYSDK_OFFSET(0x15DA1CF0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATENONERANK_OFFSET UNITYSDK_OFFSET(0x15DA0E90)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATERANK_OFFSET UNITYSDK_OFFSET(0x15DA1A20)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA2090)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DA20F0)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DA2180)
#define MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DA2210)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelHudRankRowWidgetController_TypeDefinitionIndex = 78437;

	class UIMarcelHudRankRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A58928D7D947D7A1* _view; // 0x2C0
		::MoleMole::UIGrandMarcelAdventureChildWindowController* _parent; // 0x2C8
		::Class_1_BE6BF7909AD9D940* _info; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateNoneRank(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATENONERANK_OFFSET))(this, uid);
		}

		::System::Void UpdateRank(::System::Int32 rank, ::System::UInt32 uid, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig* monoDigit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::MoleMole::MiniGame::BangbooPartyGame::MonoDigitConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_UPDATERANK_OFFSET))(this, rank, uid, monoDigit);
		}

		::System::Void SetParent(::MoleMole::UIGrandMarcelAdventureChildWindowController* parentController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGrandMarcelAdventureChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_SETPARENT_OFFSET))(this, parentController);
		}

		::System::Collections::IEnumerator* Disappear()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_DISAPPEAR_OFFSET))(this);
		}

		::System::Void CleanState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_CLEANSTATE_OFFSET))(this);
		}

		::System::Void MoveToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_MOVETOTOP_OFFSET))(this);
		}

		::System::Void SetInfo(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_SETINFO_OFFSET))(this, uid);
		}

		::System::Void BindPlatformIconBtnLongPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_BINDPLATFORMICONBTNLONGPRESS_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER_FADEOUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELHUDRANKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
