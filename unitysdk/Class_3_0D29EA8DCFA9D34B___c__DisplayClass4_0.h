#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_3_0D29EA8DCFA9D34B;

#define CLASS_3_0D29EA8DCFA9D34B___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7DB6B0)
#define CLASS_3_0D29EA8DCFA9D34B___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0xA7DBF20)

inline static constexpr unsigned int Class_3_0D29EA8DCFA9D34B___c__DisplayClass4_0_TypeDefinitionIndex = 71332;

class Class_3_0D29EA8DCFA9D34B___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_3_0D29EA8DCFA9D34B* __4__this; // 0x10
	::Class_2_B8E38BF47138A2E5* player; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord targetCoord; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnEnter_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D29EA8DCFA9D34B___C__DISPLAYCLASS4_0___ONENTER_B__0_OFFSET))(this);
	}
};
