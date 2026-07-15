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

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ADDEDINEDITOR_OFFSET UNITYSDK_OFFSET(0x168F2990)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ADD_CHANGEDPARAMS_OFFSET UNITYSDK_OFFSET(0x168E23B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CHECKREQUIRED_OFFSET UNITYSDK_OFFSET(0x168F2BE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CHOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x168DD1B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CONTEXTMENUITEMS_OFFSET UNITYSDK_OFFSET(0x168F2F70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CONTEXTMENUVALIDATE_OFFSET UNITYSDK_OFFSET(0x168F2F80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_FIRECHANGEDPARAMS_OFFSET UNITYSDK_OFFSET(0x168D6CE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x168F25D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETHELPURL_OFFSET UNITYSDK_OFFSET(0x168F2740)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENTCLASS_1_OFFSET UNITYSDK_OFFSET(0x168F29C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENTCLASS_OFFSET UNITYSDK_OFFSET(0x168F29A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GETPARENT_OFFSET UNITYSDK_OFFSET(0x168F2420)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_CCNAME_OFFSET UNITYSDK_OFFSET(0x168F24D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x168D75C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x168F2590)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x168F23A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HELPURL_OFFSET UNITYSDK_OFFSET(0x168F2710)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HIDDEN_OFFSET UNITYSDK_OFFSET(0x168F23C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_HIDEHANDLESININSPECTOR_OFFSET UNITYSDK_OFFSET(0x168F2400)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_INFO_OFFSET UNITYSDK_OFFSET(0x168F2380)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SHOWHANDLES_OFFSET UNITYSDK_OFFSET(0x168F23B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SUPPORTHANDLESSETTINGS_OFFSET UNITYSDK_OFFSET(0x168F23F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_SUPPORTHANDLES_OFFSET UNITYSDK_OFFSET(0x168F23E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_GET_WARNING_OFFSET UNITYSDK_OFFSET(0x168F2390)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_HASERROR_OFFSET UNITYSDK_OFFSET(0x168F2870)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_HASWARNING_OFFSET UNITYSDK_OFFSET(0x168F2900)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ISSINGLE_OFFSET UNITYSDK_OFFSET(0x168F2E10)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x168F2860)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_REMOVE_CHANGEDPARAMS_OFFSET UNITYSDK_OFFSET(0x168E0EF0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SETPARENT_OFFSET UNITYSDK_OFFSET(0x168F2410)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SET_CCNAME_OFFSET UNITYSDK_OFFSET(0x168F2540)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SET_HIDDEN_OFFSET UNITYSDK_OFFSET(0x168F23D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_SHOWERROR_OFFSET UNITYSDK_OFFSET(0x168F3030)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_START_OFFSET UNITYSDK_OFFSET(0x168F2850)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_TRANSACTION_OFFSET UNITYSDK_OFFSET(0x168F2ED0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_WHYDISABLED_OFFSET UNITYSDK_OFFSET(0x168F30B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x168E39E0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCc_TypeDefinitionIndex = 34435;

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
