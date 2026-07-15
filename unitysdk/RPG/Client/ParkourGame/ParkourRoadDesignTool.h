#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::ParkourGame { class MonoParkourRoad; }
namespace RPG::Client::ParkourGame { class MonoParkourRoadMap; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_GET_CURPARKOURROADMAP_OFFSET UNITYSDK_OFFSET(0x1A2ED9F0)
#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_METHOD_5_D02B3014C645DD1B_OFFSET UNITYSDK_OFFSET(0x1A2EDC60)
#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1A2EDAD0)
#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDD60)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourRoadDesignTool_TypeDefinitionIndex = 70820;

	class ParkourRoadDesignTool : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourRoadMap* Field_5_0; // 0x18
		::System::Single RoadMinDistance; // 0x20
		::System::Single RoadMaxDistance; // 0x24
		::System::Boolean Update; // 0x28
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourRoad*>* Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL__CTOR_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourRoadMap* get_CurParkourRoadMap()
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoadMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_GET_CURPARKOURROADMAP_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourRoad* Method_5_D02B3014C645DD1B(::System::String* a1)
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoad*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_METHOD_5_D02B3014C645DD1B_OFFSET))(this, a1);
		}
	};
}
