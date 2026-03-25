#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class StreamingLodSetting; }
namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x9EAEB20)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingLayerDetail_TypeDefinitionIndex = 60473;

	class StreamingLayerDetail : public ::System::Object
	{
	public:
		::System::String* Descripte; // 0x10
		::System::String* LayerName; // 0x18
		::System::Single VisionDistance; // 0x20
		::RPG::GameCore::StreamingLayerType LayerType; // 0x24
		::System::Single MaxBoundSize; // 0x28
		::System::Single CheckGap; // 0x2C
		::System::Single CheckCameraDistance; // 0x30
		::System::Int32 SortOrder; // 0x34
		::RPG::Client::OpenWorld::StreamingLodSetting* LodSettings; // 0x38
		::System::Boolean CentralBlockOnly; // 0x40
		::System::Boolean IsTerrainLayer; // 0x41
		::System::Single ForceSyncLoadDist; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERDETAIL__CTOR_OFFSET))(this);
		}
	};
}
