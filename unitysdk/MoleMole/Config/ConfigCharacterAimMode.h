#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace MoleMole::Config { class CharacterAimModeConstant; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCHARACTERAIMMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x159E5FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCharacterAimMode_TypeDefinitionIndex = 50725;

	class ConfigCharacterAimMode : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::CharacterAimModeConstant* constant; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterAimModeConfig*>* configs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERAIMMODE__CTOR_OFFSET))(this);
		}
	};
}
