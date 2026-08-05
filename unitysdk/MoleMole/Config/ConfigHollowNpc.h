#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HollowNpcConfigData; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x14376B70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowNpc_TypeDefinitionIndex = 76566;

	class ConfigHollowNpc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::HollowNpcConfigData* NpcConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWNPC__CTOR_OFFSET))(this);
		}
	};
}
