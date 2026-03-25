#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_ACCOUNTSETTINGS_GET_AUTOCLEARMISSIONRES_OFFSET UNITYSDK_OFFSET(0x8EC6A80)
#define RPG_CLIENT_ACCOUNTSETTINGS_GET_CLEARMISSIONRESSHOWN_OFFSET UNITYSDK_OFFSET(0x8EC6BB0)
#define RPG_CLIENT_ACCOUNTSETTINGS_GET_ISPLAYWITHPSNONLY_OFFSET UNITYSDK_OFFSET(0x8EC6950)
#define RPG_CLIENT_ACCOUNTSETTINGS_SET_AUTOCLEARMISSIONRES_OFFSET UNITYSDK_OFFSET(0x8EC6B10)
#define RPG_CLIENT_ACCOUNTSETTINGS_SET_CLEARMISSIONRESSHOWN_OFFSET UNITYSDK_OFFSET(0x8EC6C40)
#define RPG_CLIENT_ACCOUNTSETTINGS_SET_ISPLAYWITHPSNONLY_OFFSET UNITYSDK_OFFSET(0x8EC69E0)
#define RPG_CLIENT_ACCOUNTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EC68D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AccountSettings_TypeDefinitionIndex = 48011;

	class AccountSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS__CTOR_OFFSET))(this, name);
		}

		::System::Boolean get_IsPlayWithPsnOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_GET_ISPLAYWITHPSNONLY_OFFSET))(this);
		}

		::System::Void set_IsPlayWithPsnOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_SET_ISPLAYWITHPSNONLY_OFFSET))(this, value);
		}

		::System::Boolean get_AutoClearMissionRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_GET_AUTOCLEARMISSIONRES_OFFSET))(this);
		}

		::System::Void set_AutoClearMissionRes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_SET_AUTOCLEARMISSIONRES_OFFSET))(this, value);
		}

		::System::Boolean get_ClearMissionResShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_GET_CLEARMISSIONRESSHOWN_OFFSET))(this);
		}

		::System::Void set_ClearMissionResShown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_SET_CLEARMISSIONRESSHOWN_OFFSET))(this, value);
		}
	};
}
