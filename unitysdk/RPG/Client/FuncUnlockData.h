#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockHint; }
namespace RPG::GameCore { class FuncUnlockConfigRow; }

#define RPG_CLIENT_FUNCUNLOCKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9749FF0)
#define RPG_CLIENT_FUNCUNLOCKDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x974A010)
#define RPG_CLIENT_FUNCUNLOCKDATA_GET_UNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x974A030)
#define RPG_CLIENT_FUNCUNLOCKDATA_SET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x974A020)
#define RPG_CLIENT_FUNCUNLOCKDATA_SET_UNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x974A040)
#define RPG_CLIENT_FUNCUNLOCKDATA_UPDATEUNLOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x974A190)
#define RPG_CLIENT_FUNCUNLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x974A050)

namespace RPG::Client
{
	inline static constexpr unsigned int FuncUnlockData_TypeDefinitionIndex = 55509;

	class FuncUnlockData : public ::System::Object
	{
	public:
		::RPG::GameCore::FuncUnlockConfigRow* _Meta; // 0x10
		::RPG::Client::FuncUnlockHint* _UnlockHint_k__BackingField; // 0x18
		::System::Boolean _IsOpen_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKDATA__CTOR_OFFSET))(this, id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::Void set_IsOpen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKDATA_SET_ISOPEN_OFFSET))(this, value);
		}

		::RPG::Client::FuncUnlockHint* get_UnlockHint()
		{
			return ((::RPG::Client::FuncUnlockHint*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKDATA_GET_UNLOCKHINT_OFFSET))(this);
		}

		::System::Void set_UnlockHint(::RPG::Client::FuncUnlockHint* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FuncUnlockHint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKDATA_SET_UNLOCKHINT_OFFSET))(this, value);
		}

		::System::Void UpdateUnlockStatus(::System::Boolean& isFirstUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FUNCUNLOCKDATA_UPDATEUNLOCKSTATUS_OFFSET))(this, isFirstUnlock);
		}
	};
}
