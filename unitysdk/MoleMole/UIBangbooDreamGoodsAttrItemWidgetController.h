#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_DCAC1CE478D28EC0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158BAAD0)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158BAB60)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158BAA00)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158BAA60)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x158BB150)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x158BABE0)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x158BADB0)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETLEFTRIGHTDESC_OFFSET UNITYSDK_OFFSET(0x158BAF60)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETNAME_OFFSET UNITYSDK_OFFSET(0x158BAEB0)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETNEW_OFFSET UNITYSDK_OFFSET(0x158BAE40)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x158BB040)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETUPARROW_OFFSET UNITYSDK_OFFSET(0x158BB0E0)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158BB290)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x158BB2F0)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x158BB380)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x158BB410)
#define MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x158BB4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamGoodsAttrItemWidgetController_TypeDefinitionIndex = 47994;

	class UIBangbooDreamGoodsAttrItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DCAC1CE478D28EC0* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* nameStr, ::System::String* left, ::System::String* right, ::System::Boolean isUp, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, nameStr, left, right, isUp, isNew);
		}

		::System::Void RefreshView_1(::System::String* nameStr, ::System::String* simpleDesc, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, nameStr, simpleDesc, isNew);
		}

		::System::Void SetEmpty(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, active);
		}

		::System::Void SetName(::System::Boolean active, ::System::String* nameStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETNAME_OFFSET))(this, active, nameStr);
		}

		::System::Void SetLeftRightDesc(::System::Boolean active, ::System::String* left, ::System::String* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETLEFTRIGHTDESC_OFFSET))(this, active, left, right);
		}

		::System::Void SetUpArrow(::System::Boolean isUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETUPARROW_OFFSET))(this, isUp);
		}

		::System::Void SetSimpleDesc(::System::Boolean active, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETSIMPLEDESC_OFFSET))(this, active, desc);
		}

		::System::Void SetNew(::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER_SETNEW_OFFSET))(this, isNew);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMGOODSATTRITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
