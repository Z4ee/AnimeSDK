#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C4B000B71ED01017_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xA5B07D0)
#define CLASS_1_C4B000B71ED01017_1_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xA5B07B0)
#define CLASS_1_C4B000B71ED01017_1_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xA5B0790)
#define CLASS_1_C4B000B71ED01017_1_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xA5B07C0)
#define CLASS_1_C4B000B71ED01017_1_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xA5B07A0)
#define CLASS_1_C4B000B71ED01017_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B0850)

inline static constexpr unsigned int Class_1_C4B000B71ED01017_1_TypeDefinitionIndex = 51379;

class Class_1_C4B000B71ED01017_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean _LockDamageZero_k__BackingField; // 0x3A
	::System::Boolean Field_1_8; // 0x3B
	::System::Boolean Field_1_9; // 0x3C
	::System::Boolean Field_1_10; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_1__CTOR_OFFSET))(this);
	}

	::System::Boolean get_LockDamageZero()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_1_GET_LOCKDAMAGEZERO_OFFSET))(this);
	}

	::System::Void set_LockDamageZero(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_1_SET_LOCKDAMAGEZERO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPropagateAttack()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_1_GET_ISPROPAGATEATTACK_OFFSET))(this);
	}

	::System::Void set_IsPropagateAttack(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_1_SET_ISPROPAGATEATTACK_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_1_CLEAR_OFFSET))(this);
	}
};
