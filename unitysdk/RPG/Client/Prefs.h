#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AppPrefs; }
namespace RPG::Client { class SettingsPrefs; }
namespace RPG::Client { class UserPrefs; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define RPG_CLIENT_PREFS_AUTOSAVE_OFFSET UNITYSDK_OFFSET(0xAD750F0)
#define RPG_CLIENT_PREFS_DELETEALL_OFFSET UNITYSDK_OFFSET(0xAD75150)
#define RPG_CLIENT_PREFS_FORCESAVE_OFFSET UNITYSDK_OFFSET(0xAD74C00)
#define RPG_CLIENT_PREFS_GET_APP_OFFSET UNITYSDK_OFFSET(0xAD61A70)
#define RPG_CLIENT_PREFS_GET_PACKAGE_OFFSET UNITYSDK_OFFSET(0xAD75230)
#define RPG_CLIENT_PREFS_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0xAD67480)
#define RPG_CLIENT_PREFS_GET_USER_OFFSET UNITYSDK_OFFSET(0xAD60750)
#define RPG_CLIENT_PREFS_RECOVERFROMCLOUD_OFFSET UNITYSDK_OFFSET(0xAD75610)
#define RPG_CLIENT_PREFS_SET_APP_OFFSET UNITYSDK_OFFSET(0xAD75200)
#define RPG_CLIENT_PREFS_SET_PACKAGE_OFFSET UNITYSDK_OFFSET(0xAD75580)
#define RPG_CLIENT_PREFS_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0xAD75220)
#define RPG_CLIENT_PREFS_SET_USER_OFFSET UNITYSDK_OFFSET(0xAD75210)
#define RPG_CLIENT_PREFS_SWITCHTODEBUGPACKAGEPREFS_OFFSET UNITYSDK_OFFSET(0xAD751C0)
#define RPG_CLIENT_PREFS_TICKSAVE_OFFSET UNITYSDK_OFFSET(0xAD74C40)
#define RPG_CLIENT_PREFS__FORCESAVETOCLOUD_OFFSET UNITYSDK_OFFSET(0xAD74D70)
#define RPG_CLIENT_PREFS__FORCESAVETOLOCAL_OFFSET UNITYSDK_OFFSET(0xAD75020)

namespace RPG::Client
{
	inline static constexpr unsigned int Prefs_TypeDefinitionIndex = 54746;

	class Prefs : public ::System::Object
	{
	public:
		static ::RPG::Client::UserPrefs** StaticGet__UserPrefs()
		{
			return (::RPG::Client::UserPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x68280);
		}
		static ::RPG::Client::AppPrefs** StaticGet__AppPrefs()
		{
			return (::RPG::Client::AppPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x68288);
		}
		static ::RPG::Client::AppPrefs** StaticGet__PackagePrefs()
		{
			return (::RPG::Client::AppPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x68290);
		}
		static ::RPG::Client::SettingsPrefs** StaticGet__SettingsPrefs()
		{
			return (::RPG::Client::SettingsPrefs**)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x68298);
		}
		static ::System::UInt32* StaticGet__UserID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x11550);
		}
		static ::System::Boolean* StaticGet__NeedSave()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x11554);
		}
		static ::System::Single* StaticGet__LastSaveTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Prefs_TypeDefinitionIndex)->GetStaticField(0x11558);
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

		static ::System::Void set_App(::RPG::Client::AppPrefs* value)
		{
			return ((::System::Void(*)(::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_APP_OFFSET))(value);
		}

		static ::RPG::Client::UserPrefs* get_User()
		{
			return ((::RPG::Client::UserPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_USER_OFFSET))();
		}

		static ::System::Void set_User(::RPG::Client::UserPrefs* value)
		{
			return ((::System::Void(*)(::RPG::Client::UserPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_USER_OFFSET))(value);
		}

		static ::RPG::Client::SettingsPrefs* get_Settings()
		{
			return ((::RPG::Client::SettingsPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_SETTINGS_OFFSET))();
		}

		static ::System::Void set_Settings(::RPG::Client::SettingsPrefs* value)
		{
			return ((::System::Void(*)(::RPG::Client::SettingsPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_SETTINGS_OFFSET))(value);
		}

		static ::RPG::Client::AppPrefs* get_Package()
		{
			return ((::RPG::Client::AppPrefs*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_GET_PACKAGE_OFFSET))();
		}

		static ::System::Void set_Package(::RPG::Client::AppPrefs* value)
		{
			return ((::System::Void(*)(::RPG::Client::AppPrefs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFS_SET_PACKAGE_OFFSET))(value);
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
