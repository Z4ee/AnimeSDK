#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Dev { class VirtualServerLaunchConfig; }
namespace System { class String; }

#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_CREATELAUNCHCONFIG_OFFSET UNITYSDK_OFFSET(0x192E44E0)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_LAUNCHWITHCONFIG_OFFSET UNITYSDK_OFFSET(0x192E4270)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_STARTADVENTUREDEVSERVERS_OFFSET UNITYSDK_OFFSET(0x192E4200)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x192E4C10)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__GETPROMOTIONBYLEVEL_OFFSET UNITYSDK_OFFSET(0x192E4BA0)

namespace RPG::Client::Dev
{
	inline static constexpr unsigned int VirtualServerLauncher_TypeDefinitionIndex = 80741;

	class VirtualServerLauncher : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void StartAdventureDevServers(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::Enum_3_DFCB42601400F441>* a5, ::RPG::GameCore::GenderType a6)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::Enum_3_DFCB42601400F441>*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_STARTADVENTUREDEVSERVERS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void LaunchWithConfig(::RPG::Client::Dev::VirtualServerLaunchConfig* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Dev::VirtualServerLaunchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_LAUNCHWITHCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::Dev::VirtualServerLaunchConfig* CreateLaunchConfig(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::System::UInt32>* a5, ::Il2CppArray<::System::String*>* a6, ::Il2CppArray<::System::String*>* a7, ::Il2CppArray<::Enum_3_DFCB42601400F441>* a8, ::RPG::GameCore::GenderType a9, ::Il2CppArray<::System::UInt32>* a10)
		{
			return ((::RPG::Client::Dev::VirtualServerLaunchConfig*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::Enum_3_DFCB42601400F441>*, ::RPG::GameCore::GenderType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_CREATELAUNCHCONFIG_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Int32 _GetPromotionByLevel(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__GETPROMOTIONBYLEVEL_OFFSET))(a1);
		}
	};
}
