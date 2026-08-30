#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MMTMANAGER_CREATEMMT_OFFSET UNITYSDK_OFFSET(0x1A635DA0)
#define MIHOYO_SDK_MMTMANAGER_GETMMTHEADER_OFFSET UNITYSDK_OFFSET(0x1A635790)
#define MIHOYO_SDK_MMTMANAGER_GETMMTRESULT_OFFSET UNITYSDK_OFFSET(0x1A6351A0)
#define MIHOYO_SDK_MMTMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A635230)
#define MIHOYO_SDK_MMTMANAGER_ONMMTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A636340)
#define MIHOYO_SDK_MMTMANAGER_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1A635470)
#define MIHOYO_SDK_MMTMANAGER_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1A635500)
#define MIHOYO_SDK_MMTMANAGER_REQUESTCHECK_OFFSET UNITYSDK_OFFSET(0x1A635EB0)
#define MIHOYO_SDK_MMTMANAGER_SHOWMMTWEB_OFFSET UNITYSDK_OFFSET(0x1A634E10)
#define MIHOYO_SDK_MMTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6365C0)
#define MIHOYO_SDK_MMTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6365B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MmtManager_TypeDefinitionIndex = 7991;

	class MmtManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MmtManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MmtManager**)Il2CppClass::FromTypeDefinitionIndex(MmtManager_TypeDefinitionIndex)->GetStaticField(0x14580);
		}
		// static const ::System::String* MMT_ID; // 0x0
		// static const ::System::String* GEETEST_C; // 0x0
		// static const ::System::String* GEETEST_S; // 0x0
		// static const ::System::String* GEETEST_V; // 0x0
		// static const ::System::String* HEADER_RISKY; // 0x0
		::System::Action_2<::System::Int32, ::System::String*>* OnGetMmtResult; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void ShowMmtWeb(::MiHoYo::SDK::MmtManager_GeetestModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_SHOWMMTWEB_OFFSET))(this, a1);
		}

		::System::Void GetMmtResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_GETMMTRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::UniWebViewMessage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnPageClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONPAGECLOSE_OFFSET))(this);
		}

		::System::Void OnPageError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONPAGEERROR_OFFSET))(this, a1);
		}

		::System::String* GetMmtHeader(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_GETMMTHEADER_OFFSET))(this, a1);
		}

		::System::Void CreateMmt(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_2<::System::Int32, ::System::String*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_CREATEMMT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnMmtCallback(::System::Action_2<::System::Int32, ::System::String*>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONMMTCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestCheck(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_REQUESTCHECK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
