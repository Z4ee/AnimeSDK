#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Dev { class VirtualServerLaunchConfig; }
namespace System { class String; }

#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_CREATELAUNCHCONFIG_OFFSET UNITYSDK_OFFSET(0xA0F9060)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_LAUNCHWITHCONFIG_OFFSET UNITYSDK_OFFSET(0xA0F8E70)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_STARTADVENTUREDEVSERVERS_OFFSET UNITYSDK_OFFSET(0xA0F8E00)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F98B0)
#define RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__GETPROMOTIONBYLEVEL_OFFSET UNITYSDK_OFFSET(0xA0F9840)

namespace RPG::Client::Dev
{
	inline static constexpr unsigned int VirtualServerLauncher_TypeDefinitionIndex = 72488;

	class VirtualServerLauncher : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void StartAdventureDevServers(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 dimensionID, ::Il2CppArray<::System::UInt32>* avatarIDs, ::Il2CppArray<::Enum_3_DFCB42601400F441>* multiPathAvatarTypes, ::RPG::GameCore::GenderType genderType)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::Enum_3_DFCB42601400F441>*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_STARTADVENTUREDEVSERVERS_OFFSET))(planeID, floorID, dimensionID, avatarIDs, multiPathAvatarTypes, genderType);
		}

		static ::System::Void LaunchWithConfig(::RPG::Client::Dev::VirtualServerLaunchConfig* Config)
		{
			return ((::System::Void(*)(::RPG::Client::Dev::VirtualServerLaunchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_LAUNCHWITHCONFIG_OFFSET))(Config);
		}

		static ::RPG::Client::Dev::VirtualServerLaunchConfig* CreateLaunchConfig(::System::UInt32 planeID, ::System::UInt32 floorID, ::System::UInt32 dimensionID, ::Il2CppArray<::System::UInt32>* avatarIDs, ::Il2CppArray<::System::UInt32>* avatarEnhancedIDs, ::Il2CppArray<::System::String*>* skillTreePoints, ::Il2CppArray<::System::String*>* avatarLevels, ::Il2CppArray<::Enum_3_DFCB42601400F441>* multiPathAvatarTypes, ::RPG::GameCore::GenderType genderType, ::Il2CppArray<::System::UInt32>* SkinIDs)
		{
			return ((::RPG::Client::Dev::VirtualServerLaunchConfig*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::Enum_3_DFCB42601400F441>*, ::RPG::GameCore::GenderType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER_CREATELAUNCHCONFIG_OFFSET))(planeID, floorID, dimensionID, avatarIDs, avatarEnhancedIDs, skillTreePoints, avatarLevels, multiPathAvatarTypes, genderType, SkinIDs);
		}

		static ::System::Int32 _GetPromotionByLevel(::System::UInt32 level)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEV_VIRTUALSERVERLAUNCHER__GETPROMOTIONBYLEVEL_OFFSET))(level);
		}
	};
}
