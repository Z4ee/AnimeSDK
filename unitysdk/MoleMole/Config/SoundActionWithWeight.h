#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }

#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x153D3E00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SoundActionWithWeight_TypeDefinitionIndex = 63346;

	class SoundActionWithWeight : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* soundAction; // 0x10
		::System::Int32 lastPlay; // 0x18
		::System::Single weight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT__CTOR_OFFSET))(this);
		}
	};
}
