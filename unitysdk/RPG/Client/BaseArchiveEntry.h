#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BASEARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x915E280)
#define RPG_CLIENT_BASEARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x915E2E0)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x916E090)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x916E060)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x916E070)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x916E080)
#define RPG_CLIENT_BASEARCHIVEENTRY_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x915D7B0)
#define RPG_CLIENT_BASEARCHIVEENTRY_ONENTRYCLICK_OFFSET UNITYSDK_OFFSET(0x916DF40)
#define RPG_CLIENT_BASEARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0x916DE30)
#define RPG_CLIENT_BASEARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x915DB80)
#define RPG_CLIENT_BASEARCHIVEENTRY__CLEARNEWSTATU_OFFSET UNITYSDK_OFFSET(0x916E000)
#define RPG_CLIENT_BASEARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x915E230)
#define RPG_CLIENT_BASEARCHIVEENTRY__GETNEWSTATUFROMCACHE_OFFSET UNITYSDK_OFFSET(0x916DE80)
#define RPG_CLIENT_BASEARCHIVEENTRY__RECORDNEWSTATU_OFFSET UNITYSDK_OFFSET(0x916DEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseArchiveEntry_TypeDefinitionIndex = 50703;

	class BaseArchiveEntry : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Boolean IsNew; // 0x14
		::System::Boolean IsUnlock; // 0x15
		::System::UInt32 RedDotType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_RESET_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_UNLOCK_OFFSET))(this, fromLogin);
		}

		static ::System::Boolean IsUnlocked(::System::UInt32 unlockID, ::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_ISUNLOCKED_OFFSET))(unlockID, avatarID);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void OnEntryClick(::RPG::Client::BaseArchiveEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_ONENTRYCLICK_OFFSET))(this, entry);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_COMPARETO_OFFSET))(this, other);
		}

		::System::Void _RecordNewStatu(::System::UInt32 type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__RECORDNEWSTATU_OFFSET))(this, type, id);
		}

		::System::Void _ClearNewStatu(::System::UInt32 type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__CLEARNEWSTATU_OFFSET))(this, type, id);
		}

		::System::Boolean _GetNewStatuFromCache(::System::UInt32 type, ::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__GETNEWSTATUFROMCACHE_OFFSET))(this, type, id);
		}

		::System::UInt32 get_RedDotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_GET_CURPROGRESS_OFFSET))(this);
		}
	};
}
