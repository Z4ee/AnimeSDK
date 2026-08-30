#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BansheeGz::BGSpline::Curve { class BGCc_CcDescriptor; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace System { class Action; }
namespace System { class EventHandler; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class HelpURLAttribute; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ADDEDINEDITOR_OFFSET UNITYSDK_OFFSET(0x1BFF1AB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ADD_CHANGEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1BFE14C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CHECKREQUIRED_OFFSET UNITYSDK_OFFSET(0x1BFF1D00)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CHOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BFDC3A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CONTEXTMENUITEMS_OFFSET UNITYSDK_OFFSET(0x1BFF20A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CONTEXTMENUVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BFF20B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_FIRECHANGEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1BFD5ED0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BFF16E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETHELPURL_OFFSET UNITYSDK_OFFSET(0x1BFF1850)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENTCLASS_1_OFFSET UNITYSDK_OFFSET(0x1BFF1AE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENTCLASS_OFFSET UNITYSDK_OFFSET(0x1BFF1AC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENT_OFFSET UNITYSDK_OFFSET(0x1BFF1530)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_CCNAME_OFFSET UNITYSDK_OFFSET(0x1BFF15E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x1BFD67B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BFF16A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1BFF14B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HELPURL_OFFSET UNITYSDK_OFFSET(0x1BFF1820)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HIDDEN_OFFSET UNITYSDK_OFFSET(0x1BFF14D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HIDEHANDLESININSPECTOR_OFFSET UNITYSDK_OFFSET(0x1BFF1510)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1BFF1490)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SHOWHANDLES_OFFSET UNITYSDK_OFFSET(0x1BFF14C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x1BFF1500)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x1BFF14F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x1BFF14A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_HASERROR_OFFSET UNITYSDK_OFFSET(0x1BFF1990)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_HASWARNING_OFFSET UNITYSDK_OFFSET(0x1BFF1A20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ISSINGLE_OFFSET UNITYSDK_OFFSET(0x1BFF1F30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BFF1980)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_REMOVE_CHANGEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1BFE00E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1BFF1520)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SET_CCNAME_OFFSET UNITYSDK_OFFSET(0x1BFF1650)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SET_HIDDEN_OFFSET UNITYSDK_OFFSET(0x1BFF14E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SHOWERROR_OFFSET UNITYSDK_OFFSET(0x1BFF2160)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_START_OFFSET UNITYSDK_OFFSET(0x1BFF1970)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_TRANSACTION_OFFSET UNITYSDK_OFFSET(0x1BFF2000)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_WHYDISABLED_OFFSET UNITYSDK_OFFSET(0x1BFF21E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE2AF0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCc_TypeDefinitionIndex = 35295;

	class BGCc : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::EventHandler* ChangedParams; // 0x18
		::System::Boolean showHandles; // 0x20
		::System::Boolean hidden; // 0x21
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x28
		::BansheeGz::BGSpline::Curve::BGCc* parent; // 0x30
		::System::String* ccName; // 0x38
		::System::Int32 transactionLevel; // 0x40
		::BansheeGz::BGSpline::Curve::BGCc_CcDescriptor* descriptor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC__CTOR_OFFSET))(this);
		}

		::System::Void add_ChangedParams(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_ADD_CHANGEDPARAMS_OFFSET))(this, a1);
		}

		::System::Void remove_ChangedParams(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_REMOVE_CHANGEDPARAMS_OFFSET))(this, a1);
		}

		::System::String* get_Info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_INFO_OFFSET))(this);
		}

		::System::String* get_Warning()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_WARNING_OFFSET))(this);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_ERROR_OFFSET))(this);
		}

		::System::Boolean get_ShowHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SHOWHANDLES_OFFSET))(this);
		}

		::System::Boolean get_Hidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HIDDEN_OFFSET))(this);
		}

		::System::Void set_Hidden(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_SET_HIDDEN_OFFSET))(this, a1);
		}

		::System::Boolean get_SupportHandles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SUPPORTHANDLES_OFFSET))(this);
		}

		::System::Boolean get_SupportHandlesSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SUPPORTHANDLESSETTINGS_OFFSET))(this);
		}

		::System::Boolean get_HideHandlesInInspector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HIDEHANDLESININSPECTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurve* get_Curve()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_CURVE_OFFSET))(this);
		}

		::System::Void SetParent(::BansheeGz::BGSpline::Curve::BGCc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCc*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_SETPARENT_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCc* GetParent(::System::Type* a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCc*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENT_OFFSET))(this, a1);
		}

		::System::String* get_CcName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_CCNAME_OFFSET))(this);
		}

		::System::Void set_CcName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_SET_CCNAME_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCc_CcDescriptor* get_Descriptor()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCc_CcDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::String* get_HelpURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HELPURL_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean HasError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_HASERROR_OFFSET))(this);
		}

		::System::Boolean HasWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_HASWARNING_OFFSET))(this);
		}

		::System::String* ChoseMessage(::System::String* a1, ::System::Func_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CHOSEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void FireChangedParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_FIRECHANGEDPARAMS_OFFSET))(this);
		}

		::System::Void AddedInEditor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_ADDEDINEDITOR_OFFSET))(this);
		}

		::System::Type* GetParentClass()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENTCLASS_OFFSET))(this);
		}

		static ::System::Type* GetParentClass_1(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENTCLASS_1_OFFSET))(a1);
		}

		static ::System::Void CheckRequired(::System::Type* a1, ::System::Collections::Generic::List_1<::System::Type*>* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CHECKREQUIRED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSingle(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_ISSINGLE_OFFSET))(a1);
		}

		::System::Void Transaction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_TRANSACTION_OFFSET))(this, a1);
		}

		static ::BansheeGz::BGSpline::Curve::BGCc_CcDescriptor* GetDescriptor(::System::Type* a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCc_CcDescriptor*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETDESCRIPTOR_OFFSET))(a1);
		}

		static ::UnityEngine::HelpURLAttribute* GetHelpUrl(::System::Type* a1)
		{
			return ((::UnityEngine::HelpURLAttribute*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETHELPURL_OFFSET))(a1);
		}

		::System::Boolean ContextMenuItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CONTEXTMENUITEMS_OFFSET))(this);
		}

		::System::Void ContextMenuValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CONTEXTMENUVALIDATE_OFFSET))(this);
		}

		::System::Void WhyDisabled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_WHYDISABLED_OFFSET))(this);
		}

		static ::System::Void ShowError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_SHOWERROR_OFFSET))(a1);
		}
	};
}
