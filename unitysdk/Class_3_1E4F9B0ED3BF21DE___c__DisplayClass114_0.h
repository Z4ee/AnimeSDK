#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS114_0__CREATEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x181E0F10)
#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS114_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181B76C0)

inline static constexpr unsigned int Class_3_1E4F9B0ED3BF21DE___c__DisplayClass114_0_TypeDefinitionIndex = 41954;

class Class_3_1E4F9B0ED3BF21DE___c__DisplayClass114_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS114_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CreatePlayer_b__0(::RPG::GameCore::FiveDimAvatarConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS114_0__CREATEPLAYER_B__0_OFFSET))(this, a1);
	}
};
