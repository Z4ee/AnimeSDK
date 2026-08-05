#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralPurchaseDialogContext_CurrencyType.h"
#include "unitysdk/MoleMole/UIGeneralPurchaseDialogContext_DialogType.h"

class Class_0_16E4307DCC419505_179;
class Class_1_9631DA8CB6F86BD4;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_CUSTOMDETAILACTION_OFFSET UNITYSDK_OFFSET(0x17D9E9B0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x17D9E9D0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x17D9E990)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_CUSTOMDETAILACTION_OFFSET UNITYSDK_OFFSET(0x17D9E9C0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x17D9E9E0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x17D9E9A0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9E9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchaseDialogContext_TypeDefinitionIndex = 65148;

	class UIGeneralPurchaseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* _CustomDetailAction_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_179* _GoodsInfo_k__BackingField; // 0x30
		::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* _OnPurchase_k__BackingField; // 0x38
		::System::Boolean hideDesc2; // 0x40
		::MoleMole::UIGeneralPurchaseDialogContext_DialogType ViewType; // 0x44
		::MoleMole::UIGeneralPurchaseDialogContext_CurrencyType type; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_179* info, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* onPurchase, ::MoleMole::UIGeneralPurchaseDialogContext_DialogType type)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_179*, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*, ::MoleMole::UIGeneralPurchaseDialogContext_DialogType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT__CTOR_OFFSET))(this, info, onPurchase, type);
		}

		::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* get_OnPurchase()
		{
			return ((::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET))(this);
		}

		::System::Void set_OnPurchase(::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET))(this, value);
		}

		::System::Action_1<::System::Int32>* get_CustomDetailAction()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_CUSTOMDETAILACTION_OFFSET))(this);
		}

		::System::Void set_CustomDetailAction(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_CUSTOMDETAILACTION_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_179* get_GoodsInfo()
		{
			return ((::Class_0_16E4307DCC419505_179*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_GOODSINFO_OFFSET))(this);
		}

		::System::Void set_GoodsInfo(::Class_0_16E4307DCC419505_179* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_179*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_GOODSINFO_OFFSET))(this, value);
		}
	};
}
