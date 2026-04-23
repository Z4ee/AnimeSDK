#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS155_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180D0BB0)
#define CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS155_0__SETLOCKJUMPENERGYAVATARMAXJUMPENERGY_B__0_OFFSET UNITYSDK_OFFSET(0x180EFB30)

inline static constexpr unsigned int Class_3_1A92845FAFA5EC77___c__DisplayClass155_0_TypeDefinitionIndex = 39410;

class Class_3_1A92845FAFA5EC77___c__DisplayClass155_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS155_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetLockJumpEnergyAvatarMaxJumpEnergy_b__0(::RPG::GameCore::FiveDimAvatarConfig* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS155_0__SETLOCKJUMPENERGYAVATARMAXJUMPENERGY_B__0_OFFSET))(this, config);
	}
};
