#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_GAMEPLAYTAGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x158AFC10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMultiplayer_GameplayTagSetting_TypeDefinitionIndex = 50137;

	class ConfigMultiplayer_GameplayTagSetting : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* tags; // 0x10
		::MoleMole::Config::EntityType entityType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_GAMEPLAYTAGSETTING__CTOR_OFFSET))(this);
		}
	};
}
