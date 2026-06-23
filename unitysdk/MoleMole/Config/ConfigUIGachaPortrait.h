#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigUIGachaConfigContainer; }
namespace MoleMole::Config { class ConfigUIGachaRoleConfig; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_GETNAMECARDCONFIG_OFFSET UNITYSDK_OFFSET(0x10D0D3A0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_GETROLECONFIG_OFFSET UNITYSDK_OFFSET(0x10D0D270)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0D5A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaPortrait_TypeDefinitionIndex = 81665;

	class ConfigUIGachaPortrait : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIGachaConfigContainer*>* configs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUIPortraitItem*>* nameCardConfigs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigUIGachaRoleConfig* GetRoleConfig(::System::String* portraitKey, ::System::String* gachaKey, ::System::String* extraKey)
		{
			return ((::MoleMole::Config::ConfigUIGachaRoleConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_GETROLECONFIG_OFFSET))(this, portraitKey, gachaKey, extraKey);
		}

		::MoleMole::Config::ConfigUIPortraitItem* GetNameCardConfig(::System::String* gachaKey, ::System::String* nodeName)
		{
			return ((::MoleMole::Config::ConfigUIPortraitItem*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_GETNAMECARDCONFIG_OFFSET))(this, gachaKey, nodeName);
		}
	};
}
