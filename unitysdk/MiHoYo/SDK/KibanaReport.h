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

#define MIHOYO_SDK_KIBANAREPORT_CHECKPCCONFIG_OFFSET UNITYSDK_OFFSET(0x15F1F110)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_1_OFFSET UNITYSDK_OFFSET(0x15F1F090)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_OFFSET UNITYSDK_OFFSET(0x15F1F000)
#define MIHOYO_SDK_KIBANAREPORT_DEBUG_OFFSET UNITYSDK_OFFSET(0x15F0C180)
#define MIHOYO_SDK_KIBANAREPORT_ERROR_OFFSET UNITYSDK_OFFSET(0x15F0C4C0)
#define MIHOYO_SDK_KIBANAREPORT_FILTERPAYINFO_OFFSET UNITYSDK_OFFSET(0x15F21850)
#define MIHOYO_SDK_KIBANAREPORT_INFO_OFFSET UNITYSDK_OFFSET(0x15F0BFE0)
#define MIHOYO_SDK_KIBANAREPORT_INITKIBANAFILTER_OFFSET UNITYSDK_OFFSET(0x15F1DCD0)
#define MIHOYO_SDK_KIBANAREPORT_INITSUCCESSFILTER_OFFSET UNITYSDK_OFFSET(0x15F1ECE0)
#define MIHOYO_SDK_KIBANAREPORT_INVOKEREPORT_OFFSET UNITYSDK_OFFSET(0x15F20430)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_1_OFFSET UNITYSDK_OFFSET(0x15F21780)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_OFFSET UNITYSDK_OFFSET(0x15F20AD0)
#define MIHOYO_SDK_KIBANAREPORT_REPORTCACHEDLIST_OFFSET UNITYSDK_OFFSET(0x15F1FF40)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_1_OFFSET UNITYSDK_OFFSET(0x15F20BF0)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_2_OFFSET UNITYSDK_OFFSET(0x15F0D120)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x15F20280)
#define MIHOYO_SDK_KIBANAREPORT_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0x15F1F310)
#define MIHOYO_SDK_KIBANAREPORT_START_OFFSET UNITYSDK_OFFSET(0x15F1FC10)
#define MIHOYO_SDK_KIBANAREPORT_STOP_OFFSET UNITYSDK_OFFSET(0x15F201A0)
#define MIHOYO_SDK_KIBANAREPORT_STRINGMASK_OFFSET UNITYSDK_OFFSET(0x15F21D80)
#define MIHOYO_SDK_KIBANAREPORT_WARNING_OFFSET UNITYSDK_OFFSET(0x15F0C320)
#define MIHOYO_SDK_KIBANAREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F22020)
#define MIHOYO_SDK_KIBANAREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F21FE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReport_TypeDefinitionIndex = 6969;

	class KibanaReport : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_keyFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBEE0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskUrlFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBEE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipEventNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBEF0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBEF8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskModuleFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBF00);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskEventFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBF08);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathSuccessFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBF10);
		}
		static ::MiHoYo::SDK::KibanaReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::KibanaReport**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0xBF18);
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

		::System::Boolean CheckReportEnable(::System::String* module, ::System::String* eventName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_OFFSET))(this, module, eventName);
		}

		::System::Boolean CheckReportEnable_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_1_OFFSET))(this);
		}

		::System::Boolean CheckPCConfig(::MiHoYo::SDK::KibanaBaseModel* model)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::KibanaBaseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_CHECKPCCONFIG_OFFSET))(this, model);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_STOP_OFFSET))(this);
		}

		::System::Void Debug(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_DEBUG_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void Info(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_INFO_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void Warning(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_WARNING_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void Error(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_ERROR_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void InvokeReport(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_INVOKEREPORT_OFFSET))(this, dataString);
		}

		::System::Void ReportCachedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORTCACHEDLIST_OFFSET))(this);
		}

		::System::Void Report(::MiHoYo::SDK::KibanaBaseModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaBaseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORT_OFFSET))(this, model);
		}

		::System::Void Report_1(::UnityEngine::Networking::UnityWebRequest* localWWW, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequest*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORT_1_OFFSET))(this, localWWW, reportDict);
		}

		::System::Void Report_2(::System::String* requestUrl, ::System::String* requestBody, ::System::String* responseData, ::System::Int32 tkCode, ::System::String* tkMessage, ::System::String* trace_id, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reportDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPORT_2_OFFSET))(this, requestUrl, requestBody, responseData, tkCode, tkMessage, trace_id, reportDict);
		}

		::System::Void SetBaseInfo(::MiHoYo::SDK::KibanaBaseModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaBaseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_SETBASEINFO_OFFSET))(this, model);
		}

		static ::MiHoYo::SDK::JSONNode* FilterPayInfo(::MiHoYo::SDK::JSONNode* payInfo)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_FILTERPAYINFO_OFFSET))(payInfo);
		}

		::MiHoYo::SDK::KibanaEventModel* ReplaceSensitiveData(::MiHoYo::SDK::KibanaEventModel* model)
		{
			return ((::MiHoYo::SDK::KibanaEventModel*(*)(::PVOID, ::MiHoYo::SDK::KibanaEventModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_OFFSET))(this, model);
		}

		::MiHoYo::SDK::KibanaNetworkModel* ReplaceSensitiveData_1(::MiHoYo::SDK::KibanaNetworkModel* model)
		{
			return ((::MiHoYo::SDK::KibanaNetworkModel*(*)(::PVOID, ::MiHoYo::SDK::KibanaNetworkModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_1_OFFSET))(this, model);
		}

		::System::String* StringMask(::System::String* input)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORT_STRINGMASK_OFFSET))(this, input);
		}
	};
}
