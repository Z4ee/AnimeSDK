#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }

#define CLASS_1_8B7E7C2DCDDA55DF_CLASS_1_F2D17E30E1E79D69__CTOR_OFFSET UNITYSDK_OFFSET(0x1622D520)

inline static constexpr unsigned int Class_1_8B7E7C2DCDDA55DF_Class_1_F2D17E30E1E79D69_TypeDefinitionIndex = 76342;

class Class_1_8B7E7C2DCDDA55DF_Class_1_F2D17E30E1E79D69 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* BNPBNGOACHG; // 0x10
	::System::Boolean PODBDMJEMJP; // 0x18
	::System::Boolean NGOIPLNIEIN; // 0x19
	::System::Single BJMAMHMCOEL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF_CLASS_1_F2D17E30E1E79D69__CTOR_OFFSET))(this);
	}
};
