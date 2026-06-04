#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_5D38E0A9AA20AF85__CTOR_OFFSET UNITYSDK_OFFSET(0xBE248C0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85_TypeDefinitionIndex = 71364;

	class FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* Field_1_0; // 0x10
		::System::Single Field_1_1; // 0x18
		::System::Boolean Field_1_2; // 0x1C
		::System::Boolean Field_1_3; // 0x1D
		::System::Boolean Field_1_4; // 0x1E
		::System::Single Field_1_5; // 0x20
		::UnityEngine::Vector3 Field_1_6; // 0x24
		::System::UInt32 Field_1_7; // 0x30
		::System::Single Field_1_8; // 0x34
		::UnityEngine::Vector3 Field_1_9; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_5D38E0A9AA20AF85__CTOR_OFFSET))(this);
		}
	};
}
