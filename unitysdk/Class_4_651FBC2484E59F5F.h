#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_D28AEC7035F35179.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

class Class_1_A80764A8DE475761;

#define CLASS_4_651FBC2484E59F5F_METHOD_4_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x160F2040)
#define CLASS_4_651FBC2484E59F5F_METHOD_4_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x160F1F70)
#define CLASS_4_651FBC2484E59F5F_METHOD_4_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x160F2100)
#define CLASS_4_651FBC2484E59F5F_METHOD_4_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x160F1F00)
#define CLASS_4_651FBC2484E59F5F_METHOD_4_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x160F1B90)
#define CLASS_4_651FBC2484E59F5F_METHOD_4_F856B3FDDBB350A1_OFFSET UNITYSDK_OFFSET(0x160F1C30)
#define CLASS_4_651FBC2484E59F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x160F2150)

inline static constexpr unsigned int Class_4_651FBC2484E59F5F_TypeDefinitionIndex = 73108;

class Class_4_651FBC2484E59F5F : public ::Class_3_D28AEC7035F35179
{
public:
	::System::Single Field_4_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_651FBC2484E59F5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_CFC95121222309BD(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_4_651FBC2484E59F5F_METHOD_4_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_4_F856B3FDDBB350A1(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_4_651FBC2484E59F5F_METHOD_4_F856B3FDDBB350A1_OFFSET))(this, a1);
	}

	::System::Void Method_4_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_651FBC2484E59F5F_METHOD_4_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_4_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_651FBC2484E59F5F_METHOD_4_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_4_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_651FBC2484E59F5F_METHOD_4_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_4_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_651FBC2484E59F5F_METHOD_4_A5399A0D57CB1550_OFFSET))(this);
	}
};
