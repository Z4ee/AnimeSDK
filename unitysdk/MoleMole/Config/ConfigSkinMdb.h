#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class SkinMdbData; }

#define MOLEMOLE_CONFIG_CONFIGSKINMDB__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC82E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSkinMdb_TypeDefinitionIndex = 54796;

	class ConfigSkinMdb : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::SkinMdbData*>* AvatarConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSKINMDB__CTOR_OFFSET))(this);
		}
	};
}
