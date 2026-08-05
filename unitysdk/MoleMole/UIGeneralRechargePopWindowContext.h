#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6AA90A85470ABD89_Enum_3_9DBB95DFCD4947FD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_477;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x195FE5E0)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x195FE620)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x195FE600)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x195FE640)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x195FE5F0)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x195FE630)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPEID_OFFSET UNITYSDK_OFFSET(0x195FE610)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPETEMPLATE_OFFSET UNITYSDK_OFFSET(0x195FE650)
#define MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x195FE660)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRechargePopWindowContext_TypeDefinitionIndex = 74094;

	class UIGeneralRechargePopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_477* _toRechargeTypeTemplate_k__BackingField; // 0x28
		::Class_2_208CC9941471731A_477* _fromRechargeTypeTemplate_k__BackingField; // 0x30
		::System::Action_1<::System::UInt32>* OnNotEnoughCallback; // 0x38
		::Class_1_6AA90A85470ABD89_Enum_3_9DBB95DFCD4947FD reason; // 0x40
		::System::Int32 _fromRechargeTypeID_k__BackingField; // 0x44
		::System::Int32 _toRechargeTypeID_k__BackingField; // 0x48
		::System::UInt32 toRechargeItemCount; // 0x4C

		::System::Void _ctor(::System::Int32 rechargeToItemID, ::Class_1_6AA90A85470ABD89_Enum_3_9DBB95DFCD4947FD openReason, ::System::UInt32 rechargeToItemCount, ::System::Action_1<::System::UInt32>* OnNotEnoughCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_6AA90A85470ABD89_Enum_3_9DBB95DFCD4947FD, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT__CTOR_OFFSET))(this, rechargeToItemID, openReason, rechargeToItemCount, OnNotEnoughCB);
		}

		::System::Int32 get_fromRechargeTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPEID_OFFSET))(this);
		}

		::System::Void set_fromRechargeTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPEID_OFFSET))(this, value);
		}

		::System::Int32 get_toRechargeTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPEID_OFFSET))(this);
		}

		::System::Void set_toRechargeTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPEID_OFFSET))(this, value);
		}

		::Class_2_208CC9941471731A_477* get_fromRechargeTypeTemplate()
		{
			return ((::Class_2_208CC9941471731A_477*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_FROMRECHARGETYPETEMPLATE_OFFSET))(this);
		}

		::System::Void set_fromRechargeTypeTemplate(::Class_2_208CC9941471731A_477* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_FROMRECHARGETYPETEMPLATE_OFFSET))(this, value);
		}

		::Class_2_208CC9941471731A_477* get_toRechargeTypeTemplate()
		{
			return ((::Class_2_208CC9941471731A_477*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_GET_TORECHARGETYPETEMPLATE_OFFSET))(this);
		}

		::System::Void set_toRechargeTypeTemplate(::Class_2_208CC9941471731A_477* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALRECHARGEPOPWINDOWCONTEXT_SET_TORECHARGETYPETEMPLATE_OFFSET))(this, value);
		}
	};
}
