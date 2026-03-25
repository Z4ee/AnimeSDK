#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CE416D6C625B711.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"

class Class_1_9C16BAF1B182B319;

#define CLASS_2_9A5A56983985339D_GET_DRAGDELTARATIO_OFFSET UNITYSDK_OFFSET(0x10B9EC90)
#define CLASS_2_9A5A56983985339D_GET_GAMEPADDRAGSPEED_OFFSET UNITYSDK_OFFSET(0x10B9ECA0)
#define CLASS_2_9A5A56983985339D_METHOD_2_2607E225A39E6739_OFFSET UNITYSDK_OFFSET(0x10B9ECB0)
#define CLASS_2_9A5A56983985339D_METHOD_2_6A44D992A1239C6A_OFFSET UNITYSDK_OFFSET(0x10B9ECC0)
#define CLASS_2_9A5A56983985339D_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x10B9F000)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10B9F260)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B9EFC0)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x10B9EEE0)
#define CLASS_2_9A5A56983985339D_ONDRAG_OFFSET UNITYSDK_OFFSET(0x10B9EF60)
#define CLASS_2_9A5A56983985339D__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9ED40)

inline static constexpr unsigned int Class_2_9A5A56983985339D_TypeDefinitionIndex = 63482;

class Class_2_9A5A56983985339D : public ::Class_1_9CE416D6C625B711
{
public:
	::System::Single _DragDeltaRatio_k__BackingField; // 0x28
	::System::Single Field_2_1; // 0x2C
	::System::Single Field_2_2; // 0x30
	::System::Single _GamepadDragSpeed_k__BackingField; // 0x34
	::System::Single Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_9C16BAF1B182B319* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C16BAF1B182B319*))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D__CTOR_OFFSET))(this, a1);
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

	static ::Class_2_9A5A56983985339D* Method_2_6A44D992A1239C6A(::Class_1_9C16BAF1B182B319* a1)
	{
		return ((::Class_2_9A5A56983985339D*(*)(::Class_1_9C16BAF1B182B319*))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_6A44D992A1239C6A_OFFSET))(a1);
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
