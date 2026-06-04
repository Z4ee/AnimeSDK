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

#define MIHOYO_SDK_KIBANAREPORT_CHECKPCCONFIG_OFFSET UNITYSDK_OFFSET(0x18350CA0)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_1_OFFSET UNITYSDK_OFFSET(0x18350C20)
#define MIHOYO_SDK_KIBANAREPORT_CHECKREPORTENABLE_OFFSET UNITYSDK_OFFSET(0x18350B90)
#define MIHOYO_SDK_KIBANAREPORT_DEBUG_OFFSET UNITYSDK_OFFSET(0x1833CDA0)
#define MIHOYO_SDK_KIBANAREPORT_ERROR_OFFSET UNITYSDK_OFFSET(0x1833D0E0)
#define MIHOYO_SDK_KIBANAREPORT_FILTERPAYINFO_OFFSET UNITYSDK_OFFSET(0x183531F0)
#define MIHOYO_SDK_KIBANAREPORT_INFO_OFFSET UNITYSDK_OFFSET(0x1833CC00)
#define MIHOYO_SDK_KIBANAREPORT_INITKIBANAFILTER_OFFSET UNITYSDK_OFFSET(0x1834F930)
#define MIHOYO_SDK_KIBANAREPORT_INITSUCCESSFILTER_OFFSET UNITYSDK_OFFSET(0x183508A0)
#define MIHOYO_SDK_KIBANAREPORT_INVOKEREPORT_OFFSET UNITYSDK_OFFSET(0x18351E40)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_1_OFFSET UNITYSDK_OFFSET(0x18353160)
#define MIHOYO_SDK_KIBANAREPORT_REPLACESENSITIVEDATA_OFFSET UNITYSDK_OFFSET(0x18352540)
#define MIHOYO_SDK_KIBANAREPORT_REPORTCACHEDLIST_OFFSET UNITYSDK_OFFSET(0x18312AB0)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_1_OFFSET UNITYSDK_OFFSET(0x18352620)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_2_OFFSET UNITYSDK_OFFSET(0x1833DD20)
#define MIHOYO_SDK_KIBANAREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x18351CD0)
#define MIHOYO_SDK_KIBANAREPORT_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0x18350F10)
#define MIHOYO_SDK_KIBANAREPORT_START_OFFSET UNITYSDK_OFFSET(0x183518A0)
#define MIHOYO_SDK_KIBANAREPORT_STOP_OFFSET UNITYSDK_OFFSET(0x18351BE0)
#define MIHOYO_SDK_KIBANAREPORT_STRINGMASK_OFFSET UNITYSDK_OFFSET(0x18353730)
#define MIHOYO_SDK_KIBANAREPORT_WARNING_OFFSET UNITYSDK_OFFSET(0x1833CF40)
#define MIHOYO_SDK_KIBANAREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18353990)
#define MIHOYO_SDK_KIBANAREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x18353950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaReport_TypeDefinitionIndex = 7918;

	class KibanaReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KibanaReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::KibanaReport**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x650);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskUrlFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x658);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathSuccessFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskEventFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_keyFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x670);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_maskModuleFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x678);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_urlPathFilterList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipEventNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KibanaReport_TypeDefinitionIndex)->GetStaticField(0x688);
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
