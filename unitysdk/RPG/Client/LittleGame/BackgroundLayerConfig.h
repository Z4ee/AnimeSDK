#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class PlacementConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_BACKGROUNDLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16841350)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BackgroundLayerConfig_TypeDefinitionIndex = 32787;

	class BackgroundLayerConfig : public ::System::Object
	{
	public:
		::System::Int32 Layer; // 0x10
		::System::Single Speed; // 0x14
		::System::Boolean IsRail; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PlacementConfig*>* PlacementConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BACKGROUNDLAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
