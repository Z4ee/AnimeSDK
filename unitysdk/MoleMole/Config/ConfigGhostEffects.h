#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"

namespace MoleMole::Config { class ConfigGhostEffect; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x14863AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGhostEffects_TypeDefinitionIndex = 63252;

	class ConfigGhostEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>* GhostEffects; // 0x58
		::System::Boolean GhostMoveIgnoreWorldTimeScale; // 0x60
		::System::Boolean GhostMoveIgnoreOwnerTimeScale; // 0x61
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>* GhostMoves; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
