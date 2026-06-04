#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

namespace RPG::GameCore { class RelicSetConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICARCHIVEENTRY_ADDUNLOCKTYPE_OFFSET UNITYSDK_OFFSET(0xC6D0E70)
#define RPG_CLIENT_RELICARCHIVEENTRY_CLEARALLNEWSTATUS_OFFSET UNITYSDK_OFFSET(0xC6D1460)
#define RPG_CLIENT_RELICARCHIVEENTRY_GETREDDOTKEYBYRELICTYPE_OFFSET UNITYSDK_OFFSET(0xC6D1330)
#define RPG_CLIENT_RELICARCHIVEENTRY_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xC6D1660)
#define RPG_CLIENT_RELICARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC6D0C40)
#define RPG_CLIENT_RELICARCHIVEENTRY_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xC6D15A0)
#define RPG_CLIENT_RELICARCHIVEENTRY_ISTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0xC6D12D0)
#define RPG_CLIENT_RELICARCHIVEENTRY_ONRELICTYPECLICK_OFFSET UNITYSDK_OFFSET(0xC6D1380)
#define RPG_CLIENT_RELICARCHIVEENTRY_RESET_OFFSET UNITYSDK_OFFSET(0xC6D14B0)
#define RPG_CLIENT_RELICARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D1200)
#define RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xC6D1720)
#define RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xC6D1710)
#define RPG_CLIENT_RELICARCHIVEENTRY___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xC6D16B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicArchiveEntry_TypeDefinitionIndex = 58417;

	class RelicArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::GameCore::RelicSetConfigRow* _Row; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockTypeSet; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* AllNewRelicType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean IsTypeUnlock(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_ISTYPEUNLOCK_OFFSET))(this, a1);
		}

		::System::Void AddUnlockType(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_ADDUNLOCKTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void OnRelicTypeClick(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_ONRELICTYPECLICK_OFFSET))(this, a1);
		}

		::System::Void ClearAllNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_CLEARALLNEWSTATUS_OFFSET))(this);
		}

		::System::UInt32 GetRedDotKeyByRelicType(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEENTRY_GETREDDOTKEYBYRELICTYPE_OFFSET))(this, a1);
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
