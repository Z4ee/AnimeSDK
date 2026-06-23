#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_98;
class Class_2_8607800D97BB03E5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMiniscapeTalentPageController_MiniscapeTalentOneRowData; }
namespace MoleMole { class UIMiniscapeTalentPageController_MiniscapeTalentPerData; }
namespace MoleMole { class UIMiniscapeTalentPiontWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_CLEARCURVESANIMATEDTAG_OFFSET UNITYSDK_OFFSET(0x16D9FD30)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_CLEARCURVESOPENTAG_OFFSET UNITYSDK_OFFSET(0x16DA00E0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x16DA0070)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETONEROWDATABYCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0x16DA1C50)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETPERTALENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x16DA0340)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETPERTALENTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x16DA21F0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETTALENTCOUNTBYCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0x16D9FED0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16D9D9D0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ISCANSHOWRESETBUTTON_OFFSET UNITYSDK_OFFSET(0x16DA15D0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ISHAVEZEROTALENT_OFFSET UNITYSDK_OFFSET(0x16D9F0D0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONADDTALENTEVENT_OFFSET UNITYSDK_OFFSET(0x16DA1980)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONCREATEALLITEM_OFFSET UNITYSDK_OFFSET(0x16D9F330)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D9D9E0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONOKBTN_OFFSET UNITYSDK_OFFSET(0x16DA0230)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONPERTALENTCLICK_OFFSET UNITYSDK_OFFSET(0x16DA0520)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONRESETBTN_OFFSET UNITYSDK_OFFSET(0x16DA0140)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONRESETTALENTEVENT_OFFSET UNITYSDK_OFFSET(0x16DA1A20)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x16D9EB40)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D9ED20)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D9DB20)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x16D9EEC0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_PLAYCURVEFILLANIMATION_OFFSET UNITYSDK_OFFSET(0x16D9FFE0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x16DA0A90)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_REFRESHLINEMESH_OFFSET UNITYSDK_OFFSET(0x16D9FD90)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETLINE_OFFSET UNITYSDK_OFFSET(0x16D9FDF0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETNEXTTALENTINDEXBYPRETALENTIDLIST_OFFSET UNITYSDK_OFFSET(0x16DA2080)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETNEXTTALENTINDEX_OFFSET UNITYSDK_OFFSET(0x16DA1DE0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETPANELDATA_OFFSET UNITYSDK_OFFSET(0x16D9E360)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SHOWRESETBTN_OFFSET UNITYSDK_OFFSET(0x16D9F030)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SORTPANELDATALIST_OFFSET UNITYSDK_OFFSET(0x16DA2000)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_STOPANIMATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x16D9ED90)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DA2410)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA22D0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__ONRESETBTN_B__32_0_OFFSET UNITYSDK_OFFSET(0x16DA2540)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__PLAYANIMATION_B__22_0_OFFSET UNITYSDK_OFFSET(0x16DA2420)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__PLAYANIMATION_B__22_1_OFFSET UNITYSDK_OFFSET(0x16DA24B0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16DA2570)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16DA2600)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16DA2610)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeTalentPageController_TypeDefinitionIndex = 53459;

	class UIMiniscapeTalentPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_IsNeedDelayOnPlayAnimation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMiniscapeTalentPageController_TypeDefinitionIndex)->GetStaticField(0xDC80);
		}
		// static const ::System::String* _talentPageBg1; // 0x0
		// static const ::System::String* _talentPageBg2; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* _talentPageBgList; // 0x318
		::Class_2_79AE422BA06F6D26_98* _view; // 0x320
		::Class_2_8607800D97BB03E5* _model; // 0x328
		::MoleMole::UIMiniscapeTalentPiontWidgetController* _rightTalentTemplate; // 0x330
		::MoleMole::UIMiniscapeTalentPiontWidgetController* _rightTalentTemplateBg; // 0x338
		::UnityEngine::Coroutine* _animationCallBack; // 0x340
		::UnityEngine::Coroutine* _animationCallBackBg; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>*>* _panelDataMap; // 0x350
		::System::Collections::Generic::List_1<::System::Int32>* _avatarList; // 0x358
		::MoleMole::UIMiniscapeTalentPiontWidgetController* _cacheTalentTemplate; // 0x360
		::System::UInt32 _currentAvatarId; // 0x368
		::System::UInt32 _currentTalentId; // 0x36C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnToggle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONTOGGLE_OFFSET))(this, index);
		}

		::System::Void ShowResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SHOWRESETBTN_OFFSET))(this);
		}

		::System::Void PlayAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_PLAYANIMATION_OFFSET))(this);
		}

		::System::Void StopAnimationCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_STOPANIMATIONCALLBACK_OFFSET))(this);
		}

		::System::Void OnCreateAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONCREATEALLITEM_OFFSET))(this);
		}

		::System::Void SetLine(::UnityEngine::RectTransform* start, ::UnityEngine::RectTransform* end, ::System::Int32 nextColumnIndex, ::System::Boolean isOpen, ::System::Boolean isShowLineAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETLINE_OFFSET))(this, start, end, nextColumnIndex, isOpen, isShowLineAnimation);
		}

		::System::Void RefreshLineMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_REFRESHLINEMESH_OFFSET))(this);
		}

		::System::Void PlayCurveFillAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_PLAYCURVEFILLANIMATION_OFFSET))(this);
		}

		::System::Single GetAnimationTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETANIMATIONTIME_OFFSET))(this);
		}

		::System::Void ClearCurvesAnimatedTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_CLEARCURVESANIMATEDTAG_OFFSET))(this);
		}

		::System::Void ClearCurvesOpenTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_CLEARCURVESOPENTAG_OFFSET))(this);
		}

		::System::Int32 GetTalentCountByColumnIndex(::System::Int32 columnIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETTALENTCOUNTBYCOLUMNINDEX_OFFSET))(this, columnIndex);
		}

		::System::Void OnResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONRESETBTN_OFFSET))(this);
		}

		::System::Boolean IsHaveZeroTalent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ISHAVEZEROTALENT_OFFSET))(this);
		}

		::System::Void OnOKBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONOKBTN_OFFSET))(this);
		}

		::MoleMole::UIMiniscapeTalentPiontWidgetController* GetPerTalentByIndex(::System::Int32 columnIndex, ::System::Int32 rowIndex)
		{
			return ((::MoleMole::UIMiniscapeTalentPiontWidgetController*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETPERTALENTBYINDEX_OFFSET))(this, columnIndex, rowIndex);
		}

		::System::Void OnPerTalentClick(::MoleMole::UIMiniscapeTalentPiontWidgetController* item, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* templateData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniscapeTalentPiontWidgetController*, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONPERTALENTCLICK_OFFSET))(this, item, templateData);
		}

		::System::Void RefreshButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_REFRESHBUTTON_OFFSET))(this);
		}

		::System::Boolean IsCanShowResetButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ISCANSHOWRESETBUTTON_OFFSET))(this);
		}

		::System::Void OnAddTalentEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONADDTALENTEVENT_OFFSET))(this, obj);
		}

		::System::Void OnResetTalentEvent(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_ONRESETTALENTEVENT_OFFSET))(this, obj);
		}

		::System::Void SetPanelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETPANELDATA_OFFSET))(this);
		}

		::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData* GetOneRowDataByColumnIndex(::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>* rowDataList, ::System::Int32 columnIndex)
		{
			return ((::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETONEROWDATABYCOLUMNINDEX_OFFSET))(this, rowDataList, columnIndex);
		}

		::System::Int32 SortPanelDataList(::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData* first, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData* second)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SORTPANELDATALIST_OFFSET))(this, first, second);
		}

		::System::Void SetNextTalentIndex(::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>* rowDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETNEXTTALENTINDEX_OFFSET))(this, rowDataList);
		}

		::System::Void SetNextTalentIndexByPreTalentIDList(::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>* rowDataList, ::System::Collections::Generic::List_1<::System::Int32>* preTalentIDList, ::System::Int32 columnIndex, ::System::Int32 rowIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_SETNEXTTALENTINDEXBYPRETALENTIDLIST_OFFSET))(this, rowDataList, preTalentIDList, columnIndex, rowIndex);
		}

		::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* GetPerTalentDataByIndex(::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>* rowDataList, ::System::Collections::Generic::List_1<::System::Int32>* talentPosByTableConfig)
		{
			return ((::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentOneRowData*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_GETPERTALENTDATABYINDEX_OFFSET))(this, rowDataList, talentPosByTableConfig);
		}

		::System::Void _PlayAnimation_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__PLAYANIMATION_B__22_0_OFFSET))(this);
		}

		::System::Void _PlayAnimation_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__PLAYANIMATION_B__22_1_OFFSET))(this);
		}

		::System::Void _OnResetBtn_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER__ONRESETBTN_B__32_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
