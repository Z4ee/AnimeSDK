#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C4B000B71ED01017_CLEAR_OFFSET UNITYSDK_OFFSET(0xA857430)
#define CLASS_1_C4B000B71ED01017_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xA857410)
#define CLASS_1_C4B000B71ED01017_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xA8573F0)
#define CLASS_1_C4B000B71ED01017_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xA857420)
#define CLASS_1_C4B000B71ED01017_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xA857400)
#define CLASS_1_C4B000B71ED01017__CTOR_OFFSET UNITYSDK_OFFSET(0xA8574A0)

inline static constexpr unsigned int Class_1_C4B000B71ED01017_TypeDefinitionIndex = 50305;

class Class_1_C4B000B71ED01017 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::System::Boolean Field_1_6; // 0x32
	::System::Boolean Field_1_7; // 0x33
	::System::Boolean _LockDamageZero_k__BackingField; // 0x34
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017__CTOR_OFFSET))(this);
	}

	::System::Boolean get_LockDamageZero()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_GET_LOCKDAMAGEZERO_OFFSET))(this);
	}

	::System::Void set_LockDamageZero(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_SET_LOCKDAMAGEZERO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPropagateAttack()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_GET_ISPROPAGATEATTACK_OFFSET))(this);
	}

	::System::Void set_IsPropagateAttack(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_SET_ISPROPAGATEATTACK_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B000B71ED01017_CLEAR_OFFSET))(this);
	}
};
