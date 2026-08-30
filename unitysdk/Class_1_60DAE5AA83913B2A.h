#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AppPrefs; }
namespace RPG::Client { class SettingsPrefs; }
namespace RPG::Client { class UserPrefs; }

#define CLASS_1_60DAE5AA83913B2A_GET_APPPREFS_OFFSET UNITYSDK_OFFSET(0x188F7D20)
#define CLASS_1_60DAE5AA83913B2A_GET_SETTINGSPREFS_OFFSET UNITYSDK_OFFSET(0x188F7D60)
#define CLASS_1_60DAE5AA83913B2A_GET_USERPREFS_OFFSET UNITYSDK_OFFSET(0x188F7D40)
#define CLASS_1_60DAE5AA83913B2A_SET_APPPREFS_OFFSET UNITYSDK_OFFSET(0x188F7D30)
#define CLASS_1_60DAE5AA83913B2A_SET_SETTINGSPREFS_OFFSET UNITYSDK_OFFSET(0x188F7D70)
#define CLASS_1_60DAE5AA83913B2A_SET_USERPREFS_OFFSET UNITYSDK_OFFSET(0x188F7D50)
#define CLASS_1_60DAE5AA83913B2A__CTOR_OFFSET UNITYSDK_OFFSET(0x188F7D80)

inline static constexpr unsigned int Class_1_60DAE5AA83913B2A_TypeDefinitionIndex = 59499;

class Class_1_60DAE5AA83913B2A : public ::System::Object
{
public:
	::RPG::Client::SettingsPrefs* _SettingsPrefs_k__BackingField; // 0x10
	::RPG::Client::UserPrefs* _UserPrefs_k__BackingField; // 0x18
	::RPG::Client::AppPrefs* _AppPrefs_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60DAE5AA83913B2A__CTOR_OFFSET))(this);
	}

	::RPG::Client::AppPrefs* get_AppPrefs()
	{
		return ((::RPG::Client::AppPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60DAE5AA83913B2A_GET_APPPREFS_OFFSET))(this);
	}

	::System::Void set_AppPrefs(::RPG::Client::AppPrefs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + CLASS_1_60DAE5AA83913B2A_SET_APPPREFS_OFFSET))(this, a1);
	}

	::RPG::Client::UserPrefs* get_UserPrefs()
	{
		return ((::RPG::Client::UserPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60DAE5AA83913B2A_GET_USERPREFS_OFFSET))(this);
	}

	::System::Void set_UserPrefs(::RPG::Client::UserPrefs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + CLASS_1_60DAE5AA83913B2A_SET_USERPREFS_OFFSET))(this, a1);
	}

	::RPG::Client::SettingsPrefs* get_SettingsPrefs()
	{
		return ((::RPG::Client::SettingsPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60DAE5AA83913B2A_GET_SETTINGSPREFS_OFFSET))(this);
	}

	::System::Void set_SettingsPrefs(::RPG::Client::SettingsPrefs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SettingsPrefs*))((::PBYTE)hIl2Cpp + CLASS_1_60DAE5AA83913B2A_SET_SETTINGSPREFS_OFFSET))(this, a1);
	}
};
