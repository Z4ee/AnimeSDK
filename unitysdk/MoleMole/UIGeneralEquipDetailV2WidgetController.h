#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_768CE7271445A601;
class Class_1_F0F4C9318CC412F9;
class Class_2_1CC0E2699D5FB1A6_11;
class Class_2_3B1E761D184CCDAF;
class Class_2_F7CAAD54879BD084;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x19EE9960)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_INITEQUIPSTAR_OFFSET UNITYSDK_OFFSET(0x19EE8DF0)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_INITPROPERTYVIEW_OFFSET UNITYSDK_OFFSET(0x19EE89A0)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19EE7E30)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19EE8170)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONEQUIPCHANGED_OFFSET UNITYSDK_OFFSET(0x19EE9A40)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19EE8070)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19EE8200)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19EE7DC0)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19EE8000)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19EE8560)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETEQUIPINFO_OFFSET UNITYSDK_OFFSET(0x19EE9D50)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x19EE8310)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETITEMINFO_OFFSET UNITYSDK_OFFSET(0x19EEC780)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETROLEICON_OFFSET UNITYSDK_OFFSET(0x19EE9B30)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x19EE9740)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETTITLETEXTSTATE_OFFSET UNITYSDK_OFFSET(0x19EE87A0)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETWEAPONINFO_OFFSET UNITYSDK_OFFSET(0x19EEAF90)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EECA60)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19EECAC0)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19EECB50)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19EECBF0)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19EECC80)
#define MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19EECD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralEquipDetailV2WidgetController_TypeDefinitionIndex = 69880;

	class UIGeneralEquipDetailV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_BASE_PROP_COUNT = 0x1; // 0x0
		// static const ::System::Int32 MAX_EQUIP_STAR_COUNT = 0x5; // 0x0
		::Class_2_1CC0E2699D5FB1A6_11* _view; // 0x2C0
		::System::Boolean IsHideAvatarIcon; // 0x2C8
		::System::Boolean _firstTimeShow; // 0x2C9
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x2D0
		::System::Collections::Generic::List_1<::Class_1_F0F4C9318CC412F9*>* _equipStarList; // 0x2D8
		::System::Collections::Generic::List_1<::Class_1_768CE7271445A601*>* _basePropertyItems; // 0x2E0
		::System::Collections::Generic::List_1<::Class_1_768CE7271445A601*>* _randomPropertyItems; // 0x2E8
		::MoleMole::UIGeneralIconCardRarityWidgetController* _cardRarityWidget; // 0x2F0
		::Class_2_FDFE69FE7B72463B* _controlAnimation; // 0x2F8
		::System::Boolean _isFriendPreviewMode; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetItemData(::Class_1_0D6706375CDAAE8C* itemData, ::System::Boolean canLock, ::System::Boolean force, ::Class_1_0D6706375CDAAE8C* currentSelectItemData, ::System::UInt32 currentAvatarId, ::System::Boolean isFriendPreviewMode, ::System::Boolean isShowStatusGroup)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Boolean, ::System::Boolean, ::Class_1_0D6706375CDAAE8C*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETITEMDATA_OFFSET))(this, itemData, canLock, force, currentSelectItemData, currentAvatarId, isFriendPreviewMode, isShowStatusGroup);
		}

		::System::Void SetTitleTextState(::System::String* key1, ::System::String* key2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETTITLETEXTSTATE_OFFSET))(this, key1, key2);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitPropertyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_INITPROPERTYVIEW_OFFSET))(this);
		}

		::System::Void InitEquipStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_INITEQUIPSTAR_OFFSET))(this);
		}

		::System::Void SetStar(::System::UInt32 curStar, ::System::Int32 maxStar, ::System::Boolean hideStar)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETSTAR_OFFSET))(this, curStar, maxStar, hideStar);
		}

		::System::UInt32 GetMaxLevel(::System::Int32 itemID, ::System::Int32 star, ::System::Int32 starAmend)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_GETMAXLEVEL_OFFSET))(this, itemID, star, starAmend);
		}

		::System::Void OnEquipChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_ONEQUIPCHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshView(::Class_1_0D6706375CDAAE8C* currentSelectItemData, ::System::UInt32 currentAvatarId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, currentSelectItemData, currentAvatarId);
		}

		::System::Void SetRoleIcon(::System::UInt32 avatarUID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETROLEICON_OFFSET))(this, avatarUID);
		}

		::System::Void SetEquipInfo(::Class_2_3B1E761D184CCDAF* equipmentData, ::Class_1_0D6706375CDAAE8C* currentSelectItemData, ::System::UInt32 currentAvatarId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*, ::Class_1_0D6706375CDAAE8C*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETEQUIPINFO_OFFSET))(this, equipmentData, currentSelectItemData, currentAvatarId);
		}

		::System::Void SetWeaponInfo(::Class_2_F7CAAD54879BD084* weaponData, ::System::UInt32 currentAvatarId, ::System::Int32 weaponID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F7CAAD54879BD084*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETWEAPONINFO_OFFSET))(this, weaponData, currentAvatarId, weaponID);
		}

		::System::Void SetItemInfo(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER_SETITEMINFO_OFFSET))(this, itemData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEQUIPDETAILV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
