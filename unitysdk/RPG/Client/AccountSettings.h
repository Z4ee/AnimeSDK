#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_ACCOUNTSETTINGS_GET_AUTOCLEARMISSIONRES_OFFSET UNITYSDK_OFFSET(0xB077A40)
#define RPG_CLIENT_ACCOUNTSETTINGS_GET_CLEARMISSIONRESSHOWN_OFFSET UNITYSDK_OFFSET(0xB077B70)
#define RPG_CLIENT_ACCOUNTSETTINGS_GET_ISPLAYWITHPSNONLY_OFFSET UNITYSDK_OFFSET(0xB077910)
#define RPG_CLIENT_ACCOUNTSETTINGS_SET_AUTOCLEARMISSIONRES_OFFSET UNITYSDK_OFFSET(0xB077AD0)
#define RPG_CLIENT_ACCOUNTSETTINGS_SET_CLEARMISSIONRESSHOWN_OFFSET UNITYSDK_OFFSET(0xB077C00)
#define RPG_CLIENT_ACCOUNTSETTINGS_SET_ISPLAYWITHPSNONLY_OFFSET UNITYSDK_OFFSET(0xB0779A0)
#define RPG_CLIENT_ACCOUNTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xB077890)

namespace RPG::Client
{
	inline static constexpr unsigned int AccountSettings_TypeDefinitionIndex = 55483;

	class AccountSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayWithPsnOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_GET_ISPLAYWITHPSNONLY_OFFSET))(this);
		}

		::System::Void set_IsPlayWithPsnOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_SET_ISPLAYWITHPSNONLY_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoClearMissionRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_GET_AUTOCLEARMISSIONRES_OFFSET))(this);
		}

		::System::Void set_AutoClearMissionRes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_SET_AUTOCLEARMISSIONRES_OFFSET))(this, a1);
		}

		::System::Boolean get_ClearMissionResShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_GET_CLEARMISSIONRESSHOWN_OFFSET))(this);
		}

		::System::Void set_ClearMissionResShown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACCOUNTSETTINGS_SET_CLEARMISSIONRESSHOWN_OFFSET))(this, a1);
		}
	};
}
