#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C4B000B71ED01017_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xB733A00)
#define CLASS_1_C4B000B71ED01017_1_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xB7339E0)
#define CLASS_1_C4B000B71ED01017_1_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xB7339C0)
#define CLASS_1_C4B000B71ED01017_1_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xB7339F0)
#define CLASS_1_C4B000B71ED01017_1_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xB7339D0)
#define CLASS_1_C4B000B71ED01017_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB733A80)

inline static constexpr unsigned int Class_1_C4B000B71ED01017_1_TypeDefinitionIndex = 54979;

class Class_1_C4B000B71ED01017_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
	::RPG::GameCore::GameEntity* OBGGPEHLPBG; // 0x20
	::RPG::GameCore::FixPoint GBCIHEMICFM; // 0x28
	::System::Boolean KFHFGGIGAKK; // 0x30
	::System::Boolean LBAFIMAMNPL; // 0x31
	::System::Boolean BPKFCCGIEPH; // 0x32
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x33
	::System::Boolean GNIKNANDLNH; // 0x34
	::System::Boolean _LockDamageZero_k__BackingField; // 0x35
	::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x38

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
