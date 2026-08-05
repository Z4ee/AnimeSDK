#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowSettingsIndexEntry_TypeDefinitionIndex = 80303;

	struct alignas(8) ConfigUIAvatarShowSettingsIndexEntry
	{
		::System::Int32 AvatarID; // 0x10
		::Foundation::AssetPath AssetPath; // 0x18
		::System::Boolean HasMainPageInfo; // 0x28
		::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo MainPageInfo; // 0x30
	};
}
