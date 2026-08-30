#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_3_4CB32DEBF4243416;

#define CLASS_3_4CB32DEBF4243416___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B01D50)
#define CLASS_3_4CB32DEBF4243416___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0x16B02520)

inline static constexpr unsigned int Class_3_4CB32DEBF4243416___c__DisplayClass4_0_TypeDefinitionIndex = 76322;

class Class_3_4CB32DEBF4243416___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_3_4CB32DEBF4243416* __4__this; // 0x10
	::Class_2_B8E38BF47138A2E5* player; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord targetCoord; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnEnter_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB32DEBF4243416___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET))(this);
	}
};
