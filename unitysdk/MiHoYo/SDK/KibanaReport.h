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

#define MIHOYO_SDK_KIBANAREPORT_CHECKPCCONFIG_OFFSET UNITYSDK_OFFSET(0x17568170)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_1_OFFSET UNITYSDK_OFFSET(0x175680F0)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_OFFSET UNITYSDK_OFFSET(0x17568060)
#define MIHOYO_SDK_KIBANAREPORT_DEBUG_OFFSET UNITYSDK_OFFSET(0x17555490)
#define MIHOYO_SDK_KIBANAREPORT_ERROR_OFFSET UNITYSDK_OFFSET(0x175557D0)
#define MIHOYO_SDK_KIBANAREPORT_FILTERPAYINFO_OFFSET UNITYSDK_OFFSET(0x1756A620)
#define MIHOYO_SDK_KIBANAREPORT_INFO_OFFSET UNITYSDK_OFFSET(0x175552F0)
#define MIHOYO_SDK_KIBANAREPORT_INITKIBANAFILTER_OFFSET UNITYSDK_OFFSET(0x17566CD0)
#define MIHOYO_SDK_KIBANAREPORT_INITSUCCESSFILTER_OFFSET UNITYSDK_OFFSET(0x17567D20)
#define MIHOYO_SDK_KIBANAREPORT_INVOKEREPORT_OFFSET UNITYSDK_OFFSET(0x175692A0)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_1_OFFSET UNITYSDK_OFFSET(0x1756A590)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_OFFSET UNITYSDK_OFFSET(0x17569940)
#define MIHOYO_SDK_KIBANAREPORT_REPORTCACHEDLIST_OFFSET UNITYSDK_OFFSET(0x1752A1C0)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_1_OFFSET UNITYSDK_OFFSET(0x17569A20)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_2_OFFSET UNITYSDK_OFFSET(0x17556370)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x17569110)
#define MIHOYO_SDK_KIBANAREPORT_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0x17568370)
#define MIHOYO_SDK_KIBANAREPORT_START_OFFSET UNITYSDK_OFFSET(0x17568D00)
#define MIHOYO_SDK_KIBANAREPORT_STOP_OFFSET UNITYSDK_OFFSET(0x17569030)
#define MIHOYO_SDK_KIBANAREPORT_STRINGMASK_OFFSET UNITYSDK_OFFSET(0x1756AB50)
#define MIHOYO_SDK_KIBANAREPORT_WARNING_OFFSET UNITYSDK_OFFSET(0x17555630)
#define MIHOYO_SDK_KIBANAREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1756ADF0)
#define MIHOYO_SDK_KIBANAREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1756ADB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReport_TypeDefinitionIndex = 7015;

	class KibanaReport : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathSuccessFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskModuleFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipEventNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_keyFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x5F8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskUrlFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x608);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskEventFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x610);
		}
		static ::MiHoYo::SDK::KibanaReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::KibanaReport**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x618);
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
