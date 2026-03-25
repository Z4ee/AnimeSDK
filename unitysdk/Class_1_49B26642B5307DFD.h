#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AppPrefs; }
namespace RPG::Client { class SettingsPrefs; }
namespace RPG::Client { class UserPrefs; }

#define CLASS_1_49B26642B5307DFD_GET_APPPREFS_OFFSET UNITYSDK_OFFSET(0x8829E20)
#define CLASS_1_49B26642B5307DFD_GET_SETTINGSPREFS_OFFSET UNITYSDK_OFFSET(0x8829E60)
#define CLASS_1_49B26642B5307DFD_GET_USERPREFS_OFFSET UNITYSDK_OFFSET(0x8829E40)
#define CLASS_1_49B26642B5307DFD_SET_APPPREFS_OFFSET UNITYSDK_OFFSET(0x8829E30)
#define CLASS_1_49B26642B5307DFD_SET_SETTINGSPREFS_OFFSET UNITYSDK_OFFSET(0x8829E70)
#define CLASS_1_49B26642B5307DFD_SET_USERPREFS_OFFSET UNITYSDK_OFFSET(0x8829E50)
#define CLASS_1_49B26642B5307DFD__CTOR_OFFSET UNITYSDK_OFFSET(0x8829E80)

inline static constexpr unsigned int Class_1_49B26642B5307DFD_TypeDefinitionIndex = 48003;

class Class_1_49B26642B5307DFD : public ::System::Object
{
public:
	::RPG::Client::SettingsPrefs* _SettingsPrefs_k__BackingField; // 0x10
	::RPG::Client::UserPrefs* _UserPrefs_k__BackingField; // 0x18
	::RPG::Client::AppPrefs* _AppPrefs_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B26642B5307DFD__CTOR_OFFSET))(this);
	}

	::RPG::Client::AppPrefs* get_AppPrefs()
	{
		return ((::RPG::Client::AppPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B26642B5307DFD_GET_APPPREFS_OFFSET))(this);
	}

	::System::Void set_AppPrefs(::RPG::Client::AppPrefs* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + CLASS_1_49B26642B5307DFD_SET_APPPREFS_OFFSET))(this, value);
	}

	::RPG::Client::UserPrefs* get_UserPrefs()
	{
		return ((::RPG::Client::UserPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B26642B5307DFD_GET_USERPREFS_OFFSET))(this);
	}

	::System::Void set_UserPrefs(::RPG::Client::UserPrefs* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + CLASS_1_49B26642B5307DFD_SET_USERPREFS_OFFSET))(this, value);
	}

	::RPG::Client::SettingsPrefs* get_SettingsPrefs()
	{
		return ((::RPG::Client::SettingsPrefs*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49B26642B5307DFD_GET_SETTINGSPREFS_OFFSET))(this);
	}

	::System::Void set_SettingsPrefs(::RPG::Client::SettingsPrefs* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SettingsPrefs*))((::PBYTE)hIl2Cpp + CLASS_1_49B26642B5307DFD_SET_SETTINGSPREFS_OFFSET))(this, value);
	}
};
