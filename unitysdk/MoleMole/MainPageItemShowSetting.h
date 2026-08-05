#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EMainPageItemType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarShowSetting; }
namespace System { class String; }

#define MOLEMOLE_MAINPAGEITEMSHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF75F0)

namespace MoleMole
{
	inline static constexpr unsigned int MainPageItemShowSetting_TypeDefinitionIndex = 91080;

	class MainPageItemShowSetting : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::MoleMole::AvatarShowSetting* AvatarShowSetting; // 0x18
		::MoleMole::EMainPageItemType ItemType; // 0x20
		::System::Int32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINPAGEITEMSHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
