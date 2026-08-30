#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class KibanaBaseModel; }
namespace MiHoYo::SDK { class KibanaEventModel; }
namespace MiHoYo::SDK { class KibanaNetworkModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_KIBANAREPORT_CHECKPCCONFIG_OFFSET UNITYSDK_OFFSET(0x1A61CBC0)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_1_OFFSET UNITYSDK_OFFSET(0x1A61CB40)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_OFFSET UNITYSDK_OFFSET(0x1A61CAB0)
#define MIHOYO_SDK_KIBANAREPORT_DEBUG_OFFSET UNITYSDK_OFFSET(0x1A61DE10)
#define MIHOYO_SDK_KIBANAREPORT_ERROR_OFFSET UNITYSDK_OFFSET(0x1A61E1B0)
#define MIHOYO_SDK_KIBANAREPORT_FILTERPAYINFO_OFFSET UNITYSDK_OFFSET(0x1A61FEA0)
#define MIHOYO_SDK_KIBANAREPORT_INFO_OFFSET UNITYSDK_OFFSET(0x1A61DFB0)
#define MIHOYO_SDK_KIBANAREPORT_INITKIBANAFILTER_OFFSET UNITYSDK_OFFSET(0x1A61B790)
#define MIHOYO_SDK_KIBANAREPORT_INITSUCCESSFILTER_OFFSET UNITYSDK_OFFSET(0x1A61C790)
#define MIHOYO_SDK_KIBANAREPORT_INVOKEREPORT_OFFSET UNITYSDK_OFFSET(0x1A61E2B0)
#define MIHOYO_SDK_KIBANAREPORT_ISWEBVIEWSENSITIVEDATAREPORT_OFFSET UNITYSDK_OFFSET(0x1A620540)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_1_OFFSET UNITYSDK_OFFSET(0x1A61F5F0)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_OFFSET UNITYSDK_OFFSET(0x1A61E890)
#define MIHOYO_SDK_KIBANAREPORT_REPORTCACHEDLIST_OFFSET UNITYSDK_OFFSET(0x1A61DAD0)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_1_OFFSET UNITYSDK_OFFSET(0x1A61E9A0)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_2_OFFSET UNITYSDK_OFFSET(0x1A61F680)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x1A61DF10)
#define MIHOYO_SDK_KIBANAREPORT_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0x1A61CE30)
#define MIHOYO_SDK_KIBANAREPORT_START_OFFSET UNITYSDK_OFFSET(0x1A61D790)
#define MIHOYO_SDK_KIBANAREPORT_STOP_OFFSET UNITYSDK_OFFSET(0x1A61DD20)
#define MIHOYO_SDK_KIBANAREPORT_STRINGMASK_OFFSET UNITYSDK_OFFSET(0x1A6206B0)
#define MIHOYO_SDK_KIBANAREPORT_WARNING_OFFSET UNITYSDK_OFFSET(0x1A61E0B0)
#define MIHOYO_SDK_KIBANAREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A620910)
#define MIHOYO_SDK_KIBANAREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6208D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReport_TypeDefinitionIndex = 7928;

	class KibanaReport : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x1570);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipEventNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x1578);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskUrlFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x1580);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_keyFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x1588);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathSuccessFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x1590);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskEventFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x1598);
		}
		static ::MiHoYo::SDK::KibanaReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::KibanaReport**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x15A0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskModuleFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x15A8);
		}
		// static const ::System::Int32 CACHED_MAX_COUNT = 0x14; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::KibanaBaseModel*>* reportList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT__CCTOR_OFFSET))();
		}

		::System::Void InitKibanaFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_INITKIBANAFILTER_OFFSET))(this);
		}

		::System::Void InitSuccessFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_INITSUCCESSFILTER_OFFSET))(this);
		}

		::System::Boolean CheckReportEnable(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckReportEnable_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_1_OFFSET))(this);
		}

		::System::Boolean CheckPCConfig(::MiHoYo::SDK::KibanaBaseModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::KibanaBaseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_CHECKPCCONFIG_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_STOP_OFFSET))(this);
		}

		::System::Void Debug(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_DEBUG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Info(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_INFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Warning(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_WARNING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Error(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_ERROR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InvokeReport(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_INVOKEREPORT_OFFSET))(this, a1);
		}

		::System::Void ReportCachedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORTCACHEDLIST_OFFSET))(this);
		}

		::System::Void Report(::MiHoYo::SDK::KibanaBaseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaBaseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORT_OFFSET))(this, a1);
		}

		::System::Void Report_1(::UnityEngine::Networking::UnityWebRequest* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORT_1_OFFSET))(this, a1, a2);
		}

		::System::Void Report_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::String* a5, ::System::String* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORT_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetBaseInfo(::MiHoYo::SDK::KibanaBaseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaBaseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_SETBASEINFO_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::JSONNode* FilterPayInfo(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_FILTERPAYINFO_OFFSET))(a1);
		}

		::System::Boolean IsWebViewSensitiveDataReport(::MiHoYo::SDK::KibanaEventModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::KibanaEventModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_ISWEBVIEWSENSITIVEDATAREPORT_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::KibanaEventModel* ReplaceSensitiveData(::MiHoYo::SDK::KibanaEventModel* a1)
		{
			return ((::MiHoYo::SDK::KibanaEventModel*(*)(::PVOID, ::MiHoYo::SDK::KibanaEventModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::KibanaNetworkModel* ReplaceSensitiveData_1(::MiHoYo::SDK::KibanaNetworkModel* a1)
		{
			return ((::MiHoYo::SDK::KibanaNetworkModel*(*)(::PVOID, ::MiHoYo::SDK::KibanaNetworkModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_1_OFFSET))(this, a1);
		}

		::System::String* StringMask(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_STRINGMASK_OFFSET))(this, a1);
		}
	};
}
