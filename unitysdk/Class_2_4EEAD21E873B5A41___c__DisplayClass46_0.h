#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A8148841049062A;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }

#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF182D0)
#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS46_0___TRYRESTOREDIMENSIONUPGRADESTATE_B__0_OFFSET UNITYSDK_OFFSET(0xBF1A9F0)

inline static constexpr unsigned int Class_2_4EEAD21E873B5A41___c__DisplayClass46_0_TypeDefinitionIndex = 60514;

class Class_2_4EEAD21E873B5A41___c__DisplayClass46_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryRestoreDimensionUpgradeState_b__0(::Class_2_1A8148841049062A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A8148841049062A*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS46_0___TRYRESTOREDIMENSIONUPGRADESTATE_B__0_OFFSET))(this, a1);
	}
};
