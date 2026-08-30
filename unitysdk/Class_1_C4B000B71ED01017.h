#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C4B000B71ED01017_CLEAR_OFFSET UNITYSDK_OFFSET(0x19C9E780)
#define CLASS_1_C4B000B71ED01017_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x19C9E760)
#define CLASS_1_C4B000B71ED01017_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x19C9E740)
#define CLASS_1_C4B000B71ED01017_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x19C9E770)
#define CLASS_1_C4B000B71ED01017_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x19C9E750)
#define CLASS_1_C4B000B71ED01017__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9E7F0)

inline static constexpr unsigned int Class_1_C4B000B71ED01017_TypeDefinitionIndex = 54071;

class Class_1_C4B000B71ED01017 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* OBGGPEHLPBG; // 0x10
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
	::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x20
	::System::Boolean KFHFGGIGAKK; // 0x28
	::System::Boolean GNIKNANDLNH; // 0x29
	::System::Boolean _LockDamageZero_k__BackingField; // 0x2A
	::System::Boolean BPKFCCGIEPH; // 0x2B
	::System::Boolean LBAFIMAMNPL; // 0x2C
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x2D
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
