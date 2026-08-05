#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAvatarShowData_ShowSettingsLoadingState; }
namespace MoleMole { class ConfigUIAvatarShowSettings; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6CCA0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS25_0__LOADAVATARSHOWSETTINGSASSET_B__0_OFFSET UNITYSDK_OFFSET(0x19D6CCB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass25_0_TypeDefinitionIndex = 56962;

	class ConfigUIAvatarShowData___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Action*>* callbacksToCompleteAfterSyncLoad; // 0x10
		::MoleMole::ConfigUIAvatarShowData_ShowSettingsLoadingState* loadingState; // 0x18
		::System::Action* complete; // 0x20
		::Foundation::AssetPath assetPath; // 0x28
		::System::Int32 avatarID; // 0x38
		::System::Boolean isAync; // 0x3C
		::System::Int32 loadToken; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadAvatarShowSettingsAsset_b__0(::MoleMole::ConfigUIAvatarShowSettings* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShowSettings*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS25_0__LOADAVATARSHOWSETTINGSASSET_B__0_OFFSET))(this, config);
		}
	};
}
