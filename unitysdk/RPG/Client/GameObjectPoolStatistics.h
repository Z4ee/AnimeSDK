#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GAMEOBJECTPOOLSTATISTICS_BEGINPRELOADPOOLRECORD_OFFSET UNITYSDK_OFFSET(0x975E500)
#define RPG_CLIENT_GAMEOBJECTPOOLSTATISTICS_ENDPRELOADPOOLRECORD_OFFSET UNITYSDK_OFFSET(0x975E5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectPoolStatistics_TypeDefinitionIndex = 48019;

	class GameObjectPoolStatistics : public ::System::Object
	{
	public:
		static ::System::Void BeginPreloadPoolRecord()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTPOOLSTATISTICS_BEGINPRELOADPOOLRECORD_OFFSET))();
		}

		static ::System::String* EndPreloadPoolRecord()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTPOOLSTATISTICS_ENDPRELOADPOOLRECORD_OFFSET))();
		}
	};
}
