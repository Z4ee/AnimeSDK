#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_GAMEROLEMANAGER_RESETGAMEROLE_OFFSET UNITYSDK_OFFSET(0x1830E2D0)
#define MIHOYO_SDK_GAMEROLEMANAGER_SETGAMEROLE_OFFSET UNITYSDK_OFFSET(0x1830E070)
#define MIHOYO_SDK_GAMEROLEMANAGER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1830E230)
#define MIHOYO_SDK_GAMEROLEMANAGER_SETSERVERID_OFFSET UNITYSDK_OFFSET(0x1830E020)
#define MIHOYO_SDK_GAMEROLEMANAGER_SYNCGAMEROLETONATIVE_OFFSET UNITYSDK_OFFSET(0x1830E310)
#define MIHOYO_SDK_GAMEROLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1830E490)
#define MIHOYO_SDK_GAMEROLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1830E480)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GameRoleManager_TypeDefinitionIndex = 7901;

	class GameRoleManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::GameRoleManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::GameRoleManager**)Il2CppClass::FromTypeDefinitionIndex(GameRoleManager_TypeDefinitionIndex)->GetStaticField(0xCD80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetServerID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SETSERVERID_OFFSET))(this, a1);
		}

		::System::Void SetGameRole(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SETGAMEROLE_OFFSET))(this, a1);
		}

		::System::Void SetLevel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SETLEVEL_OFFSET))(this, a1);
		}

		::System::Void ResetGameRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_RESETGAMEROLE_OFFSET))(this);
		}

		::System::Void SyncGameRoleToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEROLEMANAGER_SYNCGAMEROLETONATIVE_OFFSET))(this);
		}
	};
}
