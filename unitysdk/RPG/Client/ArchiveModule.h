#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ArchiveData; }
namespace RPG::Client { class AvatarArchiveEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ARCHIVEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B32A880)
#define RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x1B32AC20)
#define RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATAS_OFFSET UNITYSDK_OFFSET(0x1B32A8D0)
#define RPG_CLIENT_ARCHIVEMODULE_GETAVATARARCHIVEENTRYBYID_OFFSET UNITYSDK_OFFSET(0x1B32ACD0)
#define RPG_CLIENT_ARCHIVEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B32A2F0)
#define RPG_CLIENT_ARCHIVEMODULE_REFRESHARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x1B32A9B0)
#define RPG_CLIENT_ARCHIVEMODULE_REFRESHAVATARARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x1B32AAA0)
#define RPG_CLIENT_ARCHIVEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B32B020)
#define RPG_CLIENT_ARCHIVEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B32B150)
#define RPG_CLIENT_ARCHIVEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32B6B0)
#define RPG_CLIENT_ARCHIVEMODULE__GETUPDATEDARCHIVEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B32B4D0)
#define RPG_CLIENT_ARCHIVEMODULE__INITARCHIVEDATAS_OFFSET UNITYSDK_OFFSET(0x1B32A340)
#define RPG_CLIENT_ARCHIVEMODULE__INITCOBRANDAVATARAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x1B32ADE0)
#define RPG_CLIENT_ARCHIVEMODULE__ONGETARCHIVEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B32B2E0)
#define RPG_CLIENT_ARCHIVEMODULE__ONMAINMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B32B0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveModule_TypeDefinitionIndex = 62498;

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

		::RPG::Client::ArchiveData* GetArchiveDataByType(::RPG::Client::ArchiveType a1)
		{
			return ((::RPG::Client::ArchiveData*(*)(::PVOID, ::RPG::Client::ArchiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATABYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarArchiveEntry* GetAvatarArchiveEntryByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETAVATARARCHIVEENTRYBYID_OFFSET))(this, a1);
		}

		::System::Void _InitCobrandAvatarAudioState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__INITCOBRANDAVATARAUDIOSTATE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMainMissionDataReady(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ONMAINMISSIONDATAREADY_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetArchiveDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ONGETARCHIVEDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _GetUpdatedArchiveDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__GETUPDATEDARCHIVEDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitArchiveDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__INITARCHIVEDATAS_OFFSET))(this);
		}
	};
}
