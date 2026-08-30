#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELRUNTIMEINSPECTOR_DELIVER_OFFSET UNITYSDK_OFFSET(0x1B1CA7F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELRUNTIMEINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CA830)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelRuntimeInspector_TypeDefinitionIndex = 76381;

	class FourRotateVoxelRuntimeInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord DeliverPoint; // 0x18
		::System::Boolean NeedDeliver; // 0x30
		::System::Boolean EnableSceneDebugGizmos; // 0x31
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType GizmosLayerType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELRUNTIMEINSPECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Deliver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELRUNTIMEINSPECTOR_DELIVER_OFFSET))(this);
		}
	};
}
