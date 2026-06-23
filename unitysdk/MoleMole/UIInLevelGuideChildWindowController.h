#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_5D14E331734C3C6B.h"
#include "unitysdk/Enum_3_AA439AE9E76594AE.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CAC0F23A7272040;
class Class_2_AD95BFF991861DE3;
namespace MoleMole { class ItemStyle; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelGuideChildWindowController_RemovingArrow; }
namespace MoleMole { class UIInLevelGuideItemChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_1_OFFSET UNITYSDK_OFFSET(0x16BE7FF0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_OFFSET UNITYSDK_OFFSET(0x16BE6A90)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CALCULATEGUIDEITEMSHOW_OFFSET UNITYSDK_OFFSET(0x16BE91D0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CHECKENABLE_OFFSET UNITYSDK_OFFSET(0x16BE9ED0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTALL_OFFSET UNITYSDK_OFFSET(0x16BE48C0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTARROWITEM_OFFSET UNITYSDK_OFFSET(0x16BE5550)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDENTITYLOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x16BEA5E0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDTARGETPOINTITEM_OFFSET UNITYSDK_OFFSET(0x16BE5AA0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETARROWITEM_OFFSET UNITYSDK_OFFSET(0x16BE7C20)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETENTITYHEIGHT_OFFSET UNITYSDK_OFFSET(0x16BECEC0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETGUIDEITEM_OFFSET UNITYSDK_OFFSET(0x16BE3C80)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETITEMSTYLE_OFFSET UNITYSDK_OFFSET(0x16BECB70)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x16BEB460)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16BE36C0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GUIDEUIFOCUSTARGET_OFFSET UNITYSDK_OFFSET(0x16BE8290)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_HANDLEUSERDATA_OFFSET UNITYSDK_OFFSET(0x16BE65E0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITTWEENPARAM_OFFSET UNITYSDK_OFFSET(0x16BECD90)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITWEIGHTANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x16BE4130)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ISENTITYALIVE_OFFSET UNITYSDK_OFFSET(0x16BEAE80)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16BE95F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BE36D0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16BE41F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONREGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x16BE3A10)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16BE41A0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x16BE3AB0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BE4250)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BE3760)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BE3990)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_POPARROWITEM_OFFSET UNITYSDK_OFFSET(0x16BEC420)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_PRECHECKCAMERA_OFFSET UNITYSDK_OFFSET(0x16BE9F50)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_1_OFFSET UNITYSDK_OFFSET(0x16BEBEA0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_OFFSET UNITYSDK_OFFSET(0x16BEB850)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_1_OFFSET UNITYSDK_OFFSET(0x16BEB5E0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_OFFSET UNITYSDK_OFFSET(0x16BEB230)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETENTITYITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0x16BECFC0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETPOSITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0x16BED1C0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0x16BE3E80)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGETPOINTINLISTVISIBLE_OFFSET UNITYSDK_OFFSET(0x16BE58A0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_1_OFFSET UNITYSDK_OFFSET(0x16BE7D00)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x16BE66F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWENABLE_OFFSET UNITYSDK_OFFSET(0x16BE3930)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWVISABLE_OFFSET UNITYSDK_OFFSET(0x16BE6630)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x16BE40A0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x16BE6450)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETPOINT_OFFSET UNITYSDK_OFFSET(0x16BE5020)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALL_OFFSET UNITYSDK_OFFSET(0x16BE4830)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x16BE6300)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_1_OFFSET UNITYSDK_OFFSET(0x16BE5DC0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_OFFSET UNITYSDK_OFFSET(0x16BE5D10)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKENTITY_OFFSET UNITYSDK_OFFSET(0x16BE8740)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKFADEENTITYARROW_OFFSET UNITYSDK_OFFSET(0x16BEAC30)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKSTEP_OFFSET UNITYSDK_OFFSET(0x16BE6D40)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x16BEA980)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TRYPLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x16BE4460)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_UPDATETARGETPOS_OFFSET UNITYSDK_OFFSET(0x16BECE10)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARMUP_OFFSET UNITYSDK_OFFSET(0x16BED3C0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x16BE8F70)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGET_OFFSET UNITYSDK_OFFSET(0x16BE8CD0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BED790)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__WARMUP_G___WARMUPW_79_0_OFFSET UNITYSDK_OFFSET(0x16BED6A0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BEDB10)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16BEDBA0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16BEDC30)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BEDC40)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BEDC50)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BEDC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideChildWindowController_TypeDefinitionIndex = 59270;

	class UIInLevelGuideChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* DefaultStyleName; // 0x0
		::Class_2_AD95BFF991861DE3* _view; // 0x318
		::System::Boolean enableState; // 0x320
		::System::Single tickDelta; // 0x324
		::UnityEngine::Transform* mainCameraTran; // 0x328
		::UnityEngine::Camera* mainCameraRef; // 0x330
		::UnityEngine::RectTransform* rootTran; // 0x338
		::System::Single screenWidth; // 0x340
		::System::Single screenHeight; // 0x344
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelGuideItemChildWindowController*>* arrowItemPool; // 0x348
		::System::Collections::Generic::List_1<::System::UInt32>* entityList; // 0x350
		::System::Collections::Generic::List_1<::System::Int32>* targetPosList; // 0x358
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* targetPosDic; // 0x360
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::UnityEngine::Vector3>*>* targetGetPosDic; // 0x368
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelGuideItemChildWindowController*>* entityArrowDic; // 0x370
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIInLevelGuideItemChildWindowController*>* targetPosArrowDic; // 0x378
		::System::Collections::Generic::HashSet_1<::System::UInt32>* tempEntityRemoveList; // 0x380
		::System::Collections::Generic::HashSet_1<::System::Int32>* tempRemoveList; // 0x388
		::System::Int32 seed; // 0x390
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelGuideChildWindowController_RemovingArrow*>* removeingArrow; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnRegisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONREGISTEREVENTS_OFFSET))(this);
		}

		::System::Void OnStatusChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSTATUSCHANGE_OFFSET))(this, args);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TryPlayFadein()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TRYPLAYFADEIN_OFFSET))(this);
		}

		::System::Void StopAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALL_OFFSET))(this);
		}

		::System::Void StopAllTargetPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETPOINT_OFFSET))(this);
		}

		::System::Void SetTargetPointInListVisible(::System::Collections::Generic::List_1<::System::String*>* nameList, ::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGETPOINTINLISTVISIBLE_OFFSET))(this, nameList, isVisible);
		}

		::System::Void StopTargetPoint(::System::Collections::Generic::List_1<::System::String*>* nameList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_OFFSET))(this, nameList);
		}

		::System::Void StopTargetPoint_1(::System::String* anchorName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_1_OFFSET))(this, anchorName);
		}

		::System::Void StopTargetEntity(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETENTITY_OFFSET))(this, entityId);
		}

		::System::Void StopAllTargetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETENTITY_OFFSET))(this);
		}

		::System::Void HandleUserData(::System::Object* userData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_HANDLEUSERDATA_OFFSET))(this, userData);
		}

		::System::Void SetViewEnable(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWENABLE_OFFSET))(this, state);
		}

		::System::Void SetViewVisable(::System::Boolean visable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWVISABLE_OFFSET))(this, visable);
		}

		::System::Int32 SetTarget(::UnityEngine::Vector3 pos, ::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::String* anchorName, ::System::Func_1<::UnityEngine::Vector3>* getPosFunc, ::System::Boolean visible)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::String*, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_OFFSET))(this, pos, style, param, anchorName, getPosFunc, visible);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* GetArrowItem(::System::UInt32 entityID)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETARROWITEM_OFFSET))(this, entityID);
		}

		::System::UInt32 SetTarget_1(::MoleMole::Battle::Entity* entity, ::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::Boolean visible)
		{
			return ((::System::UInt32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_1_OFFSET))(this, entity, style, param, visible);
		}

		::System::Void GuideUIFocusTarget(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GUIDEUIFOCUSTARGET_OFFSET))(this, entityID);
		}

		::System::Void WarnningTarget(::System::Int32 index, ::System::Boolean warnning)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGET_OFFSET))(this, index, warnning);
		}

		::System::Void WarnningTargetEntity(::System::UInt32 id, ::System::Boolean warnning, ::Enum_3_5D14E331734C3C6B speedType, ::Enum_3_AA439AE9E76594AE warningType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::Enum_3_5D14E331734C3C6B, ::Enum_3_AA439AE9E76594AE))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGETENTITY_OFFSET))(this, id, warnning, speedType, warningType);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* SetItemVisible(::System::String* tagStr, ::System::Boolean show)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETITEMVISIBLE_OFFSET))(this, tagStr, show);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* GetGuideItem(::System::String* tagStr)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETGUIDEITEM_OFFSET))(this, tagStr);
		}

		::System::Boolean CalculateGuideItemShow(::System::String* tagStr, ::System::Boolean defaultValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CALCULATEGUIDEITEMSHOW_OFFSET))(this, tagStr, defaultValue);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean CheckEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CHECKENABLE_OFFSET))(this);
		}

		::System::Void InitWeightAndHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITWEIGHTANDHEIGHT_OFFSET))(this);
		}

		::System::Void PreCheckCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_PRECHECKCAMERA_OFFSET))(this);
		}

		::System::Void TickEntity(::MoleMole::Battle::Entity* ent, ::UnityEngine::Vector3 avatarPos, ::UnityEngine::Vector3 forward, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKENTITY_OFFSET))(this, ent, avatarPos, forward, item);
		}

		::System::Void TickTargetPosition(::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 avatarPos, ::UnityEngine::Vector3 forward, ::MoleMole::UIInLevelGuideItemChildWindowController* item, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKTARGETPOSITION_OFFSET))(this, targetPos, avatarPos, forward, item, index);
		}

		::System::Void TickFadeEntityArrow(::System::UInt32 entityId, ::UnityEngine::Vector3 forward, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKFADEENTITYARROW_OFFSET))(this, entityId, forward, item);
		}

		::System::Void TickStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKSTEP_OFFSET))(this);
		}

		::System::Void ReturnItem(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_OFFSET))(this, entityId);
		}

		::System::Void ReturnItem_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_1_OFFSET))(this, index);
		}

		::System::Void CollectArrowItem(::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTARROWITEM_OFFSET))(this, item);
		}

		::System::Void CollectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTALL_OFFSET))(this);
		}

		::System::Void RefreshArrowItem(::MoleMole::Battle::Entity* ent, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_OFFSET))(this, ent, item);
		}

		::System::Void RefreshArrowItem_1(::UnityEngine::Vector3 pos, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_1_OFFSET))(this, pos, item);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* PopArrowItem(::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::Boolean visible)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_POPARROWITEM_OFFSET))(this, style, param, visible);
		}

		::MoleMole::ItemStyle* GetItemStyle(::System::String* style)
		{
			return ((::MoleMole::ItemStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETITEMSTYLE_OFFSET))(this, style);
		}

		::System::Void AddArrowItem(::System::String* style, ::System::Int32 index, ::Class_1_1CAC0F23A7272040* param, ::System::String* anchorName, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_1_1CAC0F23A7272040*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_OFFSET))(this, style, index, param, anchorName, visible);
		}

		::UnityEngine::Vector3 GetTargetPos(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETTARGETPOS_OFFSET))(this, index);
		}

		::System::Boolean UpdateTargetPos(::System::Int32 index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_UPDATETARGETPOS_OFFSET))(this, index, pos);
		}

		::UnityEngine::Transform* FindEntityLockTransform(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDENTITYLOCKTRANSFORM_OFFSET))(this, entity);
		}

		::System::Void InitTweenParam(::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITTWEENPARAM_OFFSET))(this, item);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* AddArrowItem_1(::MoleMole::Battle::Entity* ent, ::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::Boolean visible)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_1_OFFSET))(this, ent, style, param, visible);
		}

		::System::Boolean IsEntityAlive(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ISENTITYALIVE_OFFSET))(this, ent);
		}

		::System::Single GetEntityHeight(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETENTITYHEIGHT_OFFSET))(this, ent);
		}

		::System::Int32 FindTargetPointItem(::System::String* anchorName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDTARGETPOINTITEM_OFFSET))(this, anchorName);
		}

		::System::Void SetAllTargetEntityItemVisible(::System::Boolean visibleState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETENTITYITEMVISIBLE_OFFSET))(this, visibleState);
		}

		::System::Void SetAllTargetPosItemVisible(::System::Boolean visibleState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETPOSITEMVISIBLE_OFFSET))(this, visibleState);
		}

		::System::Void Warmup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARMUP_OFFSET))(this);
		}

		::System::Void _Warmup_g___WarmupW_79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__WARMUP_G___WARMUPW_79_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
