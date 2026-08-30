#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PreDownloadAsset; }
namespace System { class Action; }

#define RPG_CLIENT_PREDOWNLOADMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBBDBF0)
#define RPG_CLIENT_PREDOWNLOADMANAGER_GET_ISINLOGINPHASE_OFFSET UNITYSDK_OFFSET(0xDBBDDE0)
#define RPG_CLIENT_PREDOWNLOADMANAGER_GET_ISSHOWPREDOWNLOADFINISH_OFFSET UNITYSDK_OFFSET(0xDBBDD10)
#define RPG_CLIENT_PREDOWNLOADMANAGER_GET_ISSHOWSETTINGSPREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xDBBDCD0)
#define RPG_CLIENT_PREDOWNLOADMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xDBBDA20)
#define RPG_CLIENT_PREDOWNLOADMANAGER_STARTPREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xDBBDA60)
#define RPG_CLIENT_PREDOWNLOADMANAGER_STOPPREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xDBBDB90)
#define RPG_CLIENT_PREDOWNLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xDBBDF20)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadManager_TypeDefinitionIndex = 68273;

	class PreDownloadManager : public ::System::Object
	{
	public:
		::System::Action* _DefaultNotConfirmWifiAction; // 0x10
		::RPG::Client::PreDownloadAsset* _PreDownloadAsset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER_INIT_OFFSET))(this);
		}

		::System::Void StartPreDownload(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER_STARTPREDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Void StopPreDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER_STOPPREDOWNLOAD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean get_IsShowSettingsPreDownload()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER_GET_ISSHOWSETTINGSPREDOWNLOAD_OFFSET))();
		}

		static ::System::Boolean get_IsShowPreDownloadFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER_GET_ISSHOWPREDOWNLOADFINISH_OFFSET))();
		}

		static ::System::Boolean get_IsInLoginPhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADMANAGER_GET_ISINLOGINPHASE_OFFSET))();
		}
	};
}
