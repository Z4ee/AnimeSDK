#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_MONSTERWAVEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17E370C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_MonsterWaveGroup_TypeDefinitionIndex = 70562;

	class LevelShootGameConfig_MonsterWaveGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* MonsterIdList; // 0x10
		::System::Int32 PathID; // 0x18
		::System::Single Interval; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_MONSTERWAVEGROUP__CTOR_OFFSET))(this);
		}
	};
}
