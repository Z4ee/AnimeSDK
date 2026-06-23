#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace MoleMole { class AvatarShowSettingDefault; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace MoleMole { class UIAvatarCommonLigtOpenType; }
namespace MoleMole { class UIAvatarShowSetting; }
namespace MoleMole { class UIVolumeOpenType_Select; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA84500)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShow_TypeDefinitionIndex = 41512;

	class ConfigUIAvatarShow : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single PageSwitchInterval; // 0x58
		::MoleMole::AvatarShowSettingDefault* DefaultShowSetting; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIAvatarCommonLigtOpenType*, ::MoleMole::UIAvatarCommonLightSetting*>* AvatarCommonLightSettings; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>* AvatarShowSettings; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>* AvatarMainPageShowPrefabPathes; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>*>* BuddyShowSettings; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo>* BuddyMainPageShowPrefabPathes; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>* WeaponShowSettings; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>* EquipShowSettings; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::UIAvatarShowSetting*>* ModelShowSettings; // 0xA0
		::System::String* UIVolumeDefaultSetting; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::UIVolumeOpenType_Select*>* UIVolumeShowSettings; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW__CTOR_OFFSET))(this);
		}
	};
}
