#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/NotifyTableChangedAction.h"
#include "unitysdk/System/EventArgs.h"

namespace SQLite { class TableMapping; }

#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1E9FB8E0)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x1E9FB8C0)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1E9FB8F0)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_TABLE_OFFSET UNITYSDK_OFFSET(0x1E9FB8D0)
#define SQLITE_NOTIFYTABLECHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FB900)

namespace SQLite
{
	inline static constexpr unsigned int NotifyTableChangedEventArgs_TypeDefinitionIndex = 39037;

	class NotifyTableChangedEventArgs : public ::System::EventArgs
	{
	public:
		::SQLite::TableMapping* _Table_k__BackingField; // 0x10
		::SQLite::NotifyTableChangedAction _Action_k__BackingField; // 0x18

		::System::Void _ctor(::SQLite::TableMapping* table, ::SQLite::NotifyTableChangedAction action)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::TableMapping*, ::SQLite::NotifyTableChangedAction))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS__CTOR_OFFSET))(this, table, action);
		}

		::SQLite::TableMapping* get_Table()
		{
			return ((::SQLite::TableMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_TABLE_OFFSET))(this);
		}

		::System::Void set_Table(::SQLite::TableMapping* value)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_TABLE_OFFSET))(this, value);
		}

		::SQLite::NotifyTableChangedAction get_Action()
		{
			return ((::SQLite::NotifyTableChangedAction(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::SQLite::NotifyTableChangedAction value)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::NotifyTableChangedAction))((::PBYTE)hIl2Cpp + SQLITE_NOTIFYTABLECHANGEDEVENTARGS_SET_ACTION_OFFSET))(this, value);
		}
	};
}
