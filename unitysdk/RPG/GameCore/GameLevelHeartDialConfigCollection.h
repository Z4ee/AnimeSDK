#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameLevelHeartDialNPCConfig; }

#define RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION_METHOD_2_12F649CBC6F37D61_OFFSET UNITYSDK_OFFSET(0x1B998520)
#define RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A12F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelHeartDialConfigCollection_TypeDefinitionIndex = 16723;

	class GameLevelHeartDialConfigCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameLevelHeartDialNPCConfig*>* NPCConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_12F649CBC6F37D61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelHeartDialConfigCollection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelHeartDialConfigCollection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION_METHOD_2_12F649CBC6F37D61_OFFSET))(a1, a2);
		}
	};
}
