#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_ECBBC12D5E0FDD79__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D3770)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_Class_1_ECBBC12D5E0FDD79_TypeDefinitionIndex = 70548;

	class FourRotateVoxelGameStartCurve_Class_1_ECBBC12D5E0FDD79 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* Field_1_0; // 0x10
		::UnityEngine::Vector3 Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_ECBBC12D5E0FDD79__CTOR_OFFSET))(this);
		}
	};
}
