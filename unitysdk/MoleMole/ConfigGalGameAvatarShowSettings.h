#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class AvatarShowSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x170D0D30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShowSettings_TypeDefinitionIndex = 79844;

	class ConfigGalGameAvatarShowSettings : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AvatarShowSetting*>* avatarShowSettings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
