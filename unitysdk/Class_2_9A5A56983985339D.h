#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CE416D6C625B711.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"

class Class_1_ACC8B3CFF7B7DF3E;

#define CLASS_2_9A5A56983985339D_GET_DRAGDELTARATIO_OFFSET UNITYSDK_OFFSET(0xC4651E0)
#define CLASS_2_9A5A56983985339D_GET_GAMEPADDRAGSPEED_OFFSET UNITYSDK_OFFSET(0xC4651F0)
#define CLASS_2_9A5A56983985339D_METHOD_2_2607E225A39E6739_OFFSET UNITYSDK_OFFSET(0xC465200)
#define CLASS_2_9A5A56983985339D_METHOD_2_6A44D992A1239C6A_OFFSET UNITYSDK_OFFSET(0xC465210)
#define CLASS_2_9A5A56983985339D_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xC465560)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC4657C0)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC465520)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xC465440)
#define CLASS_2_9A5A56983985339D_ONDRAG_OFFSET UNITYSDK_OFFSET(0xC4654C0)
#define CLASS_2_9A5A56983985339D__CTOR_OFFSET UNITYSDK_OFFSET(0xC465290)

inline static constexpr unsigned int Class_2_9A5A56983985339D_TypeDefinitionIndex = 72544;

class Class_2_9A5A56983985339D : public ::Class_1_9CE416D6C625B711
{
public:
	::System::Single Field_2_0; // 0x28
	::System::Single Field_2_1; // 0x2C
	::System::Single _DragDeltaRatio_k__BackingField; // 0x30
	::System::Single Field_2_3; // 0x34
	::System::Single _GamepadDragSpeed_k__BackingField; // 0x38

	::System::Void _ctor(::Class_1_ACC8B3CFF7B7DF3E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACC8B3CFF7B7DF3E*))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D__CTOR_OFFSET))(this, a1);
	}

	::System::Single get_DragDeltaRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_GET_DRAGDELTARATIO_OFFSET))(this);
	}

	::System::Single get_GamepadDragSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_GET_GAMEPADDRAGSPEED_OFFSET))(this);
	}

	::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType Method_2_2607E225A39E6739()
	{
		return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_2607E225A39E6739_OFFSET))(this);
	}

	static ::Class_2_9A5A56983985339D* Method_2_6A44D992A1239C6A(::Class_1_ACC8B3CFF7B7DF3E* a1)
	{
		return ((::Class_2_9A5A56983985339D*(*)(::Class_1_ACC8B3CFF7B7DF3E*))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_6A44D992A1239C6A_OFFSET))(a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_ONDRAG_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
