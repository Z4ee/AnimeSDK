#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_754E7605A8C1951A;
class Class_2_208CC9941471731A_130;
class Class_2_B1555FA59A3F87CE;
class Class_2_B382CAAA120A70DB;
class Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC;
class Class_3_DBE524ABBB651066;
namespace MoleMole { class MonoUIOverlordFeastMissionConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIOverlordFeastMissionTabWidgetController; }
namespace MoleMole { class UIOverlordFeastRoleIconWidgetController; }
namespace MoleMole { class UIOverlordFeastStarRowWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_GETTARGET_OFFSET UNITYSDK_OFFSET(0x16EB6AE0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16EB32A0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_INITTABS_OFFSET UNITYSDK_OFFSET(0x16EB3890)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16EB3390)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EB32B0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x16EB4470)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONLEVELCHANGED_OFFSET UNITYSDK_OFFSET(0x16EB6E90)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EB44E0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16EB4270)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EB4530)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EB3340)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EB35A0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_READPRVGAMES_OFFSET UNITYSDK_OFFSET(0x16EB45D0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_REFRESHGAMEENTRYLOCKEDBTN_OFFSET UNITYSDK_OFFSET(0x16EB61A0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_REFRESHGAMEENTRYUNLOCKEDBTN_OFFSET UNITYSDK_OFFSET(0x16EB6860)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16EB4810)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SETGAMEENTRYVIEW_OFFSET UNITYSDK_OFFSET(0x16EB5150)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SETHIDDENITEMSFORENTRY_OFFSET UNITYSDK_OFFSET(0x16EB5B70)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SETSTARSFORENTRY_OFFSET UNITYSDK_OFFSET(0x16EB6290)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x16EB6640)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_TRYPLAYUNLOCKANIMS_OFFSET UNITYSDK_OFFSET(0x16EB6EE0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_TRYPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x16EB6990)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB7040)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER__INITTABS_B__17_0_OFFSET UNITYSDK_OFFSET(0x16EB7200)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER__REFRESHVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x16EB71C0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EB7320)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x16EB73B0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EB73C0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16EB73D0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EB7490)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EB74A0)
#define MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EB74B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMissionPageController_TypeDefinitionIndex = 41460;

	class UIOverlordFeastMissionPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* GameEntryFadeInAnim; // 0x0
		::Class_2_B382CAAA120A70DB* _view; // 0x318
		::Class_2_B1555FA59A3F87CE* _overlordFeastModel; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIOverlordFeastRoleIconWidgetController*>*>* _hiddeItems; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIOverlordFeastStarRowWidgetController*>*>* _starItems; // 0x330
		::Class_1_754E7605A8C1951A* _dropDownViewModel; // 0x338
		::Il2CppArray<::Struct_2_037D21AC29ED1130>* _dropDownParams; // 0x340
		::System::Int32 _curIdx; // 0x348
		::System::Int32 _targetLevel; // 0x34C
		::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_130*>* _allLevels; // 0x350
		::MoleMole::UIGeneralNewHintWidgetController* _newHintWidget; // 0x358
		::System::Collections::Generic::List_1<::Class_3_DBE524ABBB651066*>* _showingList; // 0x360
		::System::Collections::Generic::List_1<::MoleMole::UIOverlordFeastMissionTabWidgetController*>* _tabBtns; // 0x368
		::MoleMole::MonoUIOverlordFeastMissionConfig* _config; // 0x370
		::System::Int32 _emptyPaddingCount; // 0x378
		::System::Boolean _fadePlayFinish; // 0x37C
		::System::Int32 _targetGameID; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetGameEntryView(::System::Int32 idx, ::Class_3_DBE524ABBB651066* game)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_DBE524ABBB651066*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SETGAMEENTRYVIEW_OFFSET))(this, idx, game);
		}

		::System::Void RefreshGameEntryLockedBtn(::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC* entryView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_REFRESHGAMEENTRYLOCKEDBTN_OFFSET))(this, entryView);
		}

		::System::Void RefreshGameEntryUnlockedBtn(::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC* entryView, ::System::Int32 finishCount, ::System::Boolean hideLock)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_REFRESHGAMEENTRYUNLOCKEDBTN_OFFSET))(this, entryView, finishCount, hideLock);
		}

		::System::Void SetStarsForEntry(::System::Int32 idx, ::UnityEngine::Transform* parent, ::System::Int32 curStar, ::System::Int32 fullStar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SETSTARSFORENTRY_OFFSET))(this, idx, parent, curStar, fullStar);
		}

		::System::Void SetHiddenItemsForEntry(::System::Int32 idx, ::UnityEngine::Transform* parent, ::System::Int32 gameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SETHIDDENITEMSFORENTRY_OFFSET))(this, idx, parent, gameID);
		}

		::System::Void InitTabs(::System::Int32 targetGame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_INITTABS_OFFSET))(this, targetGame);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetTarget()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_GETTARGET_OFFSET))(this);
		}

		::System::Void OnLevelChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_ONLEVELCHANGED_OFFSET))(this);
		}

		::System::Void ReadPrvGames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_READPRVGAMES_OFFSET))(this);
		}

		::System::Void TryPlayUnlockAnims()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_TRYPLAYUNLOCKANIMS_OFFSET))(this);
		}

		::System::Void TryPlayUnlockAnim(::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC* entryView, ::Class_3_DBE524ABBB651066* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*, ::Class_3_DBE524ABBB651066*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_TRYPLAYUNLOCKANIM_OFFSET))(this, entryView, game);
		}

		::System::Boolean ShouldPlayUnlockAnim(::System::Int32 gameID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER_SHOULDPLAYUNLOCKANIM_OFFSET))(this, gameID);
		}

		::System::Void _RefreshView_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER__REFRESHVIEW_B__11_0_OFFSET))(this);
		}

		::System::Void _InitTabs_b__17_0(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER__INITTABS_B__17_0_OFFSET))(this, idx);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMISSIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
