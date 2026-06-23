#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralPackageDialogContext_DialogType.h"

class Class_0_16E4307DCC419505_201;
class Class_1_9631DA8CB6F86BD4;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x167A5FD0)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x167A5FF0)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x167A5FE0)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x167A6000)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167A6010)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPackageDialogContext_TypeDefinitionIndex = 85849;

	class UIGeneralPackageDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* _OnPurchase_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_201* _GoodsInfo_k__BackingField; // 0x30
		::MoleMole::UIGeneralPackageDialogContext_DialogType ViewType; // 0x38

		::System::Void _ctor(::Class_0_16E4307DCC419505_201* info, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* onPurchase, ::MoleMole::UIGeneralPackageDialogContext_DialogType viewType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*, ::MoleMole::UIGeneralPackageDialogContext_DialogType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT__CTOR_OFFSET))(this, info, onPurchase, viewType);
		}

		::Class_0_16E4307DCC419505_201* get_GoodsInfo()
		{
			return ((::Class_0_16E4307DCC419505_201*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_GOODSINFO_OFFSET))(this);
		}

		::System::Void set_GoodsInfo(::Class_0_16E4307DCC419505_201* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_201*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_GOODSINFO_OFFSET))(this, value);
		}

		::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* get_OnPurchase()
		{
			return ((::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET))(this);
		}

		::System::Void set_OnPurchase(::System::Action_1<::Class_1_9631DA8CB6F86BD4*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_9631DA8CB6F86BD4*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET))(this, value);
		}
	};
}
