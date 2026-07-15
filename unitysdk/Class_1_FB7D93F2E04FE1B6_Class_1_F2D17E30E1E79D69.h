#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }

#define CLASS_1_FB7D93F2E04FE1B6_CLASS_1_F2D17E30E1E79D69__CTOR_OFFSET UNITYSDK_OFFSET(0x146D7B10)

inline static constexpr unsigned int Class_1_FB7D93F2E04FE1B6_Class_1_F2D17E30E1E79D69_TypeDefinitionIndex = 72870;

class Class_1_FB7D93F2E04FE1B6_Class_1_F2D17E30E1E79D69 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Single Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6_CLASS_1_F2D17E30E1E79D69__CTOR_OFFSET))(this);
	}
};
