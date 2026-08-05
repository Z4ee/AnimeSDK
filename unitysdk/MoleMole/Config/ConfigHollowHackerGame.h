#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWHACKERGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5E1C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowHackerGame_TypeDefinitionIndex = 78397;

	class ConfigHollowHackerGame : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single VirusAddAnimCooldown; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>* VirusIconPathDict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWHACKERGAME__CTOR_OFFSET))(this);
		}
	};
}
