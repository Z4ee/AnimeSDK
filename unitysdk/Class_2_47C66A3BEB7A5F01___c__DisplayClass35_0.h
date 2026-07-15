#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2661F5CE5402F421;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }

#define CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBB0D0)
#define CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS35_0___TRYRESTOREDIMENSIONUPGRADESTATE_B__0_OFFSET UNITYSDK_OFFSET(0x16CBB0E0)

inline static constexpr unsigned int Class_2_47C66A3BEB7A5F01___c__DisplayClass35_0_TypeDefinitionIndex = 57696;

class Class_2_47C66A3BEB7A5F01___c__DisplayClass35_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryRestoreDimensionUpgradeState_b__0(::Class_2_2661F5CE5402F421* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_2661F5CE5402F421*))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS35_0___TRYRESTOREDIMENSIONUPGRADESTATE_B__0_OFFSET))(this, a1);
	}
};
