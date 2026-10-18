#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_11.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER_APPLYROOMTYPEPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD550DE0)
#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER__CACHEPLAYERNODES_OFFSET UNITYSDK_OFFSET(0xD551000)
#define RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5512A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapOnlinePlayRoomIconPositionController_TypeDefinitionIndex = 72809;

	class MapOnlinePlayRoomIconPositionController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MapOnlinePlayRoomIconPositionController_RoomTypePositionConfig*>* _RoomTypePositionConfigs; // 0x18
		::Il2CppArray<::UnityEngine::RectTransform*>* _PlayerNodes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean ApplyRoomTypePositions(::Enum_3_0A3761FE34514D6C_11 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER_APPLYROOMTYPEPOSITIONS_OFFSET))(this, a1);
		}

		::System::Void _CachePlayerNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPONLINEPLAYROOMICONPOSITIONCONTROLLER__CACHEPLAYERNODES_OFFSET))(this);
		}
	};
}
