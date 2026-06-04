#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9E8CD0C1037EB98E_2;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MemTestPageController_PlayerDropDownItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLMONSTEREFFECTS_OFFSET UNITYSDK_OFFSET(0xBFC7420)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLPLAYEREFFECTS_OFFSET UNITYSDK_OFFSET(0xBFC7A20)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURMONSTEREFFECTS_OFFSET UNITYSDK_OFFSET(0xBFC7990)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURPLAYEREFFECTS_OFFSET UNITYSDK_OFFSET(0xBFC7E30)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETMONSTEREFFECTSOFSKILLTYPE_OFFSET UNITYSDK_OFFSET(0xBFC7750)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETPLAYEREFFECTSOFSKILLTYPE_OFFSET UNITYSDK_OFFSET(0xBFC7CA0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xBFC8EF0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_INITMONSTERDRAPDOWN_OFFSET UNITYSDK_OFFSET(0xBFC9D40)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_INITPLAYERDRAPDOWN_OFFSET UNITYSDK_OFFSET(0xBFC96A0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0xBFCF690)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC7EC0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFC7F50)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__INITCHAPTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0xBFCAA70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__INITSTAGEDROPDOWN_OFFSET UNITYSDK_OFFSET(0xBFCA390)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEDOWN_OFFSET UNITYSDK_OFFSET(0xBFCF450)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEUP_OFFSET UNITYSDK_OFFSET(0xBFCF4A0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCHAPTERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCB150)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARALLBTN_OFFSET UNITYSDK_OFFSET(0xBFCAFA0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARAVATARBTN_OFFSET UNITYSDK_OFFSET(0xBFCE470)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEAREFFECTBTN_OFFSET UNITYSDK_OFFSET(0xBFCE580)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARMODELBTN_OFFSET UNITYSDK_OFFSET(0xBFCE7C0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARSTAGEBTN_OFFSET UNITYSDK_OFFSET(0xBFCE680)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMODELBTN_OFFSET UNITYSDK_OFFSET(0xBFCE2D0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTERBTN_OFFSET UNITYSDK_OFFSET(0xBFCDC50)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTEREFFECTBTN_OFFSET UNITYSDK_OFFSET(0xBFCDF90)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYERBTN_OFFSET UNITYSDK_OFFSET(0xBFCDAB0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYEREFFECTBTN_OFFSET UNITYSDK_OFFSET(0xBFCDDF0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATESTAGEBTN_OFFSET UNITYSDK_OFFSET(0xBFCE130)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONEXITBTN_OFFSET UNITYSDK_OFFSET(0xBFCAED0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELITEMDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCC100)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELTYPEDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCB930)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCB0A0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTEREFFECTDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCCD20)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0xBFCF980)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0xBFCF4F0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCB040)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYEREFFECTDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCD8C0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONRESETBTN_OFFSET UNITYSDK_OFFSET(0xBFCD910)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCREENDRAGING_OFFSET UNITYSDK_OFFSET(0xBFCE8C0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCROLL_OFFSET UNITYSDK_OFFSET(0xBFCF170)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSTAGEDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xBFCB100)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBFC8F50)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMODELITEMDROPDOWN_OFFSET UNITYSDK_OFFSET(0xBFCB990)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMONSTEREFFECTDROPDOWN_OFFSET UNITYSDK_OFFSET(0xBFCC150)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEPLAYEREFFECTDROPDOWN_OFFSET UNITYSDK_OFFSET(0xBFCCD70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATETYPEMODELDROPDOWN_OFFSET UNITYSDK_OFFSET(0xBFCB1B0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFCFAF0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBFCFB50)

namespace RPG::Client
{
	inline static constexpr unsigned int MemTestPageController_TypeDefinitionIndex = 68015;

	class MemTestPageController : public ::RPG::Client::UIController
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _PlayerEffectDropDownList; // 0x180
		::System::Collections::Generic::List_1<::System::String*>* _PlayerDropDownNameList; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _PlayerDropDownList; // 0x190
		::System::Collections::Generic::List_1<::System::String*>* _MonsterEffectDropDownNameList; // 0x198
		::System::Collections::Generic::List_1<::System::String*>* _StageDropDownNameList; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _MonsterDropDownList; // 0x1A8
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _MonsterEffectDropDownList; // 0x1B0
		::System::Collections::Generic::List_1<::System::String*>* _MonsterDropDownNameList; // 0x1B8
		::System::Collections::Generic::List_1<::System::String*>* _ModelItemDropDownNameList; // 0x1C0
		::System::Collections::Generic::List_1<::System::String*>* _ChapterDropDownNameList; // 0x1C8
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _ModelTypeDropDownList; // 0x1D0
		::System::Collections::Generic::List_1<::System::String*>* _PlayerEffectDropDownNameList; // 0x1D8
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _ModelItemDropDownList; // 0x1E0
		::System::Collections::Generic::List_1<::System::String*>* _ModelTypeDropDownNameList; // 0x1E8
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _StageDropDownList; // 0x1F0
		::System::Int32 _SelectStageDropDownIndex; // 0x1F8
		::System::Int32 _SelectModelTypeDropDownIndex; // 0x1FC
		::System::Int32 _SelectModelItemDropDownIndex; // 0x200
		::System::Int32 _SelectChapterDropDownIndex; // 0x204
		::UnityEngine::Vector3 _Offset; // 0x208
		::System::Int32 _SelectPlayerDropDownIndex; // 0x214
		::System::Boolean _IsPressMove; // 0x218
		::System::Int32 _SelectPlayerEffectDropDownIndex; // 0x21C
		::System::Single _MinimumDistanc_MinDistance; // 0x220
		::UnityEngine::Vector3 _InitLookAtPos; // 0x224
		::System::Int32 _SelectMonsterDropDownIndex; // 0x230
		::UnityEngine::Vector2 _DragBeginPosition; // 0x234
		::System::Int32 _SelectMonsterEffectDropDownIndex; // 0x23C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAllMonsterEffects(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLMONSTEREFFECTS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetMonsterEffectsOfSkillType(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETMONSTEREFFECTSOFSKILLTYPE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetCurMonsterEffects()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURMONSTEREFFECTS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAllPlayerEffects(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLPLAYEREFFECTS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetPlayerEffectsOfSkillType(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETPLAYEREFFECTSOFSKILLTYPE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetCurPlayerEffects()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURPLAYEREFFECTS_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnExitBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONEXITBTN_OFFSET))(this);
		}

		::System::Void InitPlayerDrapDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_INITPLAYERDRAPDOWN_OFFSET))(this);
		}

		::System::Void InitMonsterDrapDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_INITMONSTERDRAPDOWN_OFFSET))(this);
		}

		::System::Void _InitStageDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__INITSTAGEDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitChapterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__INITCHAPTERDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateTypeModelDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATETYPEMODELDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateModelItemDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMODELITEMDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateMonsterEffectDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMONSTEREFFECTDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdatePlayerEffectDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEPLAYEREFFECTDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONRESETBTN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayerBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYERBTN_OFFSET))(this);
		}

		::System::Void _OnCreateMonsterBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTERBTN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayerEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYEREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnCreateMonsterEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTEREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnCreateStageBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATESTAGEBTN_OFFSET))(this);
		}

		::System::Void _OnCreateModelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMODELBTN_OFFSET))(this);
		}

		::System::Void _OnClearAvatarBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARAVATARBTN_OFFSET))(this);
		}

		::System::Void _OnClearEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEAREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnClearStageBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARSTAGEBTN_OFFSET))(this);
		}

		::System::Void _OnClearModelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARMODELBTN_OFFSET))(this);
		}

		::System::Void _OnClearAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARALLBTN_OFFSET))(this);
		}

		::System::Void _OnPlayerDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYERDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnMonsterDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTERDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerEffectDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYEREFFECTDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnMonsterEffectDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTEREFFECTDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnStageDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSTAGEDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnChapterDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCHAPTERDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnModelTypeDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELTYPEDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnModelItemDropDownValueChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELITEMDROPDOWNVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnScreenDraging(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCREENDRAGING_OFFSET))(this, a1);
		}

		::System::Void _OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void _OnBtnMoveDown(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEDOWN_OFFSET))(this, a1);
		}

		::System::Void _OnBtnMoveUp(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEUP_OFFSET))(this, a1);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHIN_OFFSET))(this, a1);
		}

		::System::Void On_PinchOut(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_ON_PINCHOUT_OFFSET))(this, a1);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHEND_OFFSET))(this, a1);
		}

		::Class_2_9E8CD0C1037EB98E_2* get_View()
		{
			return ((::Class_2_9E8CD0C1037EB98E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}
	};
}
