#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIItemOptionWidgetControllerBase.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_0E5778BB52E10271;
class Class_2_44CAFB3A09178D38_2;
class Class_2_9A2734A1BC17687A;
class Class_2_AB2EF02AB0EB9012_1;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_GETDESC_OFFSET UNITYSDK_OFFSET(0x18954310)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_INITINFO_OFFSET UNITYSDK_OFFSET(0x18954BE0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONCARDDESCBRIEFSWITCH_OFFSET UNITYSDK_OFFSET(0x18954D80)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18954E00)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189527E0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18952900)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHCARDNUM_OFFSET UNITYSDK_OFFSET(0x18953280)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHITEMCONTENT_OFFSET UNITYSDK_OFFSET(0x18954940)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0x189547F0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPDETAIL_OFFSET UNITYSDK_OFFSET(0x18953B40)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSBG_OFFSET UNITYSDK_OFFSET(0x18952AC0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_REFRESHSHOPGOODSVIEW_OFFSET UNITYSDK_OFFSET(0x18952A10)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_SETDESCSTATE_OFFSET UNITYSDK_OFFSET(0x18953AE0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18954E70)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONCARDDESCBRIEFSWITCH_OFFSET UNITYSDK_OFFSET(0x18954E90)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18954F20)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18954F30)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18954F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsSubWidgetController_TypeDefinitionIndex = 80881;

	class UIAreaGoodsSubWidgetController : public ::MoleMole::UIItemOptionWidgetControllerBase
	{
	public:
		::System::Int32 m_goodsID; // 0x308
		::System::String* curBGPrefabPath; // 0x310
		::System::Boolean isInfoChanging; // 0x318
		::System::Boolean infoState; // 0x319
		::Share::EItemType m_itemType; // 0x31A
		::System::Int32 m_itemID; // 0x31C
		::System::Boolean m_isBrief; // 0x320
		::Class_2_AB2EF02AB0EB9012_1* abyssModel; // 0x328

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

		::System::Int32 InitInfo(::Class_2_44CAFB3A09178D38_2* goodData, ::Class_2_9A2734A1BC17687A* Model)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_44CAFB3A09178D38_2*, ::Class_2_9A2734A1BC17687A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER_INITINFO_OFFSET))(this, goodData, Model);
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
