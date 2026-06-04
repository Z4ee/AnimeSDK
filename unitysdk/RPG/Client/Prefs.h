#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AppPrefs; }
namespace RPG::Client { class SettingsPrefs; }
namespace RPG::Client { class UserPrefs; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define RPG_CLIENT_PREFS_AUTOSAVE_OFFSET UNITYSDK_OFFSET(0xC4B6DA0)
#define RPG_CLIENT_PREFS_DELETEALL_OFFSET UNITYSDK_OFFSET(0xC4B6E00)
#define RPG_CLIENT_PREFS_FORCESAVE_OFFSET UNITYSDK_OFFSET(0xC4B6920)
#define RPG_CLIENT_PREFS_GET_APP_OFFSET UNITYSDK_OFFSET(0xC4A29A0)
#define RPG_CLIENT_PREFS_GET_PACKAGE_OFFSET UNITYSDK_OFFSET(0xC4B6EE0)
#define RPG_CLIENT_PREFS_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0xC4A8590)
#define RPG_CLIENT_PREFS_GET_USER_OFFSET UNITYSDK_OFFSET(0xC4A07D0)
#define RPG_CLIENT_PREFS_RECOVERFROMCLOUD_OFFSET UNITYSDK_OFFSET(0xC4B72C0)
#define RPG_CLIENT_PREFS_SET_APP_OFFSET UNITYSDK_OFFSET(0xC4B6EB0)
#define RPG_CLIENT_PREFS_SET_PACKAGE_OFFSET UNITYSDK_OFFSET(0xC4B7230)
#define RPG_CLIENT_PREFS_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0xC4B6ED0)
#define RPG_CLIENT_PREFS_SET_USER_OFFSET UNITYSDK_OFFSET(0xC4B6EC0)
#define RPG_CLIENT_PREFS_SWITCHTODEBUGPACKAGEPREFS_OFFSET UNITYSDK_OFFSET(0xC4B6E70)
#define RPG_CLIENT_PREFS_TICKSAVE_OFFSET UNITYSDK_OFFSET(0xC4B6960)
#define RPG_CLIENT_PREFS__FORCESAVETOCLOUD_OFFSET UNITYSDK_OFFSET(0xC4B6A20)
#define RPG_CLIENT_PREFS__FORCESAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0xC4B6CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int Prefs_TypeDefinitionIndex = 55473;

	class Prefs : public ::System::Object
	{
	public:
		static ::RPG::Client::SettingsPrefs** StaticGet__SettingsPrefs()
		{
			return (::RPG::Client::SettingsPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0xFD10);
		}
		static ::RPG::Client::AppPrefs** StaticGet__AppPrefs()
		{
			return (::RPG::Client::AppPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0xFD18);
		}
		static ::RPG::Client::UserPrefs** StaticGet__UserPrefs()
		{
			return (::RPG::Client::UserPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0xFD20);
		}
		static ::RPG::Client::AppPrefs** StaticGet__PackagePrefs()
		{
			return (::RPG::Client::AppPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0xFD28);
		}
		static ::System::Boolean* StaticGet__NeedSave()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x4F50);
		}
		static ::System::Single* StaticGet__LastSaveTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x4F54);
		}
		static ::System::UInt32* StaticGet__UserID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x4F58);
		}
		// static const ::System::Single AutoSaveInterval; // 0x0
		// static const ::System::String* CloudSaveDataKey; // 0x0

		static ::System::Void ForceSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_FORCESAVE_OFFSET))();
		}

		static ::System::Void TickSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_TICKSAVE_OFFSET))();
		}

		static ::System::Void AutoSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_AUTOSAVE_OFFSET))();
		}

		static ::System::Void DeleteAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_DELETEALL_OFFSET))();
		}

		static ::System::Void SwitchToDebugPackagePrefs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SWITCHTODEBUGPACKAGEPREFS_OFFSET))();
		}

		static ::RPG::Client::AppPrefs* get_App()
		{
			return ((::RPG::Client::AppPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_APP_OFFSET))();
		}

		static ::System::Void set_App(::RPG::Client::AppPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_APP_OFFSET))(a1);
		}

		static ::RPG::Client::UserPrefs* get_User()
		{
			return ((::RPG::Client::UserPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_USER_OFFSET))();
		}

		static ::System::Void set_User(::RPG::Client::UserPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_USER_OFFSET))(a1);
		}

		static ::RPG::Client::SettingsPrefs* get_Settings()
		{
			return ((::RPG::Client::SettingsPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_SETTINGS_OFFSET))();
		}

		static ::System::Void set_Settings(::RPG::Client::SettingsPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SettingsPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_SETTINGS_OFFSET))(a1);
		}

		static ::RPG::Client::AppPrefs* get_Package()
		{
			return ((::RPG::Client::AppPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_PACKAGE_OFFSET))();
		}

		static ::System::Void set_Package(::RPG::Client::AppPrefs* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_PACKAGE_OFFSET))(a1);
		}

		static ::System::Void _ForceSaveToLocal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS__FORCESAVETOLOCAL_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* RecoverFromCloud()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_RECOVERFROMCLOUD_OFFSET))();
		}

		static ::System::Void _ForceSaveToCloud()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS__FORCESAVETOCLOUD_OFFSET))();
		}
	};
}
