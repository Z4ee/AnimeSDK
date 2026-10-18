#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS118_0__CREATEPHANTOMPLAYERVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1C9E7680)
#define CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS118_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BB7C0)

inline static constexpr unsigned int Class_3_1E4F9B0ED3BF21DE___c__DisplayClass118_0_TypeDefinitionIndex = 43595;

class Class_3_1E4F9B0ED3BF21DE___c__DisplayClass118_0 : public ::System::Object
{
public:
	::System::UInt32 avatarID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS118_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _CreatePhantomPlayerView_b__0(::RPG::GameCore::FiveDimAvatarConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1E4F9B0ED3BF21DE___C__DISPLAYCLASS118_0__CREATEPHANTOMPLAYERVIEW_B__0_OFFSET))(this, a1);
	}
};
