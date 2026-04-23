#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICARCHIVEENTRY_ADDUNLOCKTYPE_OFFSET UNITYSDK_OFFSET(0xAF8A150)
#define RPG_CLIENT_RELICARCHIVEENTRY_CLEARALLNEWSTATUS_OFFSET UNITYSDK_OFFSET(0xAF8A720)
#define RPG_CLIENT_RELICARCHIVEENTRY_GETREDDOTKEYBYRELICTYPE_OFFSET UNITYSDK_OFFSET(0xAF8A5F0)
#define RPG_CLIENT_RELICARCHIVEENTRY_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF8A950)
#define RPG_CLIENT_RELICARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAF89F40)
#define RPG_CLIENT_RELICARCHIVEENTRY_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF8A890)
#define RPG_CLIENT_RELICARCHIVEENTRY_ISTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0xAF8A590)
#define RPG_CLIENT_RELICARCHIVEENTRY_ONRELICTYPECLICK_OFFSET UNITYSDK_OFFSET(0xAF8A640)
#define RPG_CLIENT_RELICARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0xAF8A790)
#define RPG_CLIENT_RELICARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xAF8A4A0)
#define RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF8AA20)
#define RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xAF8AA10)
#define RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xAF8A9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicArchiveEntry_TypeDefinitionIndex = 57605;

	class RelicArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AllNewRelicType; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockTypeSet; // 0x28
		::RPG::GameCore::RelicSetConfigRow* _Row; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean IsTypeUnlock(::RPG::GameCore::RelicType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_ISTYPEUNLOCK_OFFSET))(this, type);
		}

		::System::Void AddUnlockType(::System::UInt32 typeInt, ::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_ADDUNLOCKTYPE_OFFSET))(this, typeInt, fromLogin);
		}

		::System::Void OnRelicTypeClick(::RPG::GameCore::RelicType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_ONRELICTYPECLICK_OFFSET))(this, type);
		}

		::System::Void ClearAllNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_CLEARALLNEWSTATUS_OFFSET))(this);
		}

		::System::UInt32 GetRedDotKeyByRelicType(::System::UInt32 type)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_GETREDDOTKEYBYRELICTYPE_OFFSET))(this, type);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_RESET_OFFSET))(this);
		}

		::RPG::GameCore::RelicSetConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RelicSetConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_RESET_OFFSET))(this);
		}

		::System::UInt32 __iFixBaseProxy_get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::UInt32 __iFixBaseProxy_get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_GET_CURPROGRESS_OFFSET))(this);
		}
	};
}
