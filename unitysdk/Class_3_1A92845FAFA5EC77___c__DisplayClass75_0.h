#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS75_0__CREATEMASCOTFAKEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x180EFB50)
#define CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180C03D0)

inline static constexpr unsigned int Class_3_1A92845FAFA5EC77___c__DisplayClass75_0_TypeDefinitionIndex = 39411;

class Class_3_1A92845FAFA5EC77___c__DisplayClass75_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CreateMascotFakePlayer_b__0(::RPG::GameCore::FiveDimAvatarConfig* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1A92845FAFA5EC77___C__DISPLAYCLASS75_0__CREATEMASCOTFAKEPLAYER_B__0_OFFSET))(this, config);
	}
};
