#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS180_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181C2FA0)
#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS180_0__SETLOCKJUMPENERGYAVATARMAXJUMPENERGY_B__0_OFFSET UNITYSDK_OFFSET(0x181E0F30)

inline static constexpr unsigned int Class_3_1E4F9B0ED3BF21DE___c__DisplayClass180_0_TypeDefinitionIndex = 41955;

class Class_3_1E4F9B0ED3BF21DE___c__DisplayClass180_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS180_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetLockJumpEnergyAvatarMaxJumpEnergy_b__0(::RPG::GameCore::FiveDimAvatarConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS180_0__SETLOCKJUMPENERGYAVATARMAXJUMPENERGY_B__0_OFFSET))(this, a1);
	}
};
