#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS75_0__CREATEMASCOTFAKEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x18CC0270)
#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C98D90)

inline static constexpr unsigned int Class_3_1E4F9B0ED3BF21DE___c__DisplayClass75_0_TypeDefinitionIndex = 40182;

class Class_3_1E4F9B0ED3BF21DE___c__DisplayClass75_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CreateMascotFakePlayer_b__0(::RPG::GameCore::FiveDimAvatarConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS75_0__CREATEMASCOTFAKEPLAYER_B__0_OFFSET))(this, a1);
	}
};
