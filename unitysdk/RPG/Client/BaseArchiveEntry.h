#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BASEARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC8C0760)
#define RPG_CLIENT_BASEARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC8C0930)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xC8C0C70)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xC8C0BA0)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xC8C0BE0)
#define RPG_CLIENT_BASEARCHIVEENTRY_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xC8C0C20)
#define RPG_CLIENT_BASEARCHIVEENTRY_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC8C02E0)
#define RPG_CLIENT_BASEARCHIVEENTRY_ONENTRYCLICK_OFFSET UNITYSDK_OFFSET(0xC8C07A0)
#define RPG_CLIENT_BASEARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0xC8BFFE0)
#define RPG_CLIENT_BASEARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC8C0030)
#define RPG_CLIENT_BASEARCHIVEENTRY__CLEARNEWSTATU_OFFSET UNITYSDK_OFFSET(0xC8C08D0)
#define RPG_CLIENT_BASEARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C0CB0)
#define RPG_CLIENT_BASEARCHIVEENTRY__GETNEWSTATUFROMCACHE_OFFSET UNITYSDK_OFFSET(0xC8C0220)
#define RPG_CLIENT_BASEARCHIVEENTRY__RECORDNEWSTATU_OFFSET UNITYSDK_OFFSET(0xC8C0280)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseArchiveEntry_TypeDefinitionIndex = 62495;

	class BaseArchiveEntry : public ::System::Object
	{
	public:
		::System::Boolean IsUnlock; // 0x10
		::System::Boolean IsNew; // 0x11
		::System::UInt32 RedDotType; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_RESET_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_UNLOCK_OFFSET))(this, a1);
		}

		static ::System::Boolean IsUnlocked(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_ISUNLOCKED_OFFSET))(a1, a2);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void OnEntryClick(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_ONENTRYCLICK_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void _RecordNewStatu(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__RECORDNEWSTATU_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearNewStatu(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__CLEARNEWSTATU_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetNewStatuFromCache(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEARCHIVEENTRY__GETNEWSTATUFROMCACHE_OFFSET))(this, a1, a2);
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
