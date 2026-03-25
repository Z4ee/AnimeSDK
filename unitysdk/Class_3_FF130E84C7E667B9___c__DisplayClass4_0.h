#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_3_FF130E84C7E667B9;

#define CLASS_3_FF130E84C7E667B9___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x115E0660)
#define CLASS_3_FF130E84C7E667B9___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0x115E0B00)

inline static constexpr unsigned int Class_3_FF130E84C7E667B9___c__DisplayClass4_0_TypeDefinitionIndex = 62505;

class Class_3_FF130E84C7E667B9___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_0C58AD91B0F4D809* player; // 0x10
	::Class_3_FF130E84C7E667B9* __4__this; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord targetCoord; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnEnter_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF130E84C7E667B9___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET))(this);
	}
};
