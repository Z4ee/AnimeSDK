#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIItemOptionWidgetControllerBase.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_0E5778BB52E10271;
class Class_2_44CAFB3A09178D38_1;
class Class_2_9A2734A1BC17687A;
class Class_2_E621E51D351EB960_1;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_GETDESC_OFFSET UNITYSDK_OFFSET(0x13EF99E0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_INITINFO_OFFSET UNITYSDK_OFFSET(0x13EFA2B0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONCARDDESCBRIEFSWITCH_OFFSET UNITYSDK_OFFSET(0x13EFA450)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13EFA4D0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13EF7F00)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13EF8020)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHCARDNUM_OFFSET UNITYSDK_OFFSET(0x13EF8960)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHITEMCONTENT_OFFSET UNITYSDK_OFFSET(0x13EFA010)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0x13EF9EC0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPDETAIL_OFFSET UNITYSDK_OFFSET(0x13EF9210)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSBG_OFFSET UNITYSDK_OFFSET(0x13EF81E0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSVIEW_OFFSET UNITYSDK_OFFSET(0x13EF8130)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_SETDESCSTATE_OFFSET UNITYSDK_OFFSET(0x13EF91B0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFA540)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONCARDDESCBRIEFSWITCH_OFFSET UNITYSDK_OFFSET(0x13EFA560)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13EFA5F0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13EFA600)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13EFA610)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsSubWidgetController_TypeDefinitionIndex = 63698;

	class UIAreaGoodsSubWidgetController : public ::MoleMole::UIItemOptionWidgetControllerBase
	{
	public:
		::System::Int32 m_goodsID; // 0x300
		::System::String* curBGPrefabPath; // 0x308
		::System::Boolean isInfoChanging; // 0x310
		::System::Boolean infoState; // 0x311
		::Share::EItemType m_itemType; // 0x312
		::System::Int32 m_itemID; // 0x314
		::System::Boolean m_isBrief; // 0x318
		::Class_2_E621E51D351EB960_1* abyssModel; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshShopGoodsView(::System::Int32 shopGoodsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSVIEW_OFFSET))(this, shopGoodsID);
		}

		::System::Void RefreshShopGoodsBG(::System::Int32 shopGoodsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSBG_OFFSET))(this, shopGoodsID);
		}

		::System::Void RefreshCardNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHCARDNUM_OFFSET))(this);
		}

		::System::Void SetDescState(::System::Boolean isBrief)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_SETDESCSTATE_OFFSET))(this, isBrief);
		}

		::System::String* GetDesc(::System::Boolean isBrief)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_GETDESC_OFFSET))(this, isBrief);
		}

		::System::Void RefreshShopDetail(::System::Int32 shopGoodsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPDETAIL_OFFSET))(this, shopGoodsID);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void RefreshItemContent(::Class_1_0E5778BB52E10271* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E5778BB52E10271*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHITEMCONTENT_OFFSET))(this, data);
		}

		::System::Void OnCardDescBriefSwitch(::System::Boolean brief)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONCARDDESCBRIEFSWITCH_OFFSET))(this, brief);
		}

		::System::Int32 InitInfo(::Class_2_44CAFB3A09178D38_1* goodData, ::Class_2_9A2734A1BC17687A* Model)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_44CAFB3A09178D38_1*, ::Class_2_9A2734A1BC17687A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_INITINFO_OFFSET))(this, goodData, Model);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCardDescBriefSwitch(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONCARDDESCBRIEFSWITCH_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
