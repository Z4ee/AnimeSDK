#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6C2797E3349B53EE_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x91C3030)
#define CLASS_1_6C2797E3349B53EE_1_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x91C3010)
#define CLASS_1_6C2797E3349B53EE_1_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x91C2FF0)
#define CLASS_1_6C2797E3349B53EE_1_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x91C3020)
#define CLASS_1_6C2797E3349B53EE_1_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x91C3000)
#define CLASS_1_6C2797E3349B53EE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x91C3090)

inline static constexpr unsigned int Class_1_6C2797E3349B53EE_1_TypeDefinitionIndex = 50711;

class Class_1_6C2797E3349B53EE_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::RPG::GameCore::GameEntity* Field_1_1; // 0x20
	::RPG::GameCore::FixPoint Field_1_4; // 0x28
	::System::Boolean Field_1_8; // 0x30
	::System::Boolean _LockDamageZero_k__BackingField; // 0x31
	::System::Boolean Field_1_3; // 0x32
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x33
	::System::Boolean Field_1_6; // 0x34
	::System::Boolean Field_1_7; // 0x35
	::RPG::GameCore::FixPoint Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_LockDamageZero()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_1_GET_LOCKDAMAGEZERO_OFFSET))(this);
	}

	::System::Void set_LockDamageZero(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_1_SET_LOCKDAMAGEZERO_OFFSET))(this, value);
	}

	::System::Boolean get_IsPropagateAttack()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_1_GET_ISPROPAGATEATTACK_OFFSET))(this);
	}

	::System::Void set_IsPropagateAttack(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_1_SET_ISPROPAGATEATTACK_OFFSET))(this, value);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_1_CLEAR_OFFSET))(this);
	}
};
