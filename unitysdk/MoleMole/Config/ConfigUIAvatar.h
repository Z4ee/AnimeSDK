#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class AvatarUIElementColorConfigs; }
namespace MoleMole { class MindscapeAvatarEntranceCfg; }
namespace MoleMole::Config { class ConfigTalentBGColor; }
namespace MoleMole::Config { class ConfigUIAvatar_KeyValueInfo_AvatarUIElement; }
namespace MoleMole::Config { class ConfigUIAvatar_KeyValueInfo_TweakColor; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIAVATAR_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BD66530)
#define MOLEMOLE_CONFIG_CONFIGUIAVATAR_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BD656D0)
#define MOLEMOLE_CONFIG_CONFIGUIAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD672E0)
#define MOLEMOLE_CONFIG_CONFIGUIAVATAR___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BD67580)
#define MOLEMOLE_CONFIG_CONFIGUIAVATAR___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BD67590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAvatar_TypeDefinitionIndex = 46493;

	class ConfigUIAvatar : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AvatarUIElementColorConfigs*>* AvatarUIElementGroups; // 0x58
		::MoleMole::Config::ConfigTalentBGColor* TalentBGColor; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::MindscapeAvatarEntranceCfg*>* EntranceColorList; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIAvatar_KeyValueInfo_AvatarUIElement*>* KeyValueInfoList; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIAvatar_KeyValueInfo_TweakColor*>* KeyValueInfoList1; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
