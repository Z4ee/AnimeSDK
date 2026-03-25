#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CEE71A2EAD0B98A1;
namespace RPG::Client { class DesignDataMgr; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_GLOBALCONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x97B78F0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97B7440)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x97B7320)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x97B7760)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADSTARTUPCONFIG_OFFSET UNITYSDK_OFFSET(0x97B74E0)
#define RPG_CLIENT_GLOBALCONFIGMANAGER_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x97B7710)
#define RPG_CLIENT_GLOBALCONFIGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x97B7290)
#define RPG_CLIENT_GLOBALCONFIGMANAGER__LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x97B76C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalConfigManager_TypeDefinitionIndex = 48642;

	class GlobalConfigManager : public ::System::Object
	{
	public:
		::RPG::Client::DesignDataMgr* DesignDataMgr; // 0x10
		::Class_2_CEE71A2EAD0B98A1* LuaBundleMgr; // 0x18
		::System::Boolean IsLoadingDesignData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncLoadStartupConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADSTARTUPCONFIG_OFFSET))(this);
		}

		::System::Void _LoadAllConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER__LOADALLCONFIG_OFFSET))(this);
		}

		::System::Void UnloadAllConfig(::System::Boolean unloadTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_UNLOADALLCONFIG_OFFSET))(this, unloadTable);
		}

		::System::Void SyncLoadAllConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_SYNCLOADALLCONFIG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* AsyncLoadAllConfig()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALCONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET))(this);
		}
	};
}
