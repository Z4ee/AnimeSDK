#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_7F261685B3D20507__CTOR_OFFSET UNITYSDK_OFFSET(0x9A25740)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_Class_1_7F261685B3D20507_TypeDefinitionIndex = 62540;

	class FourRotateVoxelGameStartCurve_Class_1_7F261685B3D20507 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Field_1_0; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_CFEC17D7952BD0DC*>* Field_1_1; // 0x18
		::System::Single Field_1_3; // 0x20
		::System::Single Field_1_4; // 0x24
		::System::Boolean Field_1_6; // 0x28
		::System::Single Field_1_2; // 0x2C
		::System::Single Field_1_5; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CLASS_1_7F261685B3D20507__CTOR_OFFSET))(this);
		}
	};
}
