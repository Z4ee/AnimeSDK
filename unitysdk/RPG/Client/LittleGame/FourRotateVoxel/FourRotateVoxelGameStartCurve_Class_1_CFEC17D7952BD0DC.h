#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_CFEC17D7952BD0DC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9A24CD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_CFEC17D7952BD0DC__CTOR_OFFSET UNITYSDK_OFFSET(0x9A257B0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC_TypeDefinitionIndex = 62539;

	class FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* Field_1_0; // 0x10
		::UnityEngine::Vector3 Field_1_2; // 0x18
		::System::Boolean Field_1_5; // 0x24
		::UnityEngine::Vector3 Field_1_1; // 0x28
		::System::Single Field_1_3; // 0x34
		::System::Single Field_1_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_CFEC17D7952BD0DC__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_CFEC17D7952BD0DC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
