#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }

#define CLASS_1_CA9A7ECA43FC8636_CLASS_1_F2D17E30E1E79D69__CTOR_OFFSET UNITYSDK_OFFSET(0x129780A0)

inline static constexpr unsigned int Class_1_CA9A7ECA43FC8636_Class_1_F2D17E30E1E79D69_TypeDefinitionIndex = 70528;

class Class_1_CA9A7ECA43FC8636_Class_1_F2D17E30E1E79D69 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Field_1_3; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_1; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_CLASS_1_F2D17E30E1E79D69__CTOR_OFFSET))(this);
	}
};
