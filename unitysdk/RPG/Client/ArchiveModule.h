#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ArchiveData; }
namespace RPG::Client { class AvatarArchiveEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ARCHIVEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90D6240)
#define RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x90D6630)
#define RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATAS_OFFSET UNITYSDK_OFFSET(0x90D6290)
#define RPG_CLIENT_ARCHIVEMODULE_GETAVATARARCHIVEENTRYBYID_OFFSET UNITYSDK_OFFSET(0x90D66F0)
#define RPG_CLIENT_ARCHIVEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x90D5C70)
#define RPG_CLIENT_ARCHIVEMODULE_REFRESHARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x90D6370)
#define RPG_CLIENT_ARCHIVEMODULE_REFRESHAVATARARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x90D64A0)
#define RPG_CLIENT_ARCHIVEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x90D69F0)
#define RPG_CLIENT_ARCHIVEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x90D6B00)
#define RPG_CLIENT_ARCHIVEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x90D6E70)
#define RPG_CLIENT_ARCHIVEMODULE__GETUPDATEDARCHIVEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x90D6D10)
#define RPG_CLIENT_ARCHIVEMODULE__INITARCHIVEDATAS_OFFSET UNITYSDK_OFFSET(0x90D5D00)
#define RPG_CLIENT_ARCHIVEMODULE__INITCOBRANDAVATARAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x90D6810)
#define RPG_CLIENT_ARCHIVEMODULE__ONGETARCHIVEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x90D6BB0)
#define RPG_CLIENT_ARCHIVEMODULE__ONMAINMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x90D6AA0)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90D6FA0)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x90D6F10)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x90D6FB0)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x90D7010)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveModule_TypeDefinitionIndex = 50706;

	class ArchiveModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::String* ArchiveLockName; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ArchiveType, ::RPG::Client::ArchiveData*>* _AllArchiveDataDict; // 0x18
		::System::Boolean _DataInited; // 0x20
		::System::Boolean _CobrandAvatarAudioStateInited; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void GetArchiveDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATAS_OFFSET))(this);
		}

		::System::Void RefreshArchiveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_REFRESHARCHIVEDATA_OFFSET))(this);
		}

		::System::Void RefreshAvatarArchiveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_REFRESHAVATARARCHIVEDATA_OFFSET))(this);
		}

		::RPG::Client::ArchiveData* GetArchiveDataByType(::RPG::Client::ArchiveType type)
		{
			return ((::RPG::Client::ArchiveData*(*)(::PVOID, ::RPG::Client::ArchiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATABYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::AvatarArchiveEntry* GetAvatarArchiveEntryByID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETAVATARARCHIVEENTRYBYID_OFFSET))(this, avatarID);
		}

		::System::Void _InitCobrandAvatarAudioState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__INITCOBRANDAVATARAUDIOSTATE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMainMissionDataReady(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ONMAINMISSIONDATAREADY_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetArchiveDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ONGETARCHIVEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _GetUpdatedArchiveDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__GETUPDATEDARCHIVEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _InitArchiveDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__INITARCHIVEDATAS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
