#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/RPG/GameCore/EAdventureNavigationRootMotionHandlerState.h"
#include "unitysdk/System/Object.h"

class Class_2_A0580152EB393340;
namespace RPG::Client { class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3; }
namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_1_DE10E55D67735639_GET_ALLOWROTATION_OFFSET UNITYSDK_OFFSET(0xE88D370)
#define CLASS_1_DE10E55D67735639_GET_STATE_OFFSET UNITYSDK_OFFSET(0xE88D350)
#define CLASS_1_DE10E55D67735639_METHOD_1_4166DF40939A3516_OFFSET UNITYSDK_OFFSET(0xE88D6A0)
#define CLASS_1_DE10E55D67735639_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE88D620)
#define CLASS_1_DE10E55D67735639_METHOD_1_C10F8EF31879ABA4_OFFSET UNITYSDK_OFFSET(0xE88D3B0)
#define CLASS_1_DE10E55D67735639_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0xE88DCA0)
#define CLASS_1_DE10E55D67735639_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xE88D560)
#define CLASS_1_DE10E55D67735639_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xE88D390)
#define CLASS_1_DE10E55D67735639_SET_ALLOWROTATION_OFFSET UNITYSDK_OFFSET(0xE88D380)
#define CLASS_1_DE10E55D67735639_SET_STATE_OFFSET UNITYSDK_OFFSET(0xE88D360)
#define CLASS_1_DE10E55D67735639__CTOR_OFFSET UNITYSDK_OFFSET(0xE88DD50)

inline static constexpr unsigned int Class_1_DE10E55D67735639_TypeDefinitionIndex = 57290;

class Class_1_DE10E55D67735639 : public ::System::Object
{
public:
	::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve FMPNNDANCKN; // 0x10
	::Class_2_A0580152EB393340* DEMFJAMDLFP; // 0x28
	::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3* EDAHOAGFFHN; // 0x30
	::RPG::GameCore::AdventureCharacterController* JIIKAEMELPJ; // 0x38
	::System::Single FCJJOMFMKOC; // 0x40
	::System::Single ADFCGIBHAIH; // 0x44
	::RPG::GameCore::EAdventureNavigationRootMotionHandlerState _State_k__BackingField; // 0x48
	::System::Boolean NFDILONBJHJ; // 0x4C
	::System::Boolean _AllowRotation_k__BackingField; // 0x4D
	::System::Single PGMIOKKLHIE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::EAdventureNavigationRootMotionHandlerState get_State()
	{
		return ((::RPG::GameCore::EAdventureNavigationRootMotionHandlerState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::GameCore::EAdventureNavigationRootMotionHandlerState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAdventureNavigationRootMotionHandlerState))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_SET_STATE_OFFSET))(this, a1);
	}

	::System::Boolean get_AllowRotation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_GET_ALLOWROTATION_OFFSET))(this);
	}

	::System::Void set_AllowRotation(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_SET_ALLOWROTATION_OFFSET))(this, a1);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_C10F8EF31879ABA4(::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3* a1, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE10E55D67735639_METHOD_1_C10F8EF31879ABA4_OFFSET))(this, a1, a2, a3, a4);
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
