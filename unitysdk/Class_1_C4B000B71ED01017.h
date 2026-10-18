#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C4B000B71ED01017_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA95470)
#define CLASS_1_C4B000B71ED01017_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xBA95450)
#define CLASS_1_C4B000B71ED01017_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xBA95430)
#define CLASS_1_C4B000B71ED01017_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xBA95460)
#define CLASS_1_C4B000B71ED01017_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xBA95440)
#define CLASS_1_C4B000B71ED01017__CTOR_OFFSET UNITYSDK_OFFSET(0xBA954E0)

inline static constexpr unsigned int Class_1_C4B000B71ED01017_TypeDefinitionIndex = 53857;

class Class_1_C4B000B71ED01017 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
	::RPG::GameCore::GameEntity* OBGGPEHLPBG; // 0x20
	::System::Boolean GNIKNANDLNH; // 0x28
	::System::Boolean _LockDamageZero_k__BackingField; // 0x29
	::System::Boolean KFHFGGIGAKK; // 0x2A
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x2B
	::System::Boolean BPKFCCGIEPH; // 0x2C
	::System::Boolean LBAFIMAMNPL; // 0x2D
	::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x30

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
