#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_CFEC17D7952BD0DC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1B1C2B50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_CFEC17D7952BD0DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C3A60)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC_TypeDefinitionIndex = 76363;

	class FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x18
		::System::Single CNOELHGCKJJ; // 0x24
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x28
		::System::Single DJCLLOAGJEE; // 0x34
		::System::Boolean FOMPLCNPOJF; // 0x38

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
