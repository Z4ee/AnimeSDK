#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigOutlineObjectRenderer_Global; }
namespace MoleMole { class ConfigOutlineObjectRenderer_Local; }

#define MOLEMOLE_CONFIG_CONFIGAUTOBATTLEACCESSORYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x134F5980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAutoBattleAccessoryEffect_TypeDefinitionIndex = 76659;

	class ConfigAutoBattleAccessoryEffect : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::ConfigOutlineObjectRenderer_Local* ConfigOutlineParam_Local; // 0x58
		::MoleMole::ConfigOutlineObjectRenderer_Global* ConfigOutlineParam_Global; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUTOBATTLEACCESSORYEFFECT__CTOR_OFFSET))(this);
		}
	};
}
