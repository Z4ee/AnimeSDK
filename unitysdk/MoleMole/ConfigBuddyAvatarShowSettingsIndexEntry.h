#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyAvatarShowSettingsIndexEntry_TypeDefinitionIndex = 51318;

	struct alignas(8) ConfigBuddyAvatarShowSettingsIndexEntry
	{
		::System::Int32 BuddyID; // 0x10
		::Foundation::AssetPath AssetPath; // 0x18
		::System::Boolean HasMainPageInfo; // 0x28
		::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo MainPageInfo; // 0x30
	};
}
