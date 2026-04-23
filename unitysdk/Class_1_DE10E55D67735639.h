#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/RPG/GameCore/EAdventureNavigationRootMotionHandlerState.h"
#include "unitysdk/System/Object.h"

class Class_2_A0580152EB393340;
namespace RPG::Client { class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2; }
namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_1_DE10E55D67735639_GET_ALLOWROTATION_OFFSET UNITYSDK_OFFSET(0x12480110)
#define CLASS_1_DE10E55D67735639_GET_STATE_OFFSET UNITYSDK_OFFSET(0x124800F0)
#define CLASS_1_DE10E55D67735639_METHOD_1_4166DF40939A3516_OFFSET UNITYSDK_OFFSET(0x12480450)
#define CLASS_1_DE10E55D67735639_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x124803C0)
#define CLASS_1_DE10E55D67735639_METHOD_1_C10F8EF31879ABA4_OFFSET UNITYSDK_OFFSET(0x12480150)
#define CLASS_1_DE10E55D67735639_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x12480A50)
#define CLASS_1_DE10E55D67735639_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x12480300)
#define CLASS_1_DE10E55D67735639_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x12480130)
#define CLASS_1_DE10E55D67735639_SET_ALLOWROTATION_OFFSET UNITYSDK_OFFSET(0x12480120)
#define CLASS_1_DE10E55D67735639_SET_STATE_OFFSET UNITYSDK_OFFSET(0x12480100)
#define CLASS_1_DE10E55D67735639__CTOR_OFFSET UNITYSDK_OFFSET(0x12480B00)

inline static constexpr unsigned int Class_1_DE10E55D67735639_TypeDefinitionIndex = 52654;

class Class_1_DE10E55D67735639 : public ::System::Object
{
public:
	::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve Field_1_9; // 0x10
	::Class_2_A0580152EB393340* Field_1_0; // 0x28
	::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2* Field_1_8; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_1_1; // 0x38
	::System::Single Field_1_7; // 0x40
	::RPG::GameCore::EAdventureNavigationRootMotionHandlerState _State_k__BackingField; // 0x44
	::System::Single Field_1_5; // 0x48
	::System::Single Field_1_4; // 0x4C
	::System::Boolean Field_1_6; // 0x50
	::System::Boolean _AllowRotation_k__BackingField; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::EAdventureNavigationRootMotionHandlerState get_State()
	{
		return ((::RPG::GameCore::EAdventureNavigationRootMotionHandlerState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::GameCore::EAdventureNavigationRootMotionHandlerState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAdventureNavigationRootMotionHandlerState))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_SET_STATE_OFFSET))(this, value);
	}

	::System::Boolean get_AllowRotation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_GET_ALLOWROTATION_OFFSET))(this);
	}

	::System::Void set_AllowRotation(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_SET_ALLOWROTATION_OFFSET))(this, value);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_C10F8EF31879ABA4(::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2* a1, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_C10F8EF31879ABA4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_4166DF40939A3516(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_4166DF40939A3516_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}
};
